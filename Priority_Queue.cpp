#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void insertPQ(vector<int> &pq, int x) {
   pq.push_back(x);
   sort(pq.rbegin(), pq.rend());   // keep highest first
}
 
void deleteTop(vector<int> &pq) {
   if (!pq.empty())
       pq.erase(pq.begin());
}
 
bool searchPQ(vector<int> &pq, int x) {
   for (int n : pq)
       if (n == x) return true;
   return false;
}
 
int main() {
   vector<int> pq;
 
   insertPQ(pq, 30);
   insertPQ(pq, 10);
   insertPQ(pq, 50);
 
   cout << "Top = " << pq[0] << endl;
 
   deleteTop(pq);
   cout << "After deletion, Top = " << pq[0] << endl;
 
   cout << "Search 10: " << (searchPQ(pq, 10) ? "Found" : "Not Found");
 
   return 0;
}
 
