#include <iostream>
using namespace std;
int main(){
	int tahun;
	cin>>tahun;
	if(tahun %400==0){
		cout<<"tahun kabisat"<<endl;
	}else if(tahun %400==1 %100==0){
		cout<<"bukan tahun kabisat"<<endl;
	}else if(tahun %400==1 %100==1 %4==0){
		cout<<"tahun kabisat"<<endl;
	}else if(tahun %400==1 %100==1 %4==1){
		cout<<"bukan tahun kabisat"<<endl;
	}
		
}
