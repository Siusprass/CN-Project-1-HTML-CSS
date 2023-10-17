#include<stdio.h>

int main (){
    // selection
    // if else, Switch case
    int umur;
    printf("Masukan umur : ");
    scanf("%d", &umur);fflush(stdin);
    // && dipakai untuk 2 kondisi ( kondisi 1 "dan" kondisi 2 sesuai)
    // || dipakai untuk 2 kendisi ( kondisi 1 "Atau" kondisi 2 sesuai)
    if(umur > 17 || umur < 21){
        printf("Remaja");
    } else {
        printf("Asal");
    }

    // if(umur > 17){
    //     printf("Anda dewasa");
    //     //kondisi 1
    // }else if(umur > 5 ){
    //     printf("Anda belum dewasa");
    //     // kondisi 2
    // } else {
    //     printf("Anda masih kecil");
    //     // selain kondisi 1 dan 2
    // }


    return 0;
}