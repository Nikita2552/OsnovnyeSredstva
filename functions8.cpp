#include "functions8.h"

Datenamespace::Date Datenamespace::Date::default_date(16, 12, 1770);

void func8main()
{
    Datenamespace::Date::set_default(4, 5, 1945);
}

void Datenamespace::Date::compute_cache_value() const
{

}

Datenamespace::Date::Date(int dd, int mm, int yy)
{
    d = dd ? dd : default_date.get_day();
    m = mm ? mm : default_date.get_month();
    y = yy ? yy : default_date.get_year();
}

Datenamespace::Date::Date(int dd, int mm)
{
    d = dd;
    m = mm;
    y = 0;
}

Datenamespace::Date::Date(int dd)
{
    d = dd;
    m = 0;
    y = 0;
}

Datenamespace::Date::Date(const char *str)
{

}

Datenamespace::Date::Date()
{
    d = 0;
    m = 0;
    y = 0;
}

void Datenamespace::Date::initdate(int dd = 0, int mm = 0, int yy = 0)
{
    d = dd;
    m = mm;
    y = yy;
}

Datenamespace::Date& Datenamespace::Date::add_year(int n)
{
    y += n;
    return *this;
}

Datenamespace::Date& Datenamespace::Date::add_month(int n)
{
    m += n;
    return *this;
}

Datenamespace::Date& Datenamespace::Date::add_day(int n)
{
    d += n;
    return *this;
}

void Datenamespace::Date::set_default(int defd, int defm, int defy)
{
    Datenamespace::Date::default_date = Datenamespace::Date(defd, defm, defy);
}

inline int Datenamespace::Date::get_day() const
{
    return d;
}

inline int Datenamespace::Date::get_month() const
{
    return m;
}

inline int Datenamespace::Date::get_year() const
{
    return y;
}

string Datenamespace::Date::string_rep() const
{
    if (!c->valid)
    {
        compute_cache_value();
        c->valid = true;
    }
    return c->rep;
}

bool Datenamespace::Date::operator==(Datenamespace::Date a)
{
 return (this->get_day() == a.get_day()) && (this->get_month() == a.get_month()) && (this->get_year() == a.get_year());
}

Datenamespace::Table::Table(size_t s)
{
    p = new Name[sz = s];
}

Datenamespace::Table::Table(const Datenamespace::Table& t)
{
    p = new Name[sz = t.sz];
    for (int i = 0; i < sz; i++)
    {
        p[i] = t.p[i];
    }
}

Datenamespace::Table &Datenamespace::Table::operator=(const Datenamespace::Table &t)
{
    if (this != &t)
    {
        delete[] p;
        p = new Name[sz = t.sz];
        for (int i = 0; i < sz; i++)
        {
            p[i] = t.p[i];
        }
    }
    return *this;
}

Datenamespace::Table::~Table()
{
    delete [] p;
}

Datenamespace::Club::Club(const string &n, Datenamespace::Date fd)
: name(n), members(), officers(), founded(fd)
{

}
