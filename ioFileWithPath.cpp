#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan nama File : ";
	cin >> NamaFile;

	// membuka file dalam mode menulis.
	ofstream outfile;
