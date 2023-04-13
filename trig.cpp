#include <iostream>
#include <cmath>
using namespace std;

float a,b,c,menu,triangle;
int main(){
	int menu;
	  cout<<"\t[!!]================================[!!]\n";
          cout<<"             p i l i h a n m e n u"<<endl;
	  cout<<"\t[!!]================================[!!]\n";
	  cout<<endl;
          cout<<"\t1.luas"<<endl;
          cout<<"\t2.sinc"<<endl;
          cout<<"\t3.sisi"<<endl;
	  cout<<endl;
	  cout<<"\t[!!]================================[!!]\n";
	  cout<<"\tmasukan pilihan : ";
          cin>>menu;
      
	  system("cls");
	
          if(menu==1){
      	    cout<<"\t[!!]================================[!!]\n";
      	    cout<<"           	    l u a s "<<endl;
	    cout<<"\t[!!]================================[!!]\n";
      	    cout<<endl;
	    cout<<"\talas   : ";
	    cin>>a;
	    cout<<"\ttinggi : ";
	    cin>>b;
	    cout<<"\t[!!]================================[!!]\n";
	    cout<<"\tjadi hasilnya adalah... "<<endl;
	    cout<<"\t"<<a<< "*" <<b<< " = " <<a*b<<endl;
	    cout<<"\t"<<a*b<< "/" <<2<< " = " <<(a*b)/2<<"";
	    }else 
	  if(menu==2){
            double c, result;
            cout<<"\t[!!]================================[!!]\n";
      	    cout<<"      	      s i n c "<<endl;
	    cout<<"\t[!!]================================[!!]\n";
      	    cout<<endl;
		    cout<<"\tinput a : ";
		    cin>>a;
		    cout<<"\tinput b : ";
		    cin>>b;
		    cout<<endl;
		    c=3.14;
		    result=0.5*(a*b*(sin(c)));
		    cout<<"\t[!!]================================[!!]\n";
		    cout<<"\thasilnya adalah "<<result<<endl;
		}else
	  if(menu==3){ 
	        cout<<"\t[!!]================================[!!]\n";
      		cout<<"           	 	     s i s i "<<endl;
	  		cout<<"\t[!!]================================[!!]\n";
      	    cout<<endl;
		    cout<<"\tsisi a : ";
			cin>>a;
			cout<<"\tsisi b : ";
			cin>>b;
			cout<<"\tsisi c : ";
			cin>>c;
			cout<<endl;
			cout<<"\t[!!]================================[!!]\n";
			cout<<"\tjadi hasilnya adalah... "<<endl;
			cout<<"\t"<<a<< "+" <<b<< "+" <<c<< " = "<<a+b+c<<endl;
			cout<<"\t"<<a+b+c<< "*" <<0.5<< " = " <<(a+b+c)*0.5;
		}else{
			cout<<endl;
			cout<<"\t[!!]================================[!!]\n";
			cout<<endl;
			cout<<"warning!! hanya masukkan nomor menu yang tersedia!!\n";
			cout<<endl;
			cout<<"\t[!!]================================[!!]\n";
			}

	return 0;
} 
