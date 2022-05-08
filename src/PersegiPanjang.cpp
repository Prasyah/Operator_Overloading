#include <iostream>
#include <math.h>
#include "include/persegipanjang.hpp"
using namespace std;

//perhitungan untuk menentukan batas koordiant terkecil/terbesar dari masing masing persegi panjang
PersegiPanjang::PersegiPanjang(float Pjg_x, float tgh_x, float pjg_y, float tgh_y){
    this -> xmax = tgh_x + (Pjg_x/2);
    this -> ymax = tgh_y + (pjg_y/2);
    this -> xmin = tgh_x - (Pjg_x/2);
    this -> ymin = tgh_y - (pjg_y/2);
}

//detail data dari perhitungan awal
void PersegiPanjang::data(){
float pjg = this->xmax - this->xmin;
pjg = abs(pjg);
float lbr   = this->ymax - this->ymin;
lbr = abs (lbr);
    cout << "\npanjang (x)      : " << pjg << endl;
    cout << "titik tengah x   : " << pjg/2 + this->xmin << endl;
    cout << "xmin             : " << this->xmin << endl;
    cout << "xmax             : " << this->xmax << endl;
    cout << "lebar (y)        : " << lbr << endl;
    cout << "titik tengah y   : " << lbr/2 + this->ymin << endl; 
    cout << "ymin             : " << this->ymin << endl;
    cout << "ymax             : " << this->ymax << endl;
    cout << "Luas             : " << lbr*pjg << endl;
    cout << endl;
}

//pengecekan apakah 2 persegi panjang berpotongan atau tidak dengan meng-overload operator ==
bool PersegiPanjang::operator==(PersegiPanjang p2){
     if(this->xmax > p2.xmin && this->xmin < p2.xmax && this->ymax > p2.ymin && this->ymin < p2.ymax)return true;
     return false;
}

//fungsi penambahan luas persegi panjang dengan meng-overload operator +
PersegiPanjang PersegiPanjang::operator+(PersegiPanjang p2){
    PersegiPanjang temp(0,0,0,0);

    if(*this == p2){
        temp.xmin = min(this-> xmin,p2.xmin);
        temp.xmax = max(this-> xmax,p2.xmax);
        temp.ymin = min(this-> ymin,p2.ymin);
        temp.ymax = max(this-> ymax,p2.ymax);
        temp.data();
    }else cout << "Persegi panjang tidak beririsan atau hanya bersinggungan";
return temp;
}

//fungsi pengambilan luas irisan persegi panjang dengan meng-overload operator -
PersegiPanjang PersegiPanjang::operator-(PersegiPanjang p2){
    PersegiPanjang temp(0,0,0,0);

    if (*this==p2){
        temp.xmin = max(this-> xmin,p2.xmin);
        temp.xmax = min(this-> xmax,p2.xmax);
        temp.ymin = max(this-> ymin,p2.ymin);
        temp.ymax = min(this-> ymax,p2.ymax);
        temp.data();
    }else cout << "Persegi panjang tidak beririsan atau hanya bersinggungan";
return temp;
}

//fungsi pembesaran 2 kali lipat dari ukuran semula salah satu persegi panjang dengan meng-overload operator ++ 
void PersegiPanjang::operator++(){
    PersegiPanjang temp(0,0,0,0);

    temp.xmin = abs((this->xmax - this->xmin)/2) + this->xmin - abs(this->xmax - this->xmin);
    temp.xmax = abs((this->xmax - this->xmin)/2) + this->xmin + abs(this->xmax - this->xmin);
    temp.ymin = abs((this->ymax - this->ymin)/2) + this->ymin - abs(this->ymax - this->ymin);
    temp.ymax = abs((this->ymax - this->ymin)/2) + this->ymin + abs(this->ymax - this->ymin);
    temp.data();
}

//fungsi pengurangan ukuran 1/2 kali dari ukuran semula salah satu persegi panjang dengan meng-overload operator --
void PersegiPanjang::operator--(){
    PersegiPanjang temp(0,0,0,0);

    temp.xmin = abs((this->xmax - this->xmin)/2) + this->xmin - abs((this->xmax - this->xmin)/4);
    temp.xmax = abs((this->xmax - this->xmin)/2) + this->xmin + abs((this->xmax - this->xmin)/4);
    temp.ymin = abs((this->ymax - this->ymin)/2) + this->ymin - abs((this->ymax - this->ymin)/4);
    temp.ymax = abs((this->ymax - this->ymin)/2) + this->ymin + abs((this->ymax - this->ymin)/4);
    temp.data();
}

//mengambil masin-masing properti class persegipanjang
float PersegiPanjang::operator[](int No){

    switch (No){
    case 1:
        return this->xmin;
        break;
    case 2:
        return this->xmax;
        break;
    case 3:
        return this->ymin;
        break;
    case 4:
        return this->ymax;
        break;
    }
    return 0;
}

