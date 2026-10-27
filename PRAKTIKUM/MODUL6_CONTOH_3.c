#include <conio.h> 
#include <stdio.h> 
 
int main(){ 
    int a=25,b=12,t; 
	int *p,*q; 
	p = &a;
	q = &b; 
	printf("nilai yang ditunjuk p = %d di alamat %p\n",*p,p); 
	printf("nilai yang ditunjuk q = %d di alamat %p\n",*q,q); 
 //Contoh kasus, penukaran nilai 2 variabel dengan pointer  
	t = *p;  
	*p = *q; 
	*q = t; 
	printf("nilai yang ditunjuk p sekarang = %d di alamat %p\n",*p,p); 
	printf("nilai yang ditunjuk q sekarang = %d di alamat %p\n",*q,q); 
    getch(); 
}
