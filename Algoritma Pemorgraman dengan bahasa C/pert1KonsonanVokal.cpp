#include<stdio.h>

int main(){
    char alfabet;
    printf("Masukan Karakter : ");
    scanf("%c", &alfabet);

    if(alfabet >= 'a' && alfabet<= 'z'){// seleksi pertama, memastikan user memasukan input alfabet dari A - Z
        if(alfabet=='a')printf("%c adalah alfabet vokal",alfabet);
        else if(alfabet=='i')printf("%c adalah alfabet vokal",alfabet);
        else if(alfabet=='u')printf("%c adalah alfabet vokal",alfabet);
        else if(alfabet=='e')printf("%c adalah alfabet vokal",alfabet);
        else if(alfabet=='o')printf("%c adalah alfabet vokal",alfabet);
        else{
            printf("%c adalah alfabet konsonan \n", alfabet);
        }
    } else {
        printf("%c Bukan alfabet a-z", alfabet);
    }


    return 0;
}