#include <iostream>
using namespace std;
int main(){
	int hargabarang, hargasetelahdiskon, disc;
	
	cout<<"harga barang: Rp.";
	cin>>hargabarang;
	cout<<"discount (%): ";
	cin>>disc;
	cout<<"harga barang: Rp."<<hargabarang<<endl;
	cout<<"discount: Rp."<<hargabarang*disc/100<<endl;
	cout<<"hargasetelahdiskon=hargabarang-(hargabarang*disc/100)"<<endl;
	
	return 0;
	
}
