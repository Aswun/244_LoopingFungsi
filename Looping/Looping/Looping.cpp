#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nNB, nCompass, nNike;
int hAdidas = 300, hPuma = 250, hNB = 150, hCompass = 150, hNike = 350;

void input ()
{
    cout << "Masukan jumlah Adidas =";
    cin >> nAdidas;

    cout << "Masukan jumlah Puma =";
    cin >> nPuma;
    
    cout << "Masukan jumlah New Balance =";
    cin >> nNB;

    cout << "Masukan jumlah Compass =";
    cin >> nCompass;

    cout << "Masukan jumlah NIke =";
    cin >> nNike;
}

int totalHarga ()
{
    return (nAdidas * hAdidas) + (nPuma *hPuma) + (nNB * hNB) +(nNike * hNike);
}

void display ()
{
    cout << endl;
    cout << "========================" << endl;
    cout << endl;
    cout << "Jumlah puma =" << nPuma << endl;
    cout << "JUmlah nAdidas" << nAdidas << endl;
    cout << "Total Harga = Rp." << totalHarga() << endl;
}

int main ()
{
    input ();
    display ();
}