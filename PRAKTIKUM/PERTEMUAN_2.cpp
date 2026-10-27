#include<iostream>
using namespace std;

int main() {
	int arr[5] = {10, 20, 30, 40, 50};
	cout<<"[ Program 1 : Array Homogen Int ]"<<endl;
	cout<< " Contoh Array Dengan tipe data yang sama : ";
	for (int i = 0; i < 5; i++) {
		cout << arr[i];
		if (i < 4){
			cout << ", ";
		}
	}
	cout << endl<<"\n";
	
	
	
	int numbers[5] = {10, 20, 30, 40, 50};
	string nama[5] = {"Arkan", "Rizkywahyu", "Fajri", "Noval", "Athar"};
	cout<<"[ Program 2 : Array non homogen ]"<<endl;
	cout<<"============================================="<<endl;
	cout<<"Array dengan tipe data berbeda : "<<endl;
	cout<<"Menampilkan tipe data ini"<<endl;
	cout<<"Elemen-elemen array : ";
	for (int i = 0; i < 5; i++) {
		cout<<numbers[i]<<", ";
	}
	cout<<endl;
	cout<<"============================================="<<endl;
	cout<<"Menampilkan tipe data string"<<endl;
	cout<<"Elemen-elemen array : ";
	for (int i = 0; i < 5; i++) {
		cout<<nama[i]<<", ";
	}
	cout<<endl<<"\n";

	
	

	cout<<"[ Program 3 : Array Dimensi satu ]"<<endl;
	cout<< " Contoh Array Dimensi satu : ";
	for (int i = 0; i < 5; i++) {
		cout << arr[i];
		if (i < 4){
			cout << ", ";
		}
	}
	cout << endl<<"\n";

	
	
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	cout<< "Isi array dua dimensi : "<<endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout<< arr[i][j]<<" ";
		}
	}
	cout << endl<<"\n";
	return 0;
}

