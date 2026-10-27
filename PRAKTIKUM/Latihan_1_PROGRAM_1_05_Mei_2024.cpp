#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	system("cls");
	int n,i,cari,arr[50];
	cout<<"Masukkan jumlah angka : ";
	cin>>n;
	cout<<"Masukkan "<<n<<" angka :\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Masukkan angka yang dicari : ";
	cin>>cari;
	for(i=0;i<n;i++)
	{
	if(arr[i]==cari)
		{
		cout<<cari<<" ditemukan pada lokasi "<<i+1;
		}
	}
	if(i==0)
	{
		cout<<"Tidak ditemukan!\n"<<cari<< "tidak termasuk dalam inputan";
	}
	getch();
}
