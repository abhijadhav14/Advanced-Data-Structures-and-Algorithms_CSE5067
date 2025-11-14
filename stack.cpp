#include <iostream>
using namespace std;
#define MAX 5
int stackArr[MAX];
int top = -1;
void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow! Cannot push " << value << endl;
    } else {
        top++;
        stackArr[top] = value;
        cout << value << " pushed into the stack." << endl;
    }
}
void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Stack is empty." << endl;
    } else {
        cout << "Popped element: " << stackArr[top] << endl;
        top--;
    }
}
void peek() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Top element is: " << stackArr[top] << endl;
    }
}
int main() {
    int choice, value;
    while (true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}
