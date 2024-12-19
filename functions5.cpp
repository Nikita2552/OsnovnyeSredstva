#include "functions5.h"


void func5main()
{
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[9] = {5, 6, 7, 8, 9, 10, 11, 12, 13};

    send(&a[0], &b[0], 9);

    for (int i = 0; i < 9; i++)
         cout << "a[" << i << "] = " << a[i] << endl;
}

void send(int* to, int* from, int count)
{
    int n = (count+7)/8;
    switch(count%8)
    {
        case 0: do{ *to++ = *from++;
        case 7:     *to++ = *from++;
        case 6:     *to++ = *from++;
        case 5:     *to++ = *from++;
        case 4:     *to++ = *from++;
        case 3:     *to++ = *from++;
        case 2:     *to++ = *from++;
        case 1:     *to++ = *from++;
                } while(--n>0);
    }
}
