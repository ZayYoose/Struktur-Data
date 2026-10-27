#include <stdio.h>
#include <string.h>

int main(){
    char nama[] = "CIKUPA";
    char *p;
    p=nama;
    printf("%s\n", nama);
    int length = strlen(nama);
    char reversed[length];
    char *q = reversed + length;
    *q=NULL;
    while (*p!=NULL) {
        q--;
        *q = *p;
        p++;
    }
    printf("%s\n", reversed);
    return 0;
}
