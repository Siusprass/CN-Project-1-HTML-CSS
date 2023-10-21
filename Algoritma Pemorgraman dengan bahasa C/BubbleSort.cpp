#include<stdio.h>

void showSortedData(int data[], int n){
    for(int i = 0;i<n;i++){
        printf("%d ", data[i]);
    }
    printf("\n");
    
}

void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int data[], int n){
    // siklus paling luar
    for (int i = 0; i < n-1; i++)
    {
        // elemen i terakhir yang sudah ada
        for (int j = 0; j < n-i-1; j++)
        {
            // swaping
            if(data[j]> data[j+1]){
                swap(data[j], data[j+1]);
            }

        }
        
    }
    
}

int main (){

    // Sorting - Bubble Sort
    // adalah algoritma sorting paling simple dimana sorting ini bekerja dengan cara
    // men-swap element yang bersebelahan
    // jika pada urutan yang salah

    int data[] = {5, 1, 4, 3, 2};
    int n = 5;

    bubbleSort(data, n);

    showSortedData(data,n);

    return 0;
}

int data[6] = {6, 7, 2, 15, 17, 1};

int n = 6;

 

int a(int input){

     for(int i=0; i<n; i++){

          if(input == data[i]){

               return i;

          }

     }

     return -1;

}