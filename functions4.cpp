#include "functions4.h"


void func4main()
{
    //string example = "xabaacbaxabb";
    string example = "xabaabcbaxabb";
    string sample = "ab";

    unsigned int size = example.size();
    bool flag = false;
    unsigned int count = 0;

    for (unsigned int i = 0; i < size; i++)
    {
        cout << example[i] << endl;
        flag = smallstatemachine(example, sample, i);

        if (flag)
            count++;
    }

    cout << "Kolichestvo sovpadenyi: " << count;
}

bool smallstatemachine(const string& ourstring, const string& ourtemp, const unsigned int numinourstring)
{
    const  unsigned int sizetemp = ourtemp.size();
    unsigned int currentnum = numinourstring;
    STATES state = ENTRY;
    for (unsigned int i = 0; i < sizetemp; i++)
    {
        switch (state)
        {
            case (NO):
                i = sizetemp;
            break;
            default: //ENTRY
                if (ourstring.at(currentnum) == ourtemp.at(i))
                {
                    currentnum++;
                    state = ENTRY;
                }
                else
                    state = NO;
            break;

        }

    }

    bool answer = false;
    if (currentnum == numinourstring + sizetemp)
        answer = true;

    return answer;
}
