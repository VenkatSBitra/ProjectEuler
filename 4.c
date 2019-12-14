#include <stdio.h>
#include <string.h>

int checkPalindrome(int n){
    int test = 1;
    char num[6];
    snprintf(num, 7, "%d", n);
    if(strlen(num) == 6){
        for(int i = 0; i < 3; i++){
            if(num[i] != num[5-i]){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}

int greatestPalindrome(){
    int result = 0;
    for(int i = 999; i > 100; i--){
        for(int j = 999; j > 100; j--){
            int num = i * j;
            if(num % 11 == 0){
                if(checkPalindrome(num) && (num > result)) result = num;
            }
        }
    }
    return result;
}

int main(void){
    printf("%d ", greatestPalindrome());
}