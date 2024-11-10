#include<stdio.h>

void sum(){
    
    int n;
    printf("Enter The number");
    scanf("%d",&n);
    printf("%d \n",n);

    int sum = 0;

    for(int i = 1; i <= n; i++){
        if( i % 2 != 0){
            sum = sum + i;
        }
    }
    printf("%d \n",sum);
}

int main(){

    sum();

    return 0;
}