#include <stdio.h>

int sumOfMultiples(int num){
    int sum = 0;
    for(int i = 0; i < num; i++){
        if(i % 3 == 0 || i % 5 == 0) sum += i;
    }
    return sum;
}

int main(void){
    int num;
    scanf("%d", &num);
    int res = sumOfMultiples(num);
    printf("%d", res);
}