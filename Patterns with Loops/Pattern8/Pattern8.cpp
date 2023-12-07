#include <iostream>
using namespace std;

/* A B C
   D E F
   G H I
*/
int main()
{
    char ch = 'A';
    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 3; col++)
        {
            ch = ch + 1;
            cout << ch;
        }
        cout << endl;
    }
};