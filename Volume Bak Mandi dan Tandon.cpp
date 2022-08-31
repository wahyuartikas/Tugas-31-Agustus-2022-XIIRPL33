#include <iostream>

using namespace std;

int main (){
	float p,l,t,r,tt,v;
	
	cout<<"Volume Bak Mandi dan Tandon"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"p : ";
	cin>>p;
	cout<<"l : ";
	cin>>l;
	cout<<"t : ";
	cin>>t;
	cout<<"r : ";
	cin>>r;
	cout<<"tt : ";
	cin>>tt;
	v = p * l * t + 3.14 * r * r * tt;
	cout<<"Volume Bak Mandi dan Tandon adalah : "<<v<<endl;
}
