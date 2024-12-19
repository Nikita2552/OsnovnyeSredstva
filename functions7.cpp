#include "functions7.h"

exam ex;

void func7main()
{
    char a[12] = "hello world";
    char b[12] = "hello_world";
    cout << "strcmp = " << strcmp(&a[0], &b[0]) << endl;

    ex = &example;

    setExample(&example);
    ex = getExample();
}

int strcmp(const char* one, const char* two)
{
    while (*one)
    {
        if (*one > *two)
            return 1;
        else if (*one < *two)
            return -1;

        one++;
        two++;
    }

    return 0;
}

void example(char *ch, int& digit)
{
    cout << "example" << endl;
}

void setExample(exam)
{
    ex = &example;
}

exam getExample()
{
    return ex;
}
