#include "functions3.h"


void func3main()
{
    cout << "Vvedite posledovatelnost' slov cherez probel:" << endl;

    vector <string> words;
    getstrings(words);

    cout << "Nashy slova:" << endl;

    printstrings(words);

    cout << "Uadlt' dublicaty:" << endl;

    deletedublicates(words);
    printstrings(words);

    cout << "Sortiruem slova:" << endl;

    sortstrings(words);
    printstrings(words);
}

void printstrings(const vector<string>& str)
{
    int maxnumber = str.size();
    unsigned int currentnumber = 0;
    while (currentnumber < maxnumber)
    {
        cout << str.at(currentnumber) << " ";
        currentnumber++;
    }
    cout << endl;
}

void getstrings(vector<string>& str)
{
    string currentword;
    int currentnumber = 0;
    while (currentnumber < MAXCOUNT)
    {
        cin >> currentword;
        cout << "output: " << currentword << endl;
        if (currentword == "Quit")
            break;
        str.push_back(currentword);
        currentnumber++;
    }
}

void deletedublicates(vector<string>& str)
{
    unsigned int currentnumber = 0;
    unsigned size = str.size();
    string currentstring;
    while (currentnumber < size)
    {
        currentstring = str.at(currentnumber);
        unsigned int othernumber = currentnumber + 1;
        while (othernumber < size)
        {
            if (currentstring == str.at(othernumber))
            {
                str.erase(str.begin() + othernumber);
                size--;
            }
            else
                othernumber++;
        }
        currentnumber++;
     }
}

void sortstrings(vector<string>& str)
{
    list<string> tosort;
    unsigned int currentnumber = 0;
    unsigned int size = str.size();
    while (currentnumber < size)
    {
        tosort.push_back(str.at(currentnumber));
        currentnumber++;
    }
    tosort.sort();
    str.clear();
    currentnumber = 0;
    for (string el : tosort)
        str.push_back(el);
}
