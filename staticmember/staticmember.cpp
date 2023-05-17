#include <iostream>
#include <string>
using namespace std;
class mahasiswa {
public: 
	static int nim;
	int id;
	string nama;

	void setID();
	void printaALL();
	mahasiswa(string pnama) :nama(pnama) { setID(); }

};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printaALL() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << "NIM = " << nim << endl;
	cout << endl;
}