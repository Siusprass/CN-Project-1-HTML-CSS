#include<stdio.h>

int main(){
    // looping (perulangan repetisi)
    // do while, while, for
    // do while, dipakai ketika pasti mau melakukan statementnya sampai objektif tercapai minimal 1x

    int input;

    do{
        //statement
        printf("1.Menu\n");
        printf("2.Exit\n");
        printf("Pilih menu : ");
        scanf("%d" , &input);fflush(stdin);

        switch (input)
        {
        case 1:
            printf("Anda memasukin menu 1 \n");
            break;
        default:
            printf("input salah, silahkan masukan kembali inputnya\n");
            break;
        }

    } while(input!=2);//condition
    // jika kondisi input benar maka dia akan mengulang
    printf("program selesai");
    return 0;
}