#ifndef __PERSEGIPANJANG_HPP__
#define __PERSEGIPANJANG_HPP__
#include <iostream>

class PersegiPanjang{

    private :
        float xmin, xmax, ymin, ymax;

    public :
        PersegiPanjang(float Pjg_x, float tgh_x, float pjg_y, float tgh_y);
        void data();
        bool operator==(PersegiPanjang);
        PersegiPanjang operator+(PersegiPanjang);
        PersegiPanjang operator-(PersegiPanjang);
        void operator++();
        void operator--();
        float operator[](int No);
};

#endif