#include<stdio.h>
#include<string.h>

int main(){
    ///built in function
    //library in c(mengecek library C dari google)

    // printf
    // printf("hello world\n");

    //string.h
    //strlen, untuk menghitung banyaknya karakter

    // char nama [50]= "andi budi setiawan";
    // int panjang;
    // panjang = strlen(nama);
    // printf("panjang : %d", panjang);

    //strcpy, untuk mengcopy kata
    //parameter strcpy(destinasi, soruce)
    // char kata1 [30]= "ASDASDASD";
    // char kata2 [30];
    // strcpy(kata2,kata1);
    // printf("Kata 1 berisi : %s\n", kata1);
    // printf("Kata 2 berisi : %s",kata2);


    //strrev, untuk reverse string
    // char nama[20]= "Dodi Saputra";
    // printf("Nama sebelum di reverse : %s \n", nama);
    // strrev(nama);
    // printf("Nama setelah di reverse : %s", nama);

    //strcmp, untuk membandingkan 2 string strcmp(input, yang dibandingkan)

    char password[50];
    char passwordAsli[50] = "budi";

    printf("Masukan password : ");
    scanf("%s", password);fflush(stdin);

    if(strcmp(password, passwordAsli)==0){
        printf("Berhasil login \n");
    } else {
        printf("Salah password");
    }

   
    return 0;
}