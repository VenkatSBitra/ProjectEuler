#include <stdio.h>
#include <math.h>

void returnPrimeArray(long long int numArr[], long long int testNum){
    for(long long int i = 0; i < (long long int)testNum; i++){
        numArr[i] = 1;
    }
    numArr[0] = 0;
    numArr[1] = 0;
    for(long long int i = 0; i < (long long int)testNum; i++){
        if(numArr[i] == 1){
            for(long long int j = i + 1; j < (long long int)testNum; j++){
                if(j % i == 0){
                    numArr[j] = 0;
                }
            }
        }
    }
}

long long int largestPrimeFactor(long long int num){
    long long int result = 0;
    double testNum = sqrt((double)num);
    long long int numArr[(long long int)testNum];
    returnPrimeArray(numArr, (long long int)testNum);
    if(num % 2 == 0){
        result = 2;
    }
    for(long long int i = 3; i < (long long int)testNum; i += 2){
        if(numArr[i] == 1 && num % i == 0){
            result = i;
        }
    }
    return result;
}

int main(void){
    printf("%lld", largestPrimeFactor(600851475143));
}