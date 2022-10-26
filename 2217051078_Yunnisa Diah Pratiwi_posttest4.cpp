#include <iostream>
using namespace std;
int main(){
	int n;
	float jumlah, sigma, mean, variansi;
	cout<<"jumlah data: ";
	cin>>n;
	for(int y=0; y<=n; y++){
		jumlah=jumlah+y;
	}
	mean=jumlah/n;
	for(int d=1; d<=n; d++){
		sigma +=(d-mean)*(d-mean);
		variansi =sigma/(n-1);
	}
	cout<<"variansi: ";
	cout<<variansi;
	
	return 0;
}
