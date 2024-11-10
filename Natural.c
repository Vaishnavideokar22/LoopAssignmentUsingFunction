#include<stdio.h>

void natural(){

    int n;
    printf("Enter The number");
    scanf("%d",&n);
    printf(" The Number is:%d\n",n);

    for(int i = 1 ; i <= n; i++){
        printf("%d \n",i);
    }
}

int main(){

    natural();


    return 0;
}