#include<Stdio.h>

void sum(){

    int n;
    printf("Enter The Number");
    scanf("%d",&n);
    printf("The Number is %d \n",n);

    int sum = 0;

    for(int i = 1; i <= n; i++){
        printf("%d \n",i);
        sum = sum + i;
    }

    printf(" The Sum is: %d \n",sum);
}

int main(){

    sum();
    return 0;
}