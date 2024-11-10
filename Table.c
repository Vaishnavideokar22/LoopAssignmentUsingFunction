#include<stdio.h>

 void table(){
        int num = 1;
        printf("enter the number");
        scanf("%d",&num);
        printf("%d \n",num);
        
        for(int i = 1; i <= 10; i++){
            printf("%d \n",num * i);
        }

        
    }

int main(){

    table();
    return 0;
}