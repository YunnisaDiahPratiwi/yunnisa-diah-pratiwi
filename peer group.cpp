#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
//	cout<<"hello\n";
//	cout<<"world";
//	
//	int sisi;
//	cout<<"masukkan panjang sisi persegi: ";
//	cin>>sisi;
//	cout<<"luas perrsegi: "<<sisi*sisi;
//	
//	char kalimat[30];
//	cout<<"masukkan kalimat: ";
//	cin.getline>>(kalimat, 30);
//	cout<<"kalimat: "<<kalimat;
//
//	std::cout<<"kegiatan\t: peer group\n";
//	std::cout<<"kegiatan\t: peer group"<< std:: endl;
//	std::cout<<"tempat\t\t: online";
	
//	cout<<"\"\"\"\"\n";
//	cout<<"\"   \"\n";
//	cout<<"\"    \"\n";
//	cout<<"\"   \"\n";
//	cout<<"\"\"\"\"\n";
	
//	cout<<"   *"<<endl;
//	cout<<"  ***"<<endl;
//	cout<<" *****"<<endl;
//	cout<<"*******"<<endl;

//	int bil;
//	cout<<"masukkan bil\t: ";
//	cin>>bil;
//	//kuadrat=pow(variabel, 2)
//	cout<<"hasil pangkat 2\t\t: "<<pow(bil, 2);

	char nama[50], kelas[2], kelompok[3], alamat[50];
	cout<<"nama\t\t: ";
	cin.getline(nama, 50);
	cout<<"kelas\t\t: ";
	cin>>kelas;
	cout<<"kelompok\t: ";
	cin>>kelompok;
	cout<<"alamat\t\t: ";
	cin.ignore(1,  '\n');
	cin.getline(alamat, 50);
	
	cout<<"output"<<endl;
	cout<<"nama\t\t: "<<nama<<endl;
	cout<<"kelas\t\t: "<<kelas<<endl;
	cout<<"kelompok\t: "<<kelompok<<endl;
	cout<<"alamat\t\t: "<<alamat<<endl;
	
	
	return 0;
}
