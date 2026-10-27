#include <stdio.h>
#include <ctype.h>

typedef struct {
	char elemen[100];
	int jml_kata;
} Kata;

Kata kata;
Kata *p_kata=&kata;

int main(){
	char kalimat[100];
	p_kata->jml_kata=0;
	char *p = p_kata ->elemen;
	printf("Masukkan sebuah kalimat : "); gets(kalimat);
	fflush(stdin);
	
	for(int i=0;i<kalimat[i];i++){
		*p=kalimat[i];
		P_kata->jml_kata++;
		p++;
	}
	p=p_kata->elemen;
	
	return 0;
}
