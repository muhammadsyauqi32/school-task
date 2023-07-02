#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	int s, v, g = 10;
	double xmax, rad;
	cin >> s;
	cin >> v;
	rad = s * M_PI / 180;
	xmax = (v * v * 2 * sin(rad) * cos(rad)) / g;
	cout << round(xmax * 10) / 10; 
	return 0;
};
