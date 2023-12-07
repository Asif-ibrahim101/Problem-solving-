#include <iostream>
using namespace std;

/*
    A
    BB
    CCC
*/
int main() {
    int n = 5;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            char ch = 'A';
            ch = ch + i - 1;

            cout << ch;
        }
        cout << endl;
    }
}