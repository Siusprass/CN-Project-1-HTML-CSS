#include<stdio.h>

int main (){
    // Operasi Aritmatika
    // Sequential, line berjalan dari atas ke bawah;
    // int angka1 = 10;
    // int angka2 = 20;
    // int hasil = angka1+angka2;
    // printf("angka1+angka2 = %d \n", hasil);

    // hasil = angka2-angka1;
    // printf("hasil sekarang adalah = %d \n\n",hasil);

    float Alas;
    float Tinggi;
    float hasil;

    printf("Masukan alas : ");
    scanf("%f", &Alas);
    printf("Masukan tinggi : ");
    scanf("%f", &Tinggi);

    hasil = (Alas*Tinggi) / 2;
    printf("Luas Segitiga adalah %.2f", hasil);


    return 0;
}