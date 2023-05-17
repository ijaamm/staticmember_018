#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	int nim;
	string nama;
public:
	mahasiswa();
	mahasiswa(int);
	mahasiswa(string);
	mahasiswa(int iNIM, string iNama);
	void cetak();
};

mahasiswa::mahasiswa() {
	nim = 0;
	nama = " ";
}
mahasiswa::mahasiswa(int iNIM) {
	nim = iNIM;
}

mahasiswa::mahasiswa(string iNama) {
	nama = iNama;
}

mahasiswa::mahasiswa(int iNIM, string iNama) {
	nim = iNIM;
	nama = iNama;
}

void mahasiswa::cetak() {
	cout << endl << "nim = " << endl;
	cout << "nama = " << nama << endl;
}

int main() {
	mahasiswa mhs1;
	mahasiswa mhs2(20);
	mahasiswa mhs3("indra");
	mahasiswa mhs4(30, "fauzan");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

	return 0;
}