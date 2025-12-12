#include <iostream>
using namespace std;
 
struct Node {
   int data;
   Node* next;
};
int main() {
   Node *head = NULL;
 
   // Insert 10
   Node* n1 = new Node{10, NULL};
   head = n1;
 
   // Insert 20
   Node* n2 = new Node{20, NULL};
   n1->next = n2;
 
   // Print list
   Node* temp = head;
   while (temp != NULL) {
       cout << temp->data << “ “;
       temp = temp->next;
   }
 
   return 0;  }
