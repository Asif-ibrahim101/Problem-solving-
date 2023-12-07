#include <iostream>
using namespace std;

/*
    A
    B C
    C D E
    D E F G
*/

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            char ch = 'A' + i + j - 2;
            cout << ch;
        };
        cout << endl;
    };
};