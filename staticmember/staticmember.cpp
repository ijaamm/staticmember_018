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

int main() {
	mahasiswa mhs1("Lia Kurnia");
	mahasiswa mhs2("Asroni");
	mhs2.nim = 10;
	mahasiswa mhs3("Andi Kurniawan");
	mhs3.nim = 20;
	mahasiswa mhs4("Joko Purbo");

	mhs1.printaALL();
	mhs2.printaALL();
	mhs3.printaALL();
	mhs4.printaALL();

	return 0;
}