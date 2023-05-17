#include <iostream>
using namespace std;

class buku {
    string judul;
public:
    buku setJudul(string judul) {
        this->judul = judul;
        return *this; //chain func
    }

    string getJudul() {
        return this->judul;
    }
} bukunya;

int main() {
    //normal
    //bukunya.setJudul("matematika");
    //cout << bukunya.getJudul();

    //sederhana
    cout << bukunya.setJudul("matematika").getJudul(); //chain func

    return 0;
}