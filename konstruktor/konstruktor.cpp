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
