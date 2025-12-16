#include <iostream>
using namespace std;
 
struct Node {
   int data;
   Node* next;
};
 
int main() {
   Node *head = NULL;
 
   // Create first node
   Node* n1 = new Node{10, NULL};
   head = n1;
 
   // Create second node
   Node* n2 = new Node{20, NULL};
 
   n1->next = n2;
   n2->next = head;   // Makes it circular
 
   // Print 4 elements (looping)
   Node* temp = head;
   for (int i = 0; i < 4; i++) {
       cout << temp->data << " ";
       temp = temp->next;
   }
 
   return 0;
}
