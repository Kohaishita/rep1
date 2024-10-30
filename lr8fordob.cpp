#include <iostream>
#include <cmath> 
using namespace std; 
int main()
{
	int n,i,k;
	double y,Z, dob = 1.0;
	cout << "Enter n= ";
	cin >> n;
	cout << "Enter y= ";
	cin >> y;
	for (i = 1; i <= n; ++i) {
		for (k = 1; k <= i; ++k) {
			dob *= k * k;
		}
		Z = (y + dob * y) / (y * y + pow(sin(y), 2));
		cout << "k=" << i << "||" << "Z= " << Z << endl;
	}
	return 0;
}

