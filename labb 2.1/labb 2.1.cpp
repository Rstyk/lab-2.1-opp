#include <iostream>
#include "Time.h"

using namespace std;

int main() {

	Time x;
	cout << "Input time" << endl;
	cin >> x;
	cout << x * 60 + x << endl;
	cin.get();
	return 0;
}
