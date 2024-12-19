#include "functions9.h"

double ComplexDigits::complex::get_re() const
{
    return re;
}

double ComplexDigits::complex::get_im() const
{
    return im;
}

ComplexDigits::complex::complex(double r, double i):re(r), im(i)
{

}

ComplexDigits::complex::complex(double r):re(r), im(0)
{

}

ComplexDigits::complex::complex():re(0), im(0)
{

}

ComplexDigits::complex ComplexDigits::complex::operator+(ComplexDigits::complex c)
{

}

ComplexDigits::complex ComplexDigits::complex::operator*(ComplexDigits::complex c)
{

}

const double& ComplexDigits::complex::operator[](const int &i)
{
    if (i == 0)
        return re;
    else if (i == 1)
        return im;
}

ComplexDigits::complex ComplexDigits::complex::operator()()
{

}

ostream &ComplexDigits::operator<<(ostream &os, const ComplexDigits::complex &c)
{
    return os << "re:" << c.get_re() << ", im:" << c.get_im() << endl;
}

void func9main()
{
    ComplexDigits::complex a = ComplexDigits::complex(1, 3.1);
    ComplexDigits::complex b = ComplexDigits::complex(1.2, 2);
    ComplexDigits::complex c = b;
    a = b + c;
    b = b + c*a;
    c = a*b + ComplexDigits::complex(1,2);

    ComplexDigits::complex d = ComplexDigits::complex(5, 10);
    cout << d << endl;

    ComplexDigits::complex e = ComplexDigits::complex(3, 7);
    cout << "e[0] = " << e[0] << endl;
    cout << "e[1] = " << e[1] << endl;

    ComplexDigits::ptr_complex pt(&e);
    cout << "ptr*** = " << pt->get_im() << endl;
    cout << "ptr*** = " << pt->get_re() << endl;


}

bool ComplexDigits::operator==(const ComplexDigits::complex &x, const ComplexDigits::complex &y)
{
    return x.get_re() == y.get_re() && x.get_re() == y.get_im();
}

ComplexDigits::ptr_complex::ptr_complex(ComplexDigits::complex *p): ptr(p)
{

}

ComplexDigits::complex *ComplexDigits::ptr_complex::operator->()
{
    return ptr;
}
