#include <iostream>
using namespace std;

int main(){
	int a,b;
	//a dan b sebagai penampung 2 bilangan bulat
	
	cout<<"Masukkan Bil. Bulat Pertama : ";
	cin>>a;
	cout<<"Masukkan Bil. Bulat Kedua   : ";
	cin>>b;
	cout
	//memasukkan bilangan
	
	if(a>b){
		cout<<"Bilangan "<<a<<" Lebih Besar dari "<<b<<endl;
	}else
	if(a<b){
		cout<<"Bilangan "<<a<<" Lebih Kecil dari  "<<b<<endl;
	}else{
		cout<<"Bilangan "<<a<<" Sama Dengan "<<b<<endl;
	}
	
	return 0;
}