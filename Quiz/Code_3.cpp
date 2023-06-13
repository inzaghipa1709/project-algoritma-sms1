#include <iostream>
using namespace std;

int main()
{
    int pilihan,i,indeks;
    char pil;

    menu:
    system("cls");
    cout << "====DAFTAR CHANNEL TV====" << endl;
    cout << "1. RCTI                  " << endl;
    cout << "2. ANTV                  " << endl;
    cout << "3. TRANS TV              " << endl;
    cout << "========================" << endl;
    cout << "Masukkan Channel Pilihan   : "; cin >> pilihan;
    cout << "========================" << endl;
    switch(pilihan){
        case 1:
         cout << "Masukkan Jumlah Array : "; cin >> bilangan1;
            if (pilihan==1) {
                cout<<"1. RCTI";
            else if (pilihan==2) {
                cout<<"2. ANTV";
            else if (pilihan==3) {
                cout<<"3. TRANS TV";
            }
            else {
                cout<<"Invalid";
            }
            return 0;
    }
    system ("pause");

    goto menu;
    return 0;
}
