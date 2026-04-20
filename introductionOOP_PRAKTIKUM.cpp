#include <iostream>
using namespace std;

class Barang{
public :
    int jumlah;
    string nama;
    string kategori;
    string tanggalProduksi;

    void tampilkanSpesifikasi(){
        cout << "Nama           : " << nama << endl;
        cout << "Jumlah         : " << jumlah << endl;
        cout << "Kategori       : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }
}; //batas class

int main(){
    Barang elektronik; //object
    elektronik.nama = "Laptop MSI katana";
    elektronik.jumlah = 15;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2023-09-13";

    Barang nonElektronik; //object
    nonElektronik.nama = "tongkat kayu";
    nonElektronik.jumlah = 8;
    nonElektronik.kategori = "Non-Elektronik";
    nonElektronik.tanggalProduksi = "2023-15-23";

    elektronik.tampilkanSpesifikasi(); //memanggil method tampilkanSpesifikasi
    cout << endl;
    nonElektronik.tampilkanSpesifikasi(); //memanggil method tampilkanSpesifikasi
}
 