#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>
using namespace std;

void setTable();
string table[10][2] = {
    // array
    {" black", " 0"},  {" brown", " 1"}, {" red", " 2"},  {" orange", " 3"},
    {" yellow", " 4"}, {" green", " 5"}, {" blue", " 6"}, {" violet", " 7"},
    {" gray", " 8"},   {" white", " 9"},
};
int main() {
    setTable();

    getch();
    return 0;
}
void setTable() {
    char row = 205, col = 179, cornerL = 198, cornerR = 181, midd = 197,
        cornerLU = 218;
    char cornerRU = 188, middU = 193, cornerRR = 191, cornerLL = 218,
        middleSingle = 194;  // ascii codes

    for (int f = 0; f < 17; f++) {
        if (f == 0) {
            cout << cornerLL;
        }
        else if (f == 16) {
            cout << cornerRR;
        }
        else if (f == 8) {
            cout << middleSingle;
        }
        else {
            cout << row;
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << "\n";
        for (int r = 0; r < 16; r++) {
            if (r == 0)
                cout << col;
            else if (r == 14)
                cout << col;
            else if (r == 7)
                cout << col;  // midd
            cout << " ";
        }
        cout << "\n";
        for (int j = 0; j < 2; j++) {
            cout << table[i][j] << "\t";
            cout << col;
        }
        cout << "\n";
        for (int rd = 0; rd < 17; rd++) {
            switch (rd) {
            case 0:
                cout << cornerL;
                continue;
            case 16:
                cout << cornerR;
                continue;
            case 8:
                cout << midd;
                continue;
            default:
                cout << row;
            }
        }
    }
}