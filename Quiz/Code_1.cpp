#include <iostream>
#include <string>
using namespace std;

int main() {
    string kota;
    string bangunan;
    float luas;
    long biaya;

    cout<<"Kota :";
    cin>>kota;
    cout<<"Bangunan :";
    cin>>bangunan;
    cout<<"Luas Bangunan :";
    cin>>luas;

    if (kota=="Solo") {
        if (bangunan=="Kantor") {
            if (luas<=100) {
                biaya=luas*30000000;
                cout<<biaya;
            }
            else if (100<luas<=500) {
                biaya=luas*60000000;
                cout<<biaya;
            }
            else if (luas>500) {
                biaya=luas*80000000;
                cout<<biaya;
            }
            else {
                cout<<"Invalid";
            }
        }
        else if (bangunan=="Rumah") {
            if (luas<=50) {
                biaya=luas*10000000;
                cout<<biaya;
            }
            else if (50<luas<=300) {
                biaya=luas*20000000;
                cout<<biaya;
            }
            else if (luas>300) {
                biaya=luas*30000000;
                cout<<biaya;
            }
            else {
                cout<<"Invalid";
            }
        }
        else {
            cout<<"Invalid";
        }
    }
    else if (kota=="Semarang") {
        if (bangunan=="Kantor") {
            if (luas<=100) {
                biaya=luas*40000000;
                cout<<biaya;
            }
            else if (100<luas<=500) {
                biaya=luas*75000000;
                cout<<biaya;
            }
            else if (luas>500) {
                biaya=luas*100000000;
                cout<<biaya;
            }
            else {
                cout<<"Invalid";
            }
        }
        else if (bangunan=="Rumah") {
            if (luas<=50) {
                biaya=luas*12000000;
                cout<<biaya;
            }
            else if (50<luas<=300) {
                biaya=luas*25000000;
                cout<<biaya;
            }
            else if (luas>300) {
                biaya=luas*40000000;
                cout<<biaya;
            }
            else {
                cout<<"Invalid";
            }
        }
        else {
            cout<<"Invalid";
        }
    }
    else {
        cout<<"Tidak ditemukan";
    }
    return 0;
}
