#include <iostream>
using namespace std;

struct mahasiswa {
	string nim;
	string nama;
	float ipk;
};

void isiDataMahasiswa(mahasiswa &mhs) {
	cout << "Masukkan NIM : ";
	getline(cin, mhs.nim);
	
	cout << "Masukkan Nama : ";
	getline(cin, mhs.nama);
	
	cout << "Masukkan IPK : ";
	cin >> mhs.ipk;
	
	cin.ignore();
}

int main() {
	mahasiswa mhs1, mhs2;
	
	cout << "============================================================" << endl;
	cout << "Isi data Mahasiswa 1" << endl;
	isiDataMahasiswa(mhs1);
	cout << "============================================================" << endl;
	cout << "Isi data Mahasiswa 2" << endl;
	isiDataMahasiswa(mhs2);
	
	cout << "============================================================" << endl;
	cout << "Data Mahasiswa 1" << endl;
	cout << "NIM : " << mhs1.nim << endl;
	cout << "Nama : " << mhs1.nama << endl;
	cout << "IPK : " << mhs1.ipk << endl;
	
	cout << "============================================================" << endl;
	cout << "Data Mahasiswa 2" << endl;
	cout << "NIM : " << mhs2.nim << endl;
	cout << "Nama : " << mhs2.nama << endl;
	cout << "IPK : " << mhs2.ipk << endl;
	
	return 0;
}
