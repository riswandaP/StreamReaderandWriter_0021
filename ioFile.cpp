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

    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //membuka file dalam mode membaca 
    ifstream infile;
    //menunjuk ke sebuah file
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membaca file" << endl;

    //jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan disini
            cout << baris << '\n';
        }

}