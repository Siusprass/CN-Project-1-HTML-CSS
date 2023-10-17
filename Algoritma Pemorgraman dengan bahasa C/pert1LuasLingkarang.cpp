#include<stdio.h>

int main (){
    // Phi 3.14
    // const menandakan bahwa tipe data dan berisi datanya tidak bisa diubah lagi
    const float phi = 3.14;
    float jarijari;
    float luas;

    printf("Masukan Jari-jari Lingkaran : ");
    scanf("%f",&jarijari);
    luas = phi*jarijari*jarijari;

    printf("Hasil dari luas lingkaran adalah %.2f",luas);


    return 0;
}