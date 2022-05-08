//Nama  : Ardy Pratama Syahputra
//NRP   : 5024211035

#include "include/persegipanjang.hpp"
#include <iostream>
using namespace std;

int main()
{   
    //float PjgX, TghX, PjgY, TghY;

    // cout << "Masukkan data persegi panjang yang ingin dikalkulasikan :\n" << endl;
    // cout << "Data persegi panjang 1 :" << endl;
    // cout << "Panjang                : "; cin >> PjgX;
    // cout << "\nLebar                : "; cin >> PjgY;
    // cout << "\nTitik tengah panjang : "; cin >> TghX;
    // cout << "\nTitik tengah lebar   : "; cin >> TghY;
    // cout << "\n\n";
    //PersegiPanjang P1(PjgX,TghX,PjgY,TghY);
    // cout << "Data persegi panjang 2 :" << endl;
    // cout << "Panjang                : "; cin >> PjgX;
    // cout << "\nLebar                : "; cin >> PjgY;
    // cout << "\nTitik tengah panjang : "; cin >> TghX;
    // cout << "\nTitik tengah lebar   : "; cin >> TghY;
    // cout << "\n\n";
    //PersegiPanjang P2(PjgX,TghX,PjgY,TghY);

    PersegiPanjang p1(8,3,6,4);
    PersegiPanjang p2(4,7,6,9);
    PersegiPanjang p3(0,0,0,0);

    system("CLEAR");

    cout << "Kalkulasi Persegi panjang 1 : " << endl;
    p1.data();
    cout << "Kalkulasi Persegi panjang 2 : " << endl;
    p2.data();
    cout << "\nTekan enter untuk lanjut : " << endl;
    cin.ignore();

    Menu :
    system("CLEAR");

    int n;
    cout << "Pilih fungsi yang ingin digunakan : \n" << endl;
    cout << "1. Cek apakah 2 persegi berpotongan atau tidak" << endl;
    cout << "2. Menggabungkan luas 2 persegi panjang" << endl;
    cout << "3. Mengambil luas irisan dari 2 persegi panjang yang beririsan" << endl;
    cout << "4. Menggandakan luas 2 persegi panjang" << endl;
    cout << "5. Mengecilkan luas 2 persegi panjang menjadi setengahnya" << endl;
    cout << "6. Testing properti class" << endl;
    cout << "Pilih Menu : ";
    cin >> n;
    cin.ignore();

    switch (n)
    {
    case 1:
        system("CLEAR");
        if (p1==p2){cout << "Persegi panjang saling berpotongan";}
        else {cout << "Persegi panjang tidak berpotongan";}
        cout << "\nTekan enter untuk balik menu : " << endl;
        cin.ignore();
        goto Menu;
        break;
    case 2:
        system("CLEAR");
        p3 = p1 + p2;
        cout << "\nTekan enter untuk balik menu : " << endl;
        cin.ignore();
        goto Menu;
        break;
    case 3:
        system("CLEAR");
        p3 = p1 - p2;
        cout << "\nTekan enter untuk balik menu : " << endl;
        cin.ignore();
        goto Menu;
        break;
    case 4:
        system("CLEAR");
        cout << "Data perluasan sebesar 2 kali terhadap persegi panjang 1 :\n" << endl;
        ++p1;
        cout << "Data perluasan sebesar 2 kali terhadap persegi panjang 2 :\n" << endl;
        ++p2;
        cout << "\nTekan enter untuk balik menu : " << endl;
        cin.ignore();
        goto Menu;
        break;
    case 5:
        system("CLEAR");
        cout << "Data pengurangan luasan sebesar 1/2 kali terhadap persegi panjang 1 :\n" << endl;
        --p1;
        cout << "Data pengurangan luasan sebesar 1/2 kali terhadap persegi panjang 2 :\n" << endl;
        --p2;
        cout << "\nTekan enter untuk balik menu : " << endl;
        cin.ignore();
        goto Menu;
        break;
    case 6:
        system("CLEAR");
        cout << "xmin p1" << p1[1];
        cout << "xmax p1" << p1[2];
        cout << "ymin p1" << p1[3];
        cout << "ymax p1" << p1[4];
        cout << "xmin p2" << p2[1];
        cout << "xmax p2" << p2[2];
        cout << "ymin p2" << p2[3];
        cout << "ymax p2" << p2[4];
        cout << "\nTekan enter untuk balik menu : " << endl;
        cin.ignore();
        goto Menu;
        break;
    }
}