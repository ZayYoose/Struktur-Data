#include <iostream>
#include <string>

using namespace std;

struct Book {
    int number;
    string title;
    int price;
    Book* next;
};

class BookList {
private:
    Book* head;

public:
    BookList() : head(NULL) {}

    void addBook(int number, string title, int price) {
        Book* newBook = new Book();
        newBook->number = number;
        newBook->title = title;
        newBook->price = price;
        newBook->next = NULL;

        if (head == NULL) {
            head = newBook;
        } else {
            Book* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newBook;
        }
    }

    void printList() {
        if (head == NULL) {
            cout << "TIDAK ADA BUKU YANG TERSEDIA" << endl;
            return;
        }
        Book* temp = head;
        while (temp != NULL) {
            cout << temp->number << " " << temp->title << " " << temp->price << endl;
            temp = temp->next;
        }
    }

    void editPrice(int number, int newPrice) {
        Book* temp = head;
        while (temp != NULL) {
            if (temp->number == number) {
                temp->price = newPrice;
                cout << "Price updated for book number " << number << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Book with number " << number << " not found." << endl;
    }

    ~BookList() {
        while (head != NULL) {
            Book* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

void displayMenu() {
    cout << "===== GRAMEDIA CITRA RAYA =====\n";
    cout << "1. UPLOAD BUKU\n";
    cout << "2. LIST BUKU TERSEDIA\n";
    cout << "3. UBAH HARGA\n";
    cout << "4. KELUAR\n";
    cout << "MASUKKAN PILIHANMU : ";
}

int main() {
    BookList bl;
    int choice, number, price;
    string title;

    while (true) {
        displayMenu();
        cin >> choice;

        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(INT_MAX, '\n'); 
            cout << "TIDAK TERSEDIA. MOHON MASUKKAN NOMOR ANTARA 1-4\n";
            continue;
        }

        switch (choice) {
            case 1:
                cout << "NOMOR BUKU: ";
                cin >> number;
                cin.ignore();
                cout << "NAMA BUKU: ";
                getline(cin, title);
                cout << "HARGA BUKU: ";
                cin >> price;
                bl.addBook(number, title, price);
                break;

            case 2:
                bl.printList();
                break;

            case 3:
                cout << "MASUKKAN NOMOR BUKU YANG INGIN DI UBAH HARGANYA: ";
                cin >> number;
                cout << "MASUKKAN HARGA BARU: ";
                cin >> price;
                bl.editPrice(number, price);
                break;

            case 4:
                return 0;

            default:
                cout << "PILIHAN TIDAK ADA. COBA LAGI.\n";
        }
    }
}

