
// Created by akhil on 22/7/19.

#include<stdio.h>
int main(void){
    int i = 0, sum = 0, num;
    printf("enter the number of integer = \n");
    scanf("%d", &num);
    for(i = 0; i<=num; i++){
        sum = sum + i;
        if(i == num)
            printf("%d ", i);
        else
            printf("%d, ", i);
    }
    printf("\nSum of first %d natural number = %d \n", num, sum);
    return 0;

}
