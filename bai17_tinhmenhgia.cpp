#include <iostream>
using namespace std;
int main()
{
	int menhgia, sotien, to1, to5, , to10, to20, to50, , to100, to200, to500;
	cout << " so to tien can rut ra\n";
	cin >> sotien;
	to500 = sotien/500;
	sotien = sotien % 500;
	cout << "\nsoto500:" << to500;
		to200 = sotien/200;
	sotien = sotien % 200;
	cout << "\nsoto200:" << to200;
	to50 = sotien / 50;
	sotien = sotien % 50;
	cout << "\nsoto50:" << to50;
}