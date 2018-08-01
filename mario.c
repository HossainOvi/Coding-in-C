#include <stdio.h>
#include<cs50.h>
int main (void){

    int n;

    do{
        printf("Enter the height of the pyramid");

      n= get_int (); //ask user for the input
    }
    while (n<0 || n>23);

    for (int i=1; i<=n; i++){
        for (int j=n-i; j>0; j--){ // creating spaces
            printf(" ");


        }
        for (int k=1; k<=i+1; k++){ // creating hashes 

             printf("#");

        }


      printf("\n");
    }
return 0;


    }

