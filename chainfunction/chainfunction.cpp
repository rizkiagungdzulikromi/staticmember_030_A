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
