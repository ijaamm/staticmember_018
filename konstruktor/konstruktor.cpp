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