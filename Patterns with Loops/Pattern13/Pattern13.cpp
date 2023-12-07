#include <iostream>
using namespace std;

/*
    A B C
    B C D
    C D E
*/

int main() {
    int n;
    cin >> n;

    for(int row = 0; row < n; row++) {
        char start = 'A' + row;

        for(int col = 0; col < n; col++) {
            cout << start;
            start = start + 1;
        }
        cout << endl;
    }
};
// #include <iostream>

// int main() {
//     int n = 3; // Number of rows

//     // Outer loop for rows
//     for (int i = 0; i < n; ++i) {
//         char ch = 'A' + i; // Starting character for each row

//         // Inner loop for columns
//         for (int j = 0; j < 3; ++j) {
//             std::cout << ch << " ";
//             ++ch; // Move to the next character
//         }

//         std::cout << std::endl; // Move to the next line after each row
//     }

//     return 0;
// }
