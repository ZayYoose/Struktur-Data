#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
	string nim;
	string nama;
	float ipk;
};

int main() {
	mahasiswa mhs1;
	mahasiswa mhs2;
	
	cout << "=====================================================" <<endl;
	mhs1.nim = "20230801124";
	mhs1.nama = "Tegar";
	mhs1.ipk = 3.75;
	
	cout << "NIM : " << mhs1.nim << endl;
	cout << "Nama : " << mhs1.nama << endl;
	cout << "IPK : " << mhs1.ipk << endl;
	
	cout << "=====================================================" <<endl;
	mhs2.nim = "20230801125";
	mhs2.nama = "Teguh";
	mhs2.ipk = 3.94;
	
	cout << "NIM : " << mhs2.nim << endl;
	cout << "Nama : " << mhs2.nama << endl;
	cout << "IPK : " << mhs2.ipk << endl;
	
	return 0;
}
