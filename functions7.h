#ifndef FUNCTIONS7_H
#define FUNCTIONS7_H

#include <iostream>

using namespace std;

void func7main();

int strcmp(const char* one, const char* two);

/*
strlen(..)
strspy(..)
atoi(..)
rev(..)
cat(..)
itoa(..)
*/

void example(char *ch, int& digit);
typedef void (*exam)(char*, int&);

void setExample(exam);
exam getExample();


#endif // FUNCTIONS7_H
