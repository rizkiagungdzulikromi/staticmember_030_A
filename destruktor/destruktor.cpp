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

void angka::cetakData() {
	for (int i = 1; i < panjang; i++) {
		cout << i << " = " << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1; i < panjang; i++) {
		cout << i << " = "; cin >> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3); //construktor
	angka* ptrBelajarcpp = new angka(5);//construktor
	delete ptrBelajarcpp;//destructor

	return 0;
}