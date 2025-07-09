#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string baris;

    //membuat file dalam mode menulis.
    ofstream outfile;
    //menunjuk ke sebuah nama file.
    outfile.open("contohfile.txt");

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis 
    while (true) {
        //mendapatkan karakter dalam satu baris 
        getline(cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        //menulis dan memasukan nilai dari 'baris' kedalam file
        outfile << baris << endl;
    }
