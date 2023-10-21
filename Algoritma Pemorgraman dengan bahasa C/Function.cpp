#include<stdio.h>
// void
// adalah function yang tidak memiliki return value dan tipe data

void cetak(){
    printf("Hello\n");
    printf("Hello2\n");
}

// int angka (){
//     return 10;
// }

int kuadrat(int angka){
    return angka * angka;
}


// Passing by Value
// Melempar value dari suatu variable melalui parameter uiintuk di proses
// data yang di ubah di function tidak akan berubah
// karena function memiliki salinan dan bukan data yang asli

void tukarAngka(int angka1, int angka2){
    int temp = angka1;
    angka2 = angka1;
    angka1 = temp;
    
}

// passing by reference
// melempar address dari suatu variable melalui parameter
// data yang diubah/diproses di function akan berubah juga di main function

void tukarAngkaByReference(int &angka1, int &angka2){// dia minta data yang dilempar itu alamat datanya, bukan data yang terisi.
    int temp;
    temp = angka1;
    angka1 = angka2;
    angka2 = temp;

}

// passing by pointer
void tukarAngkaByPointer(int *angka1, int *angka2){
    int temp;
    temp = *angka1;
    *angka1 = *angka2;
    *angka2 = temp;

}





int main(){

    // memanggil fungsi cetak
    // cetak();
    // int angkaDariFunction  = angka();
    // printf("angka adalah : %d", angkaDariFunction);

    // int angkaSaya = 5;
    // int hasilkuadrat = kuadrat(angkaSaya);
    // printf("%d", hasilkuadrat);

    int angka1 = 10;
    int angka2 = 20;
    printf("Sebelum ditukar Angka 1 : %d dan Angka 2 : %d \n",angka1,angka2);
    // tukarAngka(angka1,angka2);
    // tukarAngkaByReference(angka1, angka2);
    tukarAngkaByPointer(&angka1, &angka2);
    printf("Angka 1 : %d dan Angka 2 : %d",angka1 ,angka2);

    return 0;
}