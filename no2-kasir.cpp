//program no 2 : Kasir

#include <iostream>
#include <string.h>

using namespace std;

struct data_brg
{
    int kode_brg;
    string nama_brg;
    int harga;
};

int main(){
    string jenis;
    data_brg Barang;
    string kode_brg[10]={"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
    string nama_brg[10]={"Tas", "Buku", "Pulpen", "Penghapus", "Aqua", "Tisue", "Coklat", "Susu", "Indomie", "Sabun"};
    int jml_brg, jml_uang, kembalian, total=0;
    float harga, uang;

    cout<<"  =========================================\n";
    cout<<"         Selamat Datang di Indomaret       \n";
    cout<<"       Jalan Sisingamangaraja I, Medan     \n";
    cout<<"  =========================================\n";
    cout<<"\nList Harga Barang : \n";
    cout<<"----------------------------------------------\n";
    cout<<"Kode         Jenis Barang        Harga\n";
    cout<<"----------------------------------------------\n";
    cout<<"1            Tas                 Rp. 50.000,00\n";
    cout<<"2            Buku                Rp. 10.000,00\n";
    cout<<"3            Pulpen              Rp. 5.000,00 \n";
    cout<<"4            Penghapus           Rp. 3.000,00 \n";
    cout<<"5            Aqua                Rp. 5.000,00 \n";
    cout<<"6            Tisue               Rp. 3.000,00 \n";
    cout<<"7            Coklat              Rp. 10.000,00\n";
    cout<<"8            Susu                Rp. 15.000,00\n";
    cout<<"9            Indomie             Rp. 2.500,00 \n";
    cout<<"10           Sabun               Rp. 3.000,00 \n";
    cout<<"----------------------------------------------\n";
    cout<<"Kode Barang          : ";
    cin>>Barang.kode_brg;
    switch(Barang.kode_brg){
        case 1:     cout<<"Jenis Barang         : "<<nama_brg[0]<<endl;
                    cout<<"Harga/barang         : Rp. 50.000/barang\n";
                    jenis="Tas";
                    harga=50000;
                    break;
        case 2:     cout<<"Jenis Barang         : "<<nama_brg[1]<<endl;
                    cout<<"Harga/barang         : Rp. 10.000/barang\n";
                    jenis="Buku";
                    harga=10000;
                    break;
        case 3:     cout<<"Jenis Barang         : "<<nama_brg[2]<<endl;
                    cout<<"Harga/barang         : Rp. 5.000/barang\n";
                    jenis="pulpen";
                    harga=5000;
                    break;
        case 4:     cout<<"Jenis Barang         : "<<nama_brg[3]<<endl;
                    cout<<"Harga/barang         : Rp. 3.000/barang\n";
                    jenis="penghapus";
                    harga=3000;
                    break;
        case 5:     cout<<"Jenis Barang         : "<<nama_brg[4]<<endl;
                    cout<<"Harga/barang         : Rp. 5.000/barang\n";
                    jenis="Aqua";
                    harga=5000;
                    break;
        case 6:     cout<<"Jenis Barang         : "<<nama_brg[5]<<endl;
                    cout<<"Harga/barang         : Rp. 3.000/barang\n";
                    jenis="Tisue";
                    harga=3000;
                    break; 
        case 7:     cout<<"Jenis Barang         : "<<nama_brg[6]<<endl;
                    cout<<"Harga/barang         : Rp. 10.000/barang\n";
                    jenis="Coklat";
                    harga=10000;
                    break;
        case 8:     cout<<"Jenis Barang         : "<<nama_brg[7]<<endl;
                    cout<<"Harga/barang         : Rp. 15.000/barang\n";
                    jenis="Susu";
                    harga=15000;
                    break;
        case 9:     cout<<"Jenis Barang         : "<<nama_brg[8]<<endl;
                    cout<<"Harga/barang         : Rp. 2.500/barang\n";
                    jenis="Indomie";
                    harga=2500;
                    break;
        case 10:    cout<<"Jenis Barang         : "<<nama_brg[9]<<endl;
                    cout<<"Harga/barang         : Rp. 3.000/barang\n";
                    jenis="Sabun";
                    harga=3000;
                    break; 
        default:    cout<<"Input yang anda masukkan salah!\n";
    }
    cout<<"Jumlah barang dibeli : ";
    cin>>jml_brg;
    total=jml_brg*harga;
    cout<<"Total harga barang   : "<<total<<endl;
    cout<<"Bayar                : ";
    cin>>jml_uang;
    kembalian=jml_uang-total;

    system("cls");

    cout<<"                     -INDOMARET-                     \n";
    cout<<"          -Jalan Sisingamangaraja I, Medan-          \n";
    cout<<"                -Telp 0821 64327341-                 \n";
    cout<<"-----------------------------------------------------\n";
    cout<<"Struck Belanja :\n \n";

    cout<<"Jenis Barang         : "<<jenis<<endl;
    cout<<"Harga/barang         : Rp. "<<harga<<",00"<<endl;
    cout<<"Total                : Rp. "<<total<<",00"<<endl;
    cout<<"Bayar                : Rp. "<<jml_uang<<",00"<<endl;
    cout<<"Kembalian            : Rp. "<<kembalian<<",00"<<endl;
    cout<<"=====================================================\n";
    cout<<"   Terimakasih sudah membeli di Supermarket ini^^    \n";

    return 0;
}