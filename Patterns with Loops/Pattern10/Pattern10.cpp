#include <iostream>
using namespace std;

/*
   A
   BC
   DEF
   GHIJ
*/

int main() {
    int n = 4;
    char ch = 'A';

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++ ) {
            cout << ch;
            ch = ch + 1;
        };
        cout << endl;
    }
};