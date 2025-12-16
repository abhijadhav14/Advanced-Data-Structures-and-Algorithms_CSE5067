#include <iostream>
using namespace std;
 
struct Node {
   int data;
   Node *prev, *next;
};
 
int main() {
   Node *head = NULL;
 
   // Insert 10
   Node* n1 = new Node{10, NULL, NULL};
   head = n1;
 
   // Insert 20 at end
   Node* n2 = new Node{20, n1, NULL};
   n1->next = n2;
 
   // Delete 20
   n1->next = NULL;
   delete n2;
 
   // Print list
   Node* temp = head;
   while (temp != NULL) {
       cout << temp->data << " ";
       temp = temp->next;
   }
 
   return 0;
}
