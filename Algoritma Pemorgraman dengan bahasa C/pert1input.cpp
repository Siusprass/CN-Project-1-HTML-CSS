#include<stdio.h>

int main (){
    // input -> scanf()
    // angka , string
    // contohnya mau input nama dan umur
    char nama[50];
    int umur;

    printf("masukan nama kamu : ");
    scanf("%[^\n]", nama);fflush(stdin);
    // %[^\n] itu adalah pas input kita meminta yang di input masuk sampai user menekan tombol enter
    printf("masukan umur kamu : ");
    scanf("%d", &umur);fflush(stdin);
    printf("\n\nNama kamu adalah %s\n",nama);
    printf("Umur kamu adalah %d", umur);
    return 0;
}