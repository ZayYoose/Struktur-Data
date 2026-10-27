#include <stdio.h>
#include <ctype.h>
#include <string.h> 

const char *T9_mapping[] = {
    "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
};

void convertToT9(char *dest, const char *str) {
    while (*str) {
        if (isalpha(*str)) {
            char c = tolower(*str);
            for (int i = 0; i < 10; i++) {
                if (strchr(T9_mapping[i], c) != NULL) {
                    *dest = '0' + i;
                    dest++;
                    break;
                }
            }
        } else if (*str == ' ') {
            *dest = '#';
            dest++;
        }
        str++;
    }
    *dest = '\0';
}

int main() {
    char kalimat[100];

    printf("Masukkan sebuah kalimat : ");
    fgets(kalimat, sizeof(kalimat), stdin);

    char hasil[100];
    convertToT9(hasil, kalimat);

    printf("Output: %s\n", hasil);

    return 0;
}
