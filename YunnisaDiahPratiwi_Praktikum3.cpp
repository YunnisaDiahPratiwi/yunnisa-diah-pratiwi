#include <iostream>
#include <fstream>
using namespace std;
	int main(){
//		ofstream inFile("example.txt");
//		
//		inFile<<"saya budi";
//		
//		inFile.close();
//		string teks;
//		
//		ifstream outFile("example.txt");
//		getline(outFile, teks);
//		cout<<teks;
		
//		while(getline(outFile, teks)){
//			cout<<teks<<"\n";
//		}

		string teks[4];
		
		for(int i=0; i<4; i++){
			cin>>teks[i];
		}
		ofstream readFile("barang.txt");
		
		for(int i=0; i<4; i++){
			readFile<<teks[i]<<"\n";
		}
	}
