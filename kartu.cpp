#include <iostream>
#include <string>

using namespace std;
int main(){
	
	string kartu,pilih;

cout<<"KARTU PARKIR"<<endl;
cout<<"------------"<<endl;
cout<<"Kartu apa yang anda pakai? : ";
cin>>kartu;
if(kartu == "gold"){
	cout<<"Pilih bonus (Ambil Bonus/Tukar Poin) : ";
	cin.get();
	getline(cin,pilih);
	if(pilih=="ambil bonus"){
		cout<<"Selamat Bonus Anda Telah Diambil"<<endl;
	}else if(pilih=="tukar poin"){
		cout<<"Selamat Bonus Anda Telah Masuk ke Poin"<<endl;		
	}	
}
	else if(kartu == "premium"){
		cout<<"Pilih Bonus (Ambil Bonus/Tukar Poin) : ";
		cin.get();
		getline(cin,pilih);
		if(pilih=="ambil bonus"){
			cout<<"Selamat Bonus Anda Telah Diambil"<<endl;
		}else if(pilih=="tukar poin"){
			cout<<"Selamat Bonus Anda Telah Masuk ke Poin"<<endl;
		}
	}
}


