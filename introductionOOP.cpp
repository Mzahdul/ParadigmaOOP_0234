#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    string nama;
    float nilai;

    void printdata(){
        cout << "NIM: " << nim << endl;
        cout << "Nama: " << nama << endl;
        cout << "Nilai: " << nilai << endl;
    }
}; //batas class

int main(){
    mahasiswa mhs;//object
    mhs.nim = 20250140234;
    mhs.nama = "JAACKK OWII";
    mhs.nilai = 100;
    
    mhs.printdata();
}