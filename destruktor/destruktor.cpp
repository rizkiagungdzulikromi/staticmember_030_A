#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //construktor
	~angka(); //destructor
	void cetakData();
	void isiData();
};

//definisi member func
angka::angka(int i) { //construktor
	panjang = i;
	arr = new int[i];
	isiData();
}
angka::~angka() { //destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "alamat array sudah dilepaskan" << endl;
}

