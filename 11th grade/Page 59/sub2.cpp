#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	int s, v, g = 10;
	double tmax, rad;
	cin >> s;
	cin >> v;
	rad = s * M_PI / 180;
	tmax = 2 * v * sin(rad) / g;
	cout << std::fixed << std::setprecision(3) << tmax;

};
