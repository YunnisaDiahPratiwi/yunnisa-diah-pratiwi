#include <iostream>
using namespace std;

int tambah(int a, int b){
	return a+b;
}
int kurang(int a, int b){
	return a-b;
}

int callfunc()


int main(){
//	int a,b;
//	cin>>a>>b;
//	
//	int (*ptr[])(int, int)={tambah, kurang};
//	
//	for (int i=0; i<2; i++){
//		cout<<(*ptr[0])(a, b)<<endl;
//	}
	
//	int a=5;
//	int* ptr=&a;
//	
//	int  **dptr=&ptr;
//	cout<<*dptr;
//	
//	cout<<ptr<<" "<<&a;

//	int arr[5]={10, 20, 30, 40, 50};
//	int* ptr = arr;
//	
//	for(int i=0; i<5; i++){
//		cout<<"value of arr["<<i<<"] = "<< *ptr<<endl;
//	}
//	
	//new dan delete
	int *a;
	a=new int;
	*a=50;
	cout<<a<<" "<<*a<<endl;
	delete a;
	cout<<*a;
	return 99;
}
