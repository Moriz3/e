#include <iostream>
#include <string>
using namespace std;

int main(){
	int data,i;
	string nama[5],mtk[5],fisika[5],kimia[5];
	
	cout<<"\aProgram Data Siswa"<<endl;
	cout<<"=======================\n"<<endl;
	cout<<"Input Jumlah Data Siswa : ";
	cin>>data;
	
	for(i=1;i<=data;i++){
		cout<<"Data "<<i<<endl;
		cout<<"Nama : ";
		cin>>nama[i];
		cout<<"Nilai Matematika : ";
		cin>>mtk[i];
		cout<<"Nilai Fisika     : ";
		cin>>fisika[i];
		cout<<"Nilai Kimia      : ";
		cin>>kimia[i];
	}
	cout<<"\n\t\t\vDaftar Data Nilai Siswa"<<endl;
	cout<<"================================================="<<endl;
	cout<<"No\tNama\t\vMatemtika\t\tFisika\t\tKimia\t\t"<<endl;
	cout<<"================================================="<<endl;
	
	for(i=1;i<=data;i++){
		cout<<i<<"\t"<<nama[i]<<"\t\t\v"<<mtk[i]<<"\t\t\t\t"<<fisika[i]<<"\t\t\t"<<kimia[i]<<"\t\t"<<endl;
	}
	cout<<"================================================="<<endl;

return 0;

}
