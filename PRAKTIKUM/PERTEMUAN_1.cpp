#include<iostream>
#include <conio.h>
using namespace std;
int main(){
    
    cout<<"[ Program 1 : Perkalian ]"<<"\n";
    float bil1,bil2,hasil;
    
    bil1 = 50;
    bil2 = 50;
    
    hasil = bil1*bil2;
    
    cout<<"Hasil kali dari "<<bil1<<" dan "<<bil2<<" adalah "<<hasil<<"\n\n";
    
    cout<<"[ Program 2 : Biodata Mahasiswa ]"<<"\n";
    const int sks=4,nim=201581178;
    char nama[12]="Mia Kastina",matkul[]="Struktur Data";
    float nilai1,nilai2,nilai3;
    nilai1=90;
    nilai2=80;
    nilai3=(nilai1 + nilai2)/2;
    cout<<"Nama Mahasiswa : "<<nama<<"\n";
    cout<<"NIM            : "<<nim<<"\n";
    cout<<"Mata Kuliah    : "<<matkul<<"\n";
    cout<<"SKS            : "<<sks<<"\n";
    cout<<"Nilai Teori    : "<<nilai1<<"\n";
    cout<<"Nilai Praktek  : "<<nilai2<<"\n";
    cout<<"Nilai Akhir    : "<<nilai3<<"\n";
    getch();
}
