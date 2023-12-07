#include <iostream>
using namespace std;

// col
/*AAA-> //row
  BBB
  CCC
*/
int main()
{
    int n = 5;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            char ch = 'A';
            ch = ch + row - 1;
            cout << ch;
        }
        cout << endl;
    }
}