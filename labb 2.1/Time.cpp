#include "Time.h"

Time::Time()
{
    first = 0;
    second = 0;
}
Time::Time(int r = 0, int i = 0)
{
    first = r;
    second = i;
}
Time::Time(const Time& r)
{
    first = r.first;
    second = r.second;
}
Time::~Time()
{ }

void Time::SetFirst(int r)
{
    first = r;
}
void Time::SetSecond(int i)
{
    second = i;
}

int Time::GetFirst() const
{
    return first;
}
int Time::GetSecond() const
{
    return second;
}

Time& Time::operator = (const Time& r)
{
    first = r.first;
    second = r.second;
    return *this;
}
Time::operator string () const
{
    stringstream ss;
    ss << " Minutes = " << second << endl;
    return ss.str();
}

ostream& operator << (ostream& out, const Time& r)
{
    out << string(r);
    return out;
}
istream& operator >> (istream& in, Time& r)
{
    cout << " Hours = "; in >> r.first;
    cout << " Minutes = "; in >> r.second;
    cout << endl;
    return in;
}

Time& Time::operator ++()
{
    first++;
    return *this;
}
Time& Time::operator --()
{
    first--;
    return *this;
}
Time Time::operator ++(int)
{
    Time t(*this);
    second++;
    return t;
}
Time Time::operator --(int)
{
    Time t(*this);
    second--;
    return t;
}

Time operator + (const Time& x, const Time& y)
{
    return Time(x.first, x.second + x.first);
}
Time operator * (const Time& x, int y)
{
    return Time(x.first * y, x.second);
}
