//FUNCTION DAN PROSEDUR
#include <iostream>
#include<cmath>	//library untuk menghitung fungsi luas lingkaran
#include <cstring>	//library cstring
using namespace std;

//fungsi
//tipe data pengembalian adalah integer, dan function dinamakan tambah
//int tambah(int a, int b){
//	//paramenter adalah a dan b
//	int hasil= a+b; //menghitung hasil penjumlahan
//	return hasil;
//}

//prosedur
//void tampilkan_nama(string nama){
//	cout<<"nama saya adalah "<<nama<<endl;
//	//prosedur hanya menampilkan pesan, tanpa mengembalikan nilai apapun
//}

//contoh lain fungsi
//double luasLingkaran(double r){
//	double pi=M_PI;
//	return pi*r*r;
//}
//int main(){
//	double r;
//	cin>>r;
//	cout<<"luas lingkaran: "<<luasLingkaran(r);
//	return 0;
//}

//prosedur
//void absen(string name, int npm){
//	cout<<name<<"_"<<npm;
//}
//int main(){
//	string name;
//	int npm;
//	getline(cin, name);
//	cin>>npm;
//	absen(name, npm);
//	return 0;
//}

//POINTER
//tipe_data* nama_pointer;
//int* ptr1, *ptr2, *ptr3;	//contoh pendeklarasian
//int a=5;
//int* ptr=&a;	//inisialisasi pointer dengan alamat memori variabel a
//int *ip; 	//pointer to an integer
//double *dp;	//pointer to a double
//float *fp;	//pointer to a float
//char *ch;	//to a character
//
////contoh
//int num=10;
//double dbl =3.14;
//float flt=2.5f;
////assign address of variabel tp pointer
//ip=&num;
//dp=&dbl;
//fp=&flt;
//ch=&chr;
//
//cout<<"integer value:"<<*ip<<", memory address:"<<ip<<endl;
//cout<<"integer value:"<<*dp<<", memory address:"<<dp<<endl;
//cout<<"integer value:"<<*fp<<", memory address:"<<fp<<endl;
//cout<<"integer value:"<<*ch<<", memory address:"<<(void*)ch<<endl;
//
////contohhhh
//int main(){
//	int arr[5]={1,2,3,4,5};
//	int *ptr=arr;	//ptr menunjuk ke alamat memori awal dari array
//	for(int i=0; i<5; i++){
//		cout<<"value of arr["<<i<<"]= "<<*ptr<<endl;
//		ptr++;	// pindah kealamat memori berikutnya 
//	}
//	return 0;
//}

//menulis file
//int main(){
//	string teks[4];
//	for (int i=00; i<4; i++){
//		cin>>teks[i];
//	}
//	ofstream writeFile("barang.txt");
//	for(int i=0;i<4;i++){
//		writeFile<<teks[i]<<endl;
//	}
//}
//ofstream = membuat dan menulis file
//ifstream= membaca file
//fstream= kombinasi keduanya

//c-stringgg
//cin.get
//cin.ignore = untuk membersihkan krakter yg tersisa pada buffer input setelah membaca input pengguna
//int main(){
//	char nama[15];
//	chaar npm[10];
//	cin.get(nama, 15);
//	cin.ignore();
//	cin.get(npm,10);
//	
//	cout<<"nama: "<<nama<<endl;
//	cout<<"npm: "<<npm<<endl;
//}

//cin.putback
//int main(){
//	char karakter;
//	while(cin.get(karakter)){
//		if(karakter=='a');
//			cin.putback('x');
//		else
//			cout<<karakter;
//	}
//}

//fungsi untuk memanipulasi cstring
//strlen
//int main(){
//	char str[]={'I', 'L', 'K', 'O', 'M', 'P', '\0' };
//	cout<<str<<endl;
//	cout<<strlen(str)<<endl;
//}
//sebuah variabel char str[] kita tampilkan ukuran dari karakter tsb dgn menggunakan fungsi strlen

////strcat= untuk menggabungkan dua string 
//int main(){
//	char firstName[50]="yunnisa diah ";
//	char lastName[50]="Pratiwi";
//	char *fullName= strcat(firstName, lastName);
//	cout<<fullName;
//}

//strtol= untuk mengkonversi string value menjadi long value 
//int main(){
//	char* endptr;
//	char str1[]="00011010John";
//	long value1= strtol(str1, &endptr, 2);
//	cout<<"the converted value is "<<value1<<endl;
//	cout<<"unconverted part: "<<endptr<<endl;
//	
//	char str2[]="1CZidan";
//	long value2= strtol(str2, &endptr, 16);
//	cout<<"the converted value is "<<value2<<endl;
//	cout<<"unconverted part: "<<endptr<<endl;
//
//	char str3[]="40raziq";
//	long value3= strtol(str3, &endptr,10);
//	cout<<"the converted value is "<<value3<<endl;
//	cout<<"unconverted part: "<<endptr<<endl;
//}
//paramenter 1= variabel yg akan dikonversi
//paramenter 2= menampung pointer ke karakter
//paramenter 3= menampung basis bilangan yang akan dipakai pada variabel di prmntr pertama


//strtoul= sama seperti strtol bedanya pake unsigned long
//int main(){
//	char* endptr;
//	char str1[]="00011010John";
//	unsigned long value1= strtol(str1, &endptr, 2);
//	cout<<"the converted value is "<<value1<<endl;
//	cout<<"unconverted part: "<<endptr<<endl;
//	
//	char str2[]="1CZidan";
//	unsigned long value2= strtol(str2, &endptr, 16);
//	cout<<"the converted value is "<<value2<<endl;
//	cout<<"unconverted part: "<<endptr<<endl;
//
//	char str3[]="40raziq";
//	unsigned long value3= strtol(str3, &endptr,10);
//	cout<<"the converted value is "<<value3<<endl;
//	cout<<"unconverted part: "<<endptr<<endl;
//}

//strtod= hanya memiliki dua paramenter karena tidak dapat menangani konversi ke biner maupun heksa , hanya bisa dilakukan dgn basis 10
//int main(){
//	char* endptr;
//	char str1[]="10John";
//	double value1= strtod(str1, &endptr);
//	cout<<"the converted value is "<<value1<<endl;
//	cout<<"unconverted part: "<<endptr<<endl;
//	
//	char str2[]="20Zidan";
//	double value2= strtod(str2, &endptr);
//	cout<<"the converted value is "<<value2<<endl;
//	cout<<"unconverted part: "<<endptr<<endl;
//
//	char str3[]="40raziq";
//	double value3= strtod(str3, &endptr);
//	cout<<"the converted value is "<<value3<<endl;
//	cout<<"unconverted part: "<<endptr<<endl;
//}

//contohhh
//int main(){
//	char data[10][100]={"2217Doyoung", "2214Renjun", "2278Ncaa", "2210Haechan", "2215Jie", "2223NCT"};
//	char* endPtr;
//	for(int i=0; i<6; i++){
//		long value = strtod(data[i], &endPtr);
//		cout<<"nama: "<<endPtr<<endl;
//		cout<<"npm: "<<value<<endl;
//		cout<<endl;
//	}
//}
//value untuk angka?


//class dan struct : pada class aksesnya bersifat private jadi harus diubah ke public dulu
////struct
//struct mahasiswa{
//	string nama, npm;
//};
//int main(){
//	mahasiswa mhs;
//	cin>>mhs.nama;
//	cin>>mhs.npm;
//	cout<<mhs.nama<<" "<<mhs.npm;
//}

////class
//class mahasiswa{
//	public:
//		string nama, npm;
//		
//		void perkenalan(){
//			cout<<" nama : "<<nama<<endl;
//			cout<<" npm : "<<npm;
//		}
//};
//int main(){
//	mahasiswa mhs;
//	cin>>mhs.nama>>mhs.npm;
//	mhs.perkenalan();
//}

//constructor
//class mahasiswa{
//	public:
//		string nama, npm;
//		mahasiswa(string nama, string b){	//constructor
//			this->nama=nama;
//			npm=b;
//		}
//};
//int main(){
//	mahasiswa mhs("nca", "2217");
//	cout<<"nama: "<<mhs.nama<<endl;
//	cout<<"npm: "<<mhs.npm;
//}

//setter dan getter
//class mahasiswa{
//	private:
//		string nama;
//	public:
//		void setNama(string nama){	//cara memberi nilai pada atribut private pke setter
//			this->nama=nama''
//		}
//		string getNama(){
//			return nama;
//		}
//};
//int main(){
//	mahasiswa mhs;
//	mhs.setNama("ncaa");
//	cout<<mhs.getNama();	//cara melihat hasil outputnya pakai getter
//}

//contohhh
//class persegiPanjang{
//	private:
//		int panjang;
//		int lebar;
//	public:
//		void setPanjang(int panjang){
//			this->panjang=panjang;
//		}
//		void setLebar(int lebar){
//			this->lebar=lebar;
//		}
//		int getPanjang(){
//			return panjang;
//		}
//		int getLebar(){
//			return lebar;
//		}
//		int luas(){
//			return panjang*lebar;
//		}
//};
//int main(){
//	persegiPanjang psg;
//	 psg.setLebar(10);
//	 psg.setPanjang(10);
//	 cout<<"oanjang: "<<psg.getPanjang()<<endl;
//	 cout<<"lebar: "<<psg.getLebar()<<endl;
//	 cout<<"luas: "<<psg.luas();
//}

//dengan constructor
class persegiPanjang{
	private:
		int panjang;
		int lebar;
	public:
		persegiPanjang(int panjang, int lebar){
			this->panjang=panjang;
			this->lebar=lebar;
		}
		void setPanjang(int panjang){
			this->panjang=panjang;
		}
		void setLebar(int lebar){
			this->lebar=lebar;
		}
		int getPanjang(){
			return panjang;
		}
		int getLebar(){
			return lebar;
		}
		int luas(){
			return panjang*lebar;
		}
};
int main(){
	persegiPanjang psg(10, 10);
	 cout<<"oanjang: "<<psg.getPanjang()<<endl;
	 cout<<"lebar: "<<psg.getLebar()<<endl;
	 cout<<"luas: "<<psg.luas();
}
