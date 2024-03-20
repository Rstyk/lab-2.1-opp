// Lab_02.cpp
// < Ткачук Ростислав >
// Лабораторна робота 2.1
// Лінійні програми.
// Варіант 30

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a; 
    double b;
    double z1; 
    double z2;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    z1 = (((cos(a) - cos(b))) * ((cos(a) - cos(b)))) - ((sin(a) - sin(b)) * (sin(a) - sin(b)));
    z2 = (-4 * (sin((a - b) / 2) * sin((a - b) / 2))) * cos(a + b);
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cin.get();
    return 0;
}
