#include <iostream>
#include <string>

using namespace std;

int main(){
	string jenis;
	int jarak,total;
	
	cout<<"APLIKASI GOJEK"<<endl;
	cout<<"--------------"<<endl;
	cout<<"Pilih go ride/ go car : ";
	getline(cin,jenis);
	if(jenis=="go ride"){
		cout<<"Pilih Jarak (km) : ";
		cin>>jarak;
		if(jarak<5){
			total = 4 * 2000 + 5000;
			cout<<"Total Biaya : "<<total<<endl;
		}else if(jarak<10){
			total = 9 * 2500 + 7500;
			cout<<"Total Biaya : "<<total<<endl;
		}else if(jarak<15){
			total = 14 * 3000 + 10000;
			cout<<"Total Biaya : "<<total<<endl;
		}else{
			cout<<"Maaf Pesanan anda tidak dapat dilayani"<<endl;
		}
	}
	else if(jenis=="go car"){
		cout<<"Pilih Jarak (km) : ";
		cin>>jarak;
		if(jarak<5){
			total = 4 * 3000 + 15000;
			cout<<"Total Biaya : "<<total<<endl;
		}else if(jarak<10){
			total = 9 * 4500 + 17500;
			cout<<"Total Biaya : "<<total<<endl;
		}else if(jarak<15){
			total = 14 * 5000 + 20000;
			cout<<"Total Biaya : "<<total<<endl;
		}else{
			cout<<"Maaf Pesanan anda tidak dapat dilayani"<<endl;
		}
		
	}
}
