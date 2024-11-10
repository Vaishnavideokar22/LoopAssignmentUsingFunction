#include<stdio.h>

void count(){

    int num ;
    int count = 0;

    printf("Enter The NUmber:");
    scanf("%d",&num);
    printf("The number is %d \n",num);

    while(num > 0){
     num /= 10;
     count++;

    }
    printf("The Count is %d \n",count);
}

int main(){

count();
    return 0;
}