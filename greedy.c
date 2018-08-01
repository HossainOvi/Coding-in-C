#include <stdio.h>
#include<cs50.h>

int main (void){

    float quarter=0.25;
    float dime= 0.10;
    float nickel= 0.05;
    float penny= 0.01;
    int count= 0;

    do{

        printf("Enter the required change ");mak
        float change= get_change();
        }
    while (change<0.0);

 while(change>=quarter) {
     count=count+1;
     change=change-0.25;


     }
    while(change>=dime){

        count=count+1;
        change=change-0.10;


    }
    while (change>=nickel){
        count=count+1;
        change=change-0.05;


    printf("numer of coins %i for change %f", count, change);
    }
    return 0;

}
