//menghitung berat badan ideal dengan metode BMI
//Rahmattullah Al Hakim 5302420020
#include <iostream>
using namespace std;

class Final{
	public:
		float tinggi, berat, beratideal;
		int umur;
		string jk, b;
		badan();
		tabel();
};	

int main(){
	Final data;
	data.tabel();
	
	for ( int i=0; i<3; i++)
	{
		cout<< "==============================================================================="<< endl;
		cout<< "Masukkan umur Anda : "; 
		cin>>   data.umur; cout<<endl;
		cout<< "berat badan (kg) : "; 
		cin>>   data.berat; cout<<endl;
		
		if(data.umur>=10)
		{
			cout<< "tinggi badan (cm) : "; 
			cin>>   data.tinggi; cout << endl;
			
			if(data.tinggi < 125)
			{
				cout << "Anda mengalami gangguan pertumbuhan, segera konsultasi pada dokter"<<endl;
			}
			else 
			{
				cout<< "Jenis kelamin (L/P): "; 
				cin>>   data.jk; cout << endl;
				
				if(data.jk == "L"||data.jk == "l") { data.beratideal = (data.tinggi-100)-(data.tinggi-100)/10; }
				if(data.jk == "P"||data.jk == "p") { data.beratideal = (data.tinggi-100)-(data.tinggi-100)/15; }
				data.badan();
				
				cout << "Anda berbadan " << data.b << ", berat ideal dengan tinggi "<<data.tinggi<<" adalah "<<data.beratideal<<" kg"<<endl;
			}
		}
		else if(data.umur<10)
		{	
			data.beratideal = data.umur*2+8;
			data.badan();
			
			cout << "Anda berbadan " << data.b << ", berat ideal dengan umur "<<data.umur<<" adalah "<<data.beratideal<<" kg"<<endl;	
		}
		cout << endl;
	}
}

Final::badan()
{	
	Final data;
	if(berat < beratideal)		{ b = "kurus"; }
	else if(berat == beratideal){ b = "ideal"; }
	else						{ b = "gemuk"; }
}

Final::tabel()
{	
	float no[3]={1,2,3}, umur[3]={22,38,19}, berat[3]={63,74,58}, tinggi[3]={170,184,160}, beratideal[3];
	string b[3], jenis[3]={"laki-laki","laki-laki","perempuan"};
	
	cout << "contoh tabel" <<endl;	
	cout << "===============================================================================" <<endl;
	cout << "| NO | UMUR | BERAT BADAN | TINGGI BADAN | JENIS KELAMIN | HASIL | BERAT IDEAL " <<endl;
	cout << "===============================================================================" <<endl;
	for (int i=0; i<3; i++)
	{	
		if (jenis[i]=="laki-laki"){ beratideal[i] = (tinggi[i]-100) - (tinggi[i]-100)/10; } 
		if (jenis[i]=="perempuan"){ beratideal[i] = (tinggi[i]-100) - (tinggi[i]-100)/15; } 
		
		if(berat[i] < beratideal[i])		{ b[i] = "kurus"; }
		else if(berat[i] == beratideal[i])	{ b[i] = "ideal"; }
		else if(berat[i] > beratideal[i])	{ b[i] = "gemuk"; }
		
		cout <<"| "<<no[i]<<"  |  "<<umur[i]<<"  |     " <<berat[i]<<"      |     "<<tinggi[i]<<"      |   "<<jenis[i]<<"   | " << b[i]<<" |    " <<beratideal[i]<<endl;
	}
}
	
