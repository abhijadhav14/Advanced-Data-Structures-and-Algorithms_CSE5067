#include <iostream>
#include <queue>
using namespace std;
 
int main() {
   priority_queue<int> pq;   // Max-heap priority queue
 
   pq.push(30);
   pq.push(10);
   pq.push(50);
 
   cout << “Top element: “ << pq.top() << endl; // Highest value
 
   pq.pop(); // removes 50
   cout << “After pop, top: “ << pq.top() << endl;
 
   return 0;
}
