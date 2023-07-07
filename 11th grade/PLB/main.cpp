#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){
	cout << "PROYEK PRAKTEK LINTAS BIDANG (PLB) (PAGE 109)" << endl;
	cout << "----------------------------------" << endl;
	
	int quantity, m;
	
	cin >> quantity;
	
	int mass[quantity], value[quantity];
	
	for(int i = 0; i < quantity; i++){
		cin >> mass[i];
	}
	for(int j = 0; j < quantity; j++){
		cin >> value[j];
	}
	cin >> m;
	
	cout << "Banyak barang = " << quantity << endl;
	for(int k = 0; k < quantity; k++){
		cout << "Barang " << k + 1 << " : bobot = " << mass[k] << " kg, nilai = " << value[k] << endl;
	}
	cout << "Kapasitas Maksimal = " << m;
}
