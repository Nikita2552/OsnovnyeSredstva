#include "functions2.h"

void f(char ch)
{
    cout << "f" << endl;
}

void g(char& ch)
{
    cout << "g" << endl;
}

void h(const char& ch)
{
    cout << "h" << endl;
}

void func2main()
{
    char c;
    unsigned char uc;
    signed char sc;

    f('a');
    f(49);
    f(3300);
    f(c);
    f(uc);
    f(sc);

//    g('a');
//    g(49);
//    g(3300);
    g(c);
//    g(uc);
//    g(uc);

    h('a');
    h(49);
    h(3300);
    h(c);
    h(uc);
    h(sc);

}
