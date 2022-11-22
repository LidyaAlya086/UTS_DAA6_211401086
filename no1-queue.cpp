//program no 1 : queue

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define max 5

using namespace std;

int nomor[max];
int head=-1;
int tail=-1;

bool IsEmpty(){
    if(tail==-1){
        return true;
    }else{
        return false;
    }
}
bool IsFull(){ //
    if(tail==max-1){
        return true;
    }else{
        return false;
    }
}

void AntrianMasuk(int no){
    if (IsEmpty()){
        head=tail=0;
    }else {
        tail++;
    }
    nomor[tail]=no;
}

void AntrianKeluar(){
    if(IsEmpty()){
        cout<<"Antrian sudah kosong!";
        getch();
    }else {
        for(int a=head;a<tail;a++){
            nomor[a]=nomor[a+1];
        }
        tail--;
        if(tail==-1){
            head=-1;
        }
    }
}

void Clear(){
    head=tail=-1;
}

void View(){
    if(IsEmpty()){
        cout<<"Antrian kosong!";

    }else {
        system("cls");
        cout<<"===============================";
        cout<<"\n======= DAFTAR ANTRIAN ========";
        cout<<"\n===============================\n\n";
        for(int a=head;a<=tail;a++){
            cout<<"\n >> No. Antri : ["<<nomor[a]<<"]\n";
        }
    }
}

int main(){
    int pilih, p=1, urut;
    do{
        system("cls");
        cout<<"===============================";
        cout<<"\n======= PROGRAM ANTRIAN =======";
        cout<<"\n===============================";
        cout<<"\n1.Tambah Antrian";
        cout<<"\n2.Panggil Antrian";
        cout<<"\n3.Lihat daftar antrian";
        cout<<"\n4.Format";
        cout<<"\n5.Exit";
        cout<<"\n===============================";
        cout<<"\nPilih : "; 
        cin>>pilih;
        cout<<"\n";
        if(pilih==1){
            if(IsFull()) {
                cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi.";
            }
            else{
                urut=p;
                AntrianMasuk(urut);
                cout<<"Nomor Antrian Anda : "<<p<<endl;
                cout<<"Silahkan Mengantri\n";
                cout<<"Menunggu "<<tail<<" Antrian\n";
                p++;
            }
        }
        else if(pilih==2){
            cout<<"No. Antri : ["<<nomor[head]<<"]\n";
            AntrianKeluar();
            cout<<"Antrian dibelakangnya silahkan menunggu!\n";
        }
        else if(pilih==3){
            View();
        }
        else if(pilih==4){
            Clear();
            cout<<"Antrian dikosongkan!";
        }
        else if(pilih==5){
        }
        else{
            cout<<"Input yang anda masukkan salah! Silahkan coba lagi.\n\n";
        }
        getch();
    }while(pilih!=5);
    cout<<"Terimakasih sudah menggunakan program ini^^\n\n";
}