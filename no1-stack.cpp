//program no 1 : stack

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define max 5
using namespace std; 

int top=-1, Stack[max];

void push(){
    if(top==max-1){
        cout<<">> Stack sudah Penuh!\n";
    }else{
        top++;
        cout<<">> Masukan Data : ";
        cin>>Stack[top];
        cout<<"\nPada Tumpukkan ke '"<<top+1<<"'\n";
        cout<<"Data ["<<Stack[top]<<"] Telah Ditambah!\n";
    }
}

void pop(){
    if(top==-1){
        cout<<">> Stack Kosong!\n";
    }else{
        cout<<"\nData ["<<Stack[top]<<"] pada tumpukkan ke '"<<top+1<<"' dalam Stack Diambil!\n";
        Stack[top--];
    }
}

int clear(){
    return top=-1;
}

void Print(){
    if (top==-1) {
        cout<<"          Stack : ";
        cout<<"\n===========================\n";
        cout<<"       Data Kosong!\n";
        cout<<"===========================\n";
    }
    else {
        cout<<"          Stack : ";
        cout<<"\n===========================\n";
        for (int i=top; i>=0; i--){
            cout<<"     XXXXX[ "<<Stack[i]<<" ]XXXXX\n";
        }
        cout<<"===========================\n";
    }
}

int main()
{
    int Pilih;
    do {
        Print();
        cout<<"\n1.Tambah Data (Push)";
        cout<<"\n2.Kurangi Data (Pop)";
        cout<<"\n3.Bersihkan Data";
        cout<<"\n4.Exit";
        cout<<"\nPergerakan ( TOP ) : "<<top+1;
        cout<<"\n\n>> Pilih : "; 
        cin>>Pilih;
        switch (Pilih){
            case 1:
                push();
                getch();
                break;
            case 2:
                pop();
                getch();
                break;
            case 3:
                clear();
                cout<<"\nBerhasil membersihkan data\n";
                getch();
                break;
            case 4:
                cout<<"Terimakasih sudah menggunakan program ini^^\n";
                getch();
                break;
            default:
                cout<<"Pilihan tidak ada\n";
                cout<<"Masukan pilihan sesuai dengan daftar\n";
                getch();
                break;
        }
        system("cls");
    }while(Pilih !=4);
}
