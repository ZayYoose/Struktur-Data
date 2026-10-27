#include <iostream>
#include <cstring>

int main() {
    std::string Huruf;
    std::cout << "MASUKKAN SEBUAH KATA : ";
    std::getline(std::cin, Huruf);

    int length = Huruf.length();
    char reversed[length + 1];
    char *q = reversed + length;
    *q = '\0';

    const char *p_input = Huruf.c_str();
    while (*p_input != '\0') {
        q--;
        *q = *p_input;
        p_input++;
    }
    std::cout << reversed << std::endl;
    return 0;
}

