#include<stdio.h>

void reverse(){
    int n;
    printf("Enter The number");
    scanf("%d",&n);
    printf("The number is %d \n",n);

    
    while( n >= 1){
   printf("%d \n",n);
   n--;

    }
}

int main(){

     reverse();
    return 0;
}