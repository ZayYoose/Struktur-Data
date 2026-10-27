#include<stdio.h>
#include<conio.h>

int main(){
	float nilai,*p1,*p2;
	nilai = 14.54;
	printf("Nilai = %2.2f, p1 alamatnya %p\n0",nilai,&nilai);
	p1 = &nilai;
	printf("Nilai p1 = %2.2f, p1 menunjuk alamat %p\n",*p1,p1);
	printf("mula-mula nilai p2 = %2.2f, p2 menunjuk alamat %p\n",*p2,p2);
	p2 = p1;
	printf("sekarang nilai p2 = %2.2f, p2 menunjuk alamat %p\n,*p2,p2");
	getch();
}
