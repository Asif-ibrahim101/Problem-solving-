#include <iostream>
using namespace std;

/* 1
   23
   345
   4567
   56789
*/

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <=n; i++) {
        for(int j = i; j < 2 * i; j++ ) {
            cout << j << " ";
        }
        cout << endl;
    };
};