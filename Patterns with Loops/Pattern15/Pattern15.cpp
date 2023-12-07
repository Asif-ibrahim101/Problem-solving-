#include <iostream>
using namespace std;

/*  1
   121
  12321
 1234321
*/


int main() {
    int n;
    cin >> n;

    for(int row = 1; row <= n; row++) {

        //first triangle the spacess
        int space = n - row;

        while (space)
        {
            cout << " ";
            space = space - 1;
        };
        //second triangle

        for(int col = 1; col <= row; col++) {
            cout << col;
        };

         //the third triangle
         int start = row -1;
         while(start) {
            cout << start;
            start--;
         }
        cout << endl;
    };



};