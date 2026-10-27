#include <stdio.h> 
#include <conio.h> 
 
int main(){ 
    int *p,a=25,b; 
    
    printf("nilai a = %d di alamat a = %p,\n",a,&a); 
    printf("nilai p di alamat = %p\n",p); 
    p = &a; 
    printf("nilai p = %d di alamat %p\n",*p,p); 
    b = *p;  
 printf("nilai b = %d di alamat %p\n",b,&b); 
    getch();
}
