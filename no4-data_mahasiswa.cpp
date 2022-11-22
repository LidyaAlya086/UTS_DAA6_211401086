#include <stdio.h>
#include <string.h>

typedef struct _mahasiswa
{
    char nama[50];
    int nim;
}mahasiswa;

mahasiswa mhs[100001];

void fill_data(mahasiswa *mhs, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("Data Mahasiswa ke-%d\n", i+1);
        printf("Nama    : ");
        fgets(mhs[i].nama,50,stdin);
        fgets(mhs[i].nama,50,stdin);

        printf("NIM     : ");
        scanf("%d", &mhs[i].nim);

        printf("\n");
    }
    printf("Input berhasil!\n\n");
}

void swap(mahasiswa *a, mahasiswa *b)
{
    mahasiswa temp=*a;
    *a=*b;
    *b=temp;
}

void sort_nim(mahasiswa *mhs, int n)
{
    int i, j;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-i-1; j++)
            if(mhs[j].nim>mhs[j+1].nim)
                swap(&mhs[j],&mhs[j+1]);
}

void tampil_data(mahasiswa *data, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("Data Mahasiswa ke-%d\n", i+1);
        printf("Nama    : %s", data[i].nama);
        printf("NIM     : %d\n", data[i].nim);
        printf("\n");
    }
    printf("\n");
}

int main(){
    int size, c, choice;
    do
    {
        printf("=================================================\n");
        printf("PROGRAM PENGURUTAN DATA MAHASISWA BERDASARKAN NIM\n");
        printf("=================================================\n\n");

        printf("Masukkan jumlah mahasiswa : ");
        scanf("%d", &size);
        printf("\n\n");

        fill_data(mhs,size);
        printf("=================================================\n");
        printf("  Mengurutkan data berdasarkan NIM (Ascending)   \n");
        printf("=================================================\n\n");
        sort_nim(mhs,size);
        tampil_data(mhs,size);

        printf("Apakah anda ingin mengulang program? (Tekan 1 untuk 'Ya' atau 2 untuk 'Tidak') = ");
        scanf("%d", &c);
        printf("\n");
    } while(c==1);
    printf("\nTerimakasih sudah menggunakan program ini^^\n\n");
    getchar();
    return 0;
}