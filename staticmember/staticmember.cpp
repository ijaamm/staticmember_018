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