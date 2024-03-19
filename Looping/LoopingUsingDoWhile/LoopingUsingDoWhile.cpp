#include <iostream>
using namespace std;

int main ()
{
    string pilihan;
    do
    {
        cout << "makan" << endl;
        cout << "main game" << endl;
        cout << "ibadah" << endl;

        cout << "Apakah anda masih hidup? (Yes/No)";
        cin >> pilihan;
    }
    while (pilihan == "Yes");
}