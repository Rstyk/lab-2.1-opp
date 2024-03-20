#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Time
{
private:
    int first, second;
public:
    Time();
    Time(int, int);
    Time(const Time&);
    ~Time();

    void SetFirst(int);
    void SetSecond(int);
    int GetFirst() const;
    int GetSecond() const;

    Time& operator = (const Time&);
    operator string() const;

    friend ostream& operator << (ostream&, const Time&);
    friend istream& operator >> (istream&, Time&);

    Time& operator ++();
    Time& operator --();
    Time operator ++(int);
    Time operator --(int);

    friend Time operator + (const Time&, const Time& y);
    friend Time operator * (const Time&, int y);

};


