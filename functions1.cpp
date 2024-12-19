#include "functions1.h"

int temp = 1;
int &js = temp;

void func1(int *i)
{
    int k = 10;
    const int *j = &k;

    int& k1 = k;

    cout << "k = " << k1 << endl;
}

void func2(int *i)
{
    int j = 10;
//Инициализируем указатель, придаём ему значение
    int *jp;
    jp = &j;
//Инициализируем ссылку, значение для которой будет в другом месте
    extern int &js;
}

void func3(int *i)
{
    void *pp = i;
    int *pi2 = static_cast<int *>(pp);
}

void func4(int *i)
{
    typedef unsigned char unchar;
    typedef const unsigned char cunchar;
    typedef int* fint;
    typedef char** fchar;

    char a[3] = {'a', 'b', 'c'};
    int t;

    t = 0;
    while (t < 3)
    {
        cout << "a[" << t << "] = " << a[t] << endl;
        t++;
    }

    char *pa = a;

    t = 0;
    while (t < 3)
    {
        cout << "a[" << t << "] = " << *(pa + t) << endl;
        t++;
    }

    char *ma[3];
    ma[0] = &a[0];
    ma[1] = &a[1];
    ma[2] = &a[2];

    t = 0;
    while (t < 3)
    {
        cout << "a[" << t << "] = " << *ma[t] << endl;
        t++;
    }

    char **uk = ma;
    t = 0;
    while (t < 3)
    {
        cout << "a[" << t << "] = " << *(*uk + t) << endl;
        t++;
    }
}

void func1main()
{
    bool a = true;
    int b = 1;
    float c = 10.2;

    func1(&b);
    func4(&b);
}
