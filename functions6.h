#ifndef FUNCTIONS6_H
#define FUNCTIONS6_H

#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

typedef struct identificators
{
    string word;
    float digit;
};

void func6main();

void getlibrary(vector<identificators> *lib);
void sumlibrary(vector<identificators> *lib);

#endif // FUNCTIONS6_H
