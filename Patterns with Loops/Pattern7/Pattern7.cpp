#include <iostream>
using namespace std;

/* A B C
   A B C
   A B C
*/

int main()
{
    int n = 3;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            char ch = 'A';
            ch = ch + col - 1;
            cout << ch;
        };
        cout << endl;
    };
}