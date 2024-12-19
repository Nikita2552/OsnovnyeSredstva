#ifndef FUNCTIONS4_H
#define FUNCTIONS4_H

#include <iostream>
#include <vector>
#include <list>

using namespace std;

typedef enum
{
    ENTRY = 0x00,
    NO = 0x02
} STATES;

void func4main();

bool smallstatemachine(const string& ourstring, const string& ourtemp, const unsigned int numinourstring);

#endif // FUNCTIONS4_H
