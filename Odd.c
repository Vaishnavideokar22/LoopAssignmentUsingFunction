#include<stdio.h>

void odd(){

    for(int i = 1 ; i <= 100 ; i++){
        if(i % 2 != 0){
            printf("%d \n",i);
        }
    }
}

int main(){

    odd();

    return 0;
}