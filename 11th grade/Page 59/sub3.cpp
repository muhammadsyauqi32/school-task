#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	int s, v, g = 10, t, status;
	double hmax, rad, sinS;
	cin >> s;
	cin >> v;
	cin >> t;
	rad = s * M_PI / 180;
	sinS = sin(rad) * sin(rad);
	hmax = (v * v * sinS) / (2 * g);
	
	hmax >= t ? status = 1 : status = 0;

	cout << "Status : " << status << endl;
	cout << "Ketinggian : " << round(hmax * 10) / 10;
};
