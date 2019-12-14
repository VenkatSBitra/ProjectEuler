#include <stdio.h>

int evenFibonacciSum(){
    int sum = 0;
    int firstNum = 1, secondNum = 1;
    int result;
    while(sum <= 4000000){
        result = firstNum + secondNum;
        if(result % 2 == 0) sum += result;
        firstNum = secondNum;
        secondNum = result;
    }
    return sum;
}

int main(void){
    printf("%d", evenFibonacciSum());
}