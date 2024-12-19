#ifndef FUNCTIONS8_H
#define FUNCTIONS8_H

#include <iostream>

using namespace std;

namespace Datenamespace {
    struct cache
    {
        bool valid;
        string rep;
    };

    class Date
    {
    private:
        int d, m, y;
        static Date default_date;
        cache* c;
        void compute_cache_value() const;
    public:
        Date(int dd, int mm, int yy);
        Date(int dd, int mm);
        Date(int dd);
        Date(const char * str);
        Date();
        void initdate(int dd, int mm, int yy);
        Date& add_year(int n);
        Date& add_month(int n);
        Date& add_day(int n);
        static void set_default(int defd, int defm, int defy);
        int get_day() const;
        int get_month() const;
        int get_year() const;
        string string_rep() const;
        inline bool operator== (Datenamespace::Date a);
    };

    class Name
    {
        const char *s;
    };

    class Table
    {
    private:
        Name *p;
        size_t sz;
    public:
        Table(size_t s = 15);
        Table(const Table&);
        Table &operator= (const Table&);
        ~Table();
        Name* lookup(const char*);
        bool insert(Name*);
    };

    class Club
    {
    private:
        string name;
        Table members;
        Table officers;
        Date founded;
        static const int why = 10;
    public:
        Club(const string& n, Date fd);
    };
}

void func8main();

#endif // FUNCTIONS8_H
