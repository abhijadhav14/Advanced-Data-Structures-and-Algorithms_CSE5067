#include <iostream>
using namespace std;

#define SIZE 5   // queue size

// ---------------------- SIMPLE QUEUE --------------------------
class SimpleQueue {
    int arr[SIZE];
    int front, rear;

public:
    SimpleQueue() {
        front = rear = -1;
    }

    void enqueue(int x) {
        if (rear == SIZE - 1) {
            cout << "Simple Queue Overflow!" << endl;
        } else {
            if (front == -1) front = 0;
            arr[++rear] = x;
            cout << x << " inserted into Simple Queue" << endl;
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Simple Queue Underflow!" << endl;
        } else {
            cout << arr[front] << " removed from Simple Queue" << endl;
            front++;
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Simple Queue is Empty!" << endl;
        } else {
            cout << "Simple Queue Elements: ";
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

// ---------------------- CIRCULAR QUEUE ------------------------
class CircularQueue {
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = rear = -1;
    }

    void enqueue(int x) {
        if ((front == 0 && rear == SIZE - 1) || (rear + 1 == front)) {
            cout << "Circular Queue Overflow!" << endl;
        } else {
            if (front == -1)
                front = rear = 0;
            else
                rear = (rear + 1) % SIZE;

            arr[rear] = x;
            cout << x << " inserted into Circular Queue" << endl;
        }
    }

    void dequeue() {
        if (front == -1) {
            cout << "Circular Queue Underflow!" << endl;
        } else {
            cout << arr[front] << " removed from Circular Queue" << endl;

            if (front == rear)
                front = rear = -1;
            else
                front = (front + 1) % SIZE;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Circular Queue is Empty!" << endl;
        } else {
            cout << "Circular Queue Elements: ";
            int i = front;
            while (true) {
                cout << arr[i] << " ";
                if (i == rear) break;
                i = (i + 1) % SIZE;
            }
            cout << endl;
        }
    }
};

// ---------------------------- MAIN MENU -----------------------
int main() {
    SimpleQueue sq;
    CircularQueue cq;

    int choice, subchoice, value;

    while (true) {
        cout << "\n===== MAIN MENU =====\n";
        cout << "1. Simple Queue\n";
        cout << "2. Circular Queue\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 3) break;

        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\nEnter subchoice: ";
        cin >> subchoice;

        switch (choice) {
            case 1: // simple queue
                if (subchoice == 1) {
                    cout << "Enter value: ";
                    cin >> value;
                    sq.enqueue(value);
                } else if (subchoice == 2) {
                    sq.dequeue();
                } else {
                    sq.display();
                }
                break;

            case 2: // circular queue
                if (subchoice == 1) {
                    cout << "Enter value: ";
                    cin >> value;
                    cq.enqueue(value);
                } else if (subchoice == 2) {
                    cq.dequeue();
                } else {
                    cq.display();
                }
                break;

            default:
                cout << "Invalid Choice! Try Again.\n";
        }
    }

    return 0;
}
