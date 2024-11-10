#include<stdio.h>

void even(){
    
    for(int i = 1; i <= 100 ; i++){
        if(i % 2 == 0){
            printf("%d \n",i);
        }
    }

}

int main(){

     even();
    return 0;
}