// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>
using namespace std;
int main()
{
    cout << "\n\n\n\n\t\tLoading...\n\t\t|";
    for (int i = 1; i <= 25; i++) {
        cout << " ";
    }
    cout << "|\r\t\t|";
    for (int i = 1; i <= 25; i++) {
        for (int k = 1; k <= i; k++) {
            cout << char(219);
        }
        for (int j = i + 1; j <= 25; j++) {
            cout << " ";
        }
        cout << "|";
        cout << i * 4 << "%" << "\r\t\t|";
        Sleep(200);
    }
    cout << "\n\n";
}

