#include "functions6.h"

void func6main()
{
    cout << "Vvedite poslrdovatelnost' par:" << endl;


    vector<identificators> library;

    getlibrary(&library);
    sumlibrary(&library);

    cout << "End of programm" << endl;
}

void getlibrary(vector<identificators> *lib)
{
    string word;
    identificators ident;

    while (true)
    {
        cin >> word;

        if (word != "end")
        {
            ident.word = word;
            cin >> ident.digit;
            lib->push_back(ident);

            cout << "Vyvod: " << ident.word << "_" << ident.digit << endl;
        }
        else break;
    }
}

void sumlibrary(vector<identificators> *lib)
{
    string word;
    int allsumm = 0;
    int summ;

    while(lib->size())
    {
        summ = 0;
        word = lib->at(0).word;
        for (auto j = lib->begin(); j < lib->end();)
        {
            if (word == j->word)
            {
                summ += j->digit;
                lib->erase(j);
            }
            else
                 j++;
        }
        allsumm += summ;
        cout << "word = " << word << "; summ = " << summ << endl;
    }
    cout << "allsumm = " << allsumm << endl;
}
