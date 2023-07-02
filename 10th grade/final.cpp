#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	string nanya;
	string pil, bot, result;
	cout << "\nSELAMAT DATANG DI GAME SUWIT" << endl;
	cout << "----------------------------" << endl;
	cout << "Gunting | Kertas | Batu" << endl;
	do{
	
//	Deklarasi Pilihan
	cout << "\nMasukkan pilihan kamu\t: ";
	cin >> pil;
	
//	Lowercase pilihan
	transform(pil.begin(), pil.end(), pil.begin(), ::tolower);
	
//	Bot
	srand(time(NULL));
	int gen = rand()%3;
	if(gen == 1){
		bot = "gunting";
	}else if(gen == 2){
		bot = "batu";
	}else{
		bot = "kertas";
	}


// Mekanisme
	if(pil == bot){
		result = "DRAW!";
	}else if(pil == "gunting"){
		if(bot == "batu"){
			result = "KALAH!";
		} else if(bot == "kertas"){
			result = "MENANG!";
		}
	}else if(pil == "kertas"){
		if(bot == "batu"){
			result = "MENANG!";
		} else if(bot == "gunting"){
			result = "KALAH!";
		}
	}else if(pil == "batu"){
		if(bot == "gunting"){
			result = "MENANG!";
		} else if(bot == "kertas"){
			result = "KALAH!";
		}
	}else{
		result = "SALAH MASUKIN";
	}
	cout << "PILIHAN KAMU 	\t: " << pil << endl;
	cout << "PILIHAN BOT 	\t: " << bot << endl;
	cout << "HASILNYA ADALAH KAMU " << result << endl;
	cout << "Main lagi? (y / g) : ";
	cin >> nanya;
}while (nanya == "y" || nanya == "Y");

	cout << "Mainnya Hebat!";
	return 0;

}
