#include<stdio.h>

int main(){
    // simple segitiga
    // for (int tinggi = 0; tinggi <= 5; tinggi++)
    // {
        
    //     for (int alas = 0; alas < tinggi; alas++)
    //     {
    //         printf(" * ");
    //     }
    //     printf("\n");
        
    // }



    for (int baris = 1; baris <= 5; baris++)
    {
        
        for (int kolom = 1; kolom <= 5; kolom++)
        {
            if(baris<=kolom){ // code a
                printf("O"); // code c
            }
        }

        for (int kolom = 1; kolom <= 5; kolom++)
        {
            if (baris>=kolom) // code b
            {
                printf("*"); // code d
            }
            
        }
        
        printf("\n");

        /*
        trick (A, B, C, D Is code # above) :
        1. A>=, B<=, C "*", D " "
        *
        **
        ***

        2. A<=, B>=, C "*", D " "
        ***
        **
        *
        
        3. A>=, B<=, C " ", D "*"
        ***
         **
          *
        
        4. A<=, B>=, C " ",D "*"
          *
         **
        ***
        
        */
        
    }
    

    return 0;
}