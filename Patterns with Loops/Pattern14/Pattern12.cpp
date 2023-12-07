#include <iostream>
using namespace std;

/*
      *
     **
    ***
   ****  
*/

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int space = n - i;

        //loop for printing the space
        while(space) {
            cout << " ";
            space = space - 1;
        }

        //loop for printing the stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        };
        cout << endl;
    }
};