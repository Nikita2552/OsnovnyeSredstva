#ifndef FUNCTIONS9_H
#define FUNCTIONS9_H

#include <iostream>

using namespace std;

namespace ComplexDigits {


    class complex
    {
    private:
        double re, im;

    public:        
        complex(double r, double i);
        complex(double r);
        complex();

        double get_re() const;
        double get_im() const;

        complex operator+(complex c);
        complex operator*(complex c);
        const double& operator[](const int& i);
        complex operator()();

   };

    ostream&  operator<<(ostream& os, const complex& c);
    bool operator==(const complex& x, const complex& y);

    class ptr_complex
    {
    private:
        complex* ptr;
    public:
        ptr_complex(complex* p);
        complex* operator->();

        complex& operator++();
        complex operator++(int i);
        complex& operator--();
        complex operator--(int i);
        complex operator*();

    };
}





void func9main();

#endif // FUNCTIONS8_H
