#include <iostream>

using namespace std;

int fpb(int x, int y) {
    if (y <= x && x % y == 0) {
        return y;
    }
    else if (x < y) {
        return fpb(y, x);
    }
    else {
        return fpb(y, x % y);
    }
}
int main() {
    int a, b;
    cout << "Masukkan dua bilangan: ";
    cin >> a >> b;
    cout << "FPB dari " << a << " dan " << b << " adalah " << fpb(a, b) << endl;
    return 0;
}

