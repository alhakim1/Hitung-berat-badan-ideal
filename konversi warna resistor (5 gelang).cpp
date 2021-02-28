//Rahmattullah Al Hakim 5302420020
//mengkonversi masukan warna resistor 5 gelang menjadi nilai berupa angka
#include <iostream>
using namespace std;

int main (){
	long long nilai;
	double g4a;
	float g1a,g2a,g3a,g5a;
	string g1,g2,g3,g4,g5;
	cout << " =======================================================================================================";   cout <<endl;
	cout << " || warna resistor : hitam, coklat, merah, orange, kuning, hijau, biru, ungu, abu, putih, emas, perak ||";   cout <<endl;
	cout << " =======================================================================================================\n"; cout <<endl;
	
	for (int i=0; i<3; i++){
		cout << " masukkan warna sesuai urutan"; cout <<endl;
		cout << " gelang 1 : "; cin >> g1; 
		cout << " gelang 2 : "; cin >> g2; 
		cout << " gelang 3 : "; cin >> g3; 
		cout << " gelang 4 : "; cin >> g4; 
		cout << " gelang 5 : "; cin >> g5; 
		cout << endl; 
	
		
		if (g1=="hitam"||g1=="emas"||g1=="perak"||g2=="emas"||g2=="perak"||g3=="emas"||g3=="perak"||g4=="abu"||g4=="putih"||g5=="hitam"||
		g5=="orange"||g5=="kuning"||g5=="putih"){ cout <<" INPUT SALAH" << endl; }
		
		else {
			if (g1=="coklat") { g1a=1; }
			else if (g1=="merah")  { g1a=2; }
			else if (g1=="orange") { g1a=3; }
			else if (g1=="kuning") { g1a=4; }
			else if (g1=="hijau")  { g1a=5; }
			else if (g1=="biru")   { g1a=6; }
			else if (g1=="ungu")   { g1a=7; }
			else if (g1=="abu")    { g1a=8; }
			else if (g1=="putih")  { g1a=9; }
				
			if (g2=="hitam")       { g2a=0; }
			else if (g2=="coklat") { g2a=1; }
			else if (g2=="merah")  { g2a=2; }
			else if (g2=="orange") { g2a=3; }
			else if (g2=="kuning") { g2a=4; }
			else if (g2=="hijau")  { g2a=5; }
			else if (g2=="biru")   { g2a=6; }
			else if (g2=="ungu")   { g2a=7; }
			else if (g2=="abu")    { g2a=8; }
			else if (g2=="putih")  { g2a=9; }	
				
			if (g3=="hitam")       { g3a=0; }
			else if (g3=="coklat") { g3a=1; }
			else if (g3=="merah")  { g3a=2; }
			else if (g3=="orange") { g3a=3; }
			else if (g3=="kuning") { g3a=4; }
			else if (g3=="hijau")  { g3a=5; }
			else if (g3=="biru")   { g3a=6; }
			else if (g3=="ungu")   { g3a=7; }
			else if (g3=="abu")    { g3a=8; }
			else if (g3=="putih")  { g3a=9; }
			else { cout <<" ERROR "; }
				
			if (g4=="hitam")       { g4a=1; }
			else if (g4=="coklat") { g4a=10; }
			else if (g4=="merah")  { g4a=100; }
			else if (g4=="orange") { g4a=1000; }
			else if (g4=="kuning") { g4a=10000; }
			else if (g4=="hijau")  { g4a=100000; }
			else if (g4=="biru")   { g4a=1000000; }
			else if (g4=="ungu")   { g4a=10000000; }
			if (g4=="emas")   { g4a=0.1;  }
			if (g4=="perak")  { g4a=0.01; }
			
			if (g5=="coklat") { g5a=1; }
			else if (g5=="merah")  { g5a=2;	   }
			else if (g5=="hijau")  { g5a=0.5;  }
			else if (g5=="biru")   { g5a=0.25; }
			else if (g5=="ungu")   { g5a=0.1;  }
			else if (g5=="abu")    { g5a=0.05; }
			else if (g5=="emas")   { g5a=5;	   }
			else if (g5=="perak")  { g5a=10;   }
			else { cout <<" ERROR "; }
					
			nilai = (g1a * 100 + g2a * 10 + g3a);	
			nilai =  nilai*g4a;
			cout << " nilai resistornya adalah "<< nilai << " ohm dengan toleransi "<< g5a << "%" <<endl;

		}cout << endl;
	}
	return 0;
}
