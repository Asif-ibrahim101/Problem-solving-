#include <iostream>
using namespace std;

// 12345
// 678910
int main() {
   int n;
   cin >> n;

   int count = 1;

   for (int i = 1; i <= n; i++)
   {
      for (int j = 0; j < n; j++)
      {
        count += 1;
        cout << count;
      }
      cout << endl;
   }
   
};