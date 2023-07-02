#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	int n, s, v, t, g = 10, status;
	double hmax, rad, sinS;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
	cin >> s;
	cin >> v;
	cin >> t;
	rad = s * M_PI / 180;
	sinS = sin(rad) * sin(rad);
	hmax = (v * v * sinS) / (2 * g);	
	hmax >= t ? status += 1 : status += 0;
	}
	
	for(int j = 0; j < n; j++){
		cout << status << endl;
		cout << "Status burung " << j + 1<< " : " << status << endl;
		cout << "Ketinggian : " << hmax << endl;
	}
};
