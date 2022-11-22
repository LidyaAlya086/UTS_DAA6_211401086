// syntax program untuk mendeklarasikan struct
#include <iostream>
#include <string>

using namespace std;

struct data_BBM{
    string kode_BBM;
    string nama_BBM;
    int harga;
};

// syntax program yang akan menjalankan program
int main()
{
    string nama_penjaga, jenis, code, plat;
    data_BBM BBM;
    string kode_BBM[4]={"1", "2", "3", "4"};
    string nama_BBM[4]={"Premium", "Bio Solar", "Solar", "Pertamax"};
    int jml_uang, kembali, total=0;
    string no_pompa, no_selang;
    float liter, harga, uang;

    cout << "======================================="<<endl;
    cout << "     Selamat Datang di SPBU 44.531.26  "<<endl;
    cout << "   Jalan Overste Isdiman 11, Purwokerto"<<endl;
    cout << "======================================="<<endl;
    cout << "List Harga BBM : "<<endl;
    cout << "Kode        Jenis BBM         Harga "<<endl;
    cout << " 1           Premium      Rp. 8.500,00"<<endl;
    cout << " 2          Bio Solar     Rp. 7.500,00"<<endl;
    cout << " 3            Solar       Rp. 7.500,00"<<endl;
    cout << " 4          Pertamax      Rp. 10.300,00"<<endl;
    cout << "---------------------------------------"<<endl;

    cout << "Kode BBM : "; cin >> BBM.kode_BBM;
    if (BBM.kode_BBM == "1"){
        cout << "Jenis BBM : "<<nama_BBM[0]<<endl;
        cout << "Rp. 8.500/liter";
        jenis = "Premium";
        harga = 8500;
        nama_penjaga = "Anto";
        no_pompa = "1";
        no_selang = "1";
    }
    else if (BBM.kode_BBM == "2"){
        cout << "Jenis BBM : "<<nama_BBM[1]<<endl;
        cout << "Rp. 7.500/liter";
        jenis = "Bio Solar";
        harga = 7500;
        nama_penjaga = "Joni";
        no_pompa = "2";
        no_selang = "2";
    }
    else if (BBM.kode_BBM == "3"){
        cout << "Jenis BBM : "<<nama_BBM[2]<<endl;
        cout << "Rp. 7.500/liter";
        jenis = "Solar";
        harga = 7500;
        nama_penjaga = "Sutono";
        no_pompa = "3";
        no_selang = "3";
    }
    else if (BBM.kode_BBM == "4"){
        cout << "Jenis BBM : "<<nama_BBM[3]<<endl;
        cout << "Rp. 10.300/liter";
        jenis = "Pertamax";
        harga = 10300;
        nama_penjaga = "Farhan";
        no_pompa = "4";
        no_selang = "4";
    }
    else {
        cout << "Maaf anda salah memasukkan kode BBM";
    }
        cout << endl;
        cout << "Plat nomor : "; cin >> plat;
        cout << "Beli       : "; cin >> uang;
        cout << "Bayar      : "; cin >> jml_uang;
        total = total + uang;
        liter = uang / harga;
        kembali = jml_uang - uang;
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                   -PERTAMINA-                        "<<endl;
    cout << "                 -SPBU 44.531.26-                     "<<endl;
    cout << "        -Jl. Overste Isdiman 11, Purwokerto-          "<<endl;
    cout << "                -Telp 0281 643663-                    "<<endl;
    cout << "------------------------------------------------------"<<endl;
    cout << dt <<endl;
    cout << "Nomor Pompa    : "<<no_pompa<<endl;
    cout << "Nomor Selang   : "<<no_selang<<endl;
    cout << "Nomor Plat     : "<<plat<<endl;
    cout << "Jenis BBM      : "<<jenis<<endl;
    cout << "Liter          : "<<liter<<endl;
    cout << "Harga/liter    : Rp. "<<harga<<",00"<<endl;
    cout << "Total          : Rp. "<<total<<",00"<<endl;
    cout << "Bayar          : Rp. "<<jml_uang<<",00"<<endl;
    cout << "Kembali        : Rp. "<<kembali<<",00"<<endl;
    cout << "======================================================"<<endl;
    cout << "Operator       : "<<nama_penjaga<<endl;
    cout << "        BBM subsidi untuk golongan TIDAK MAMPU        "<<endl;
    cout << "           TERIMA KASIH DAN SELAMAT JALAN             ";

    return 0;
}