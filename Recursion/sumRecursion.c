#include<stdio.h>
#include<math.h>

int sum(int n);

int main(){
    printf("sum is %d", sum(5));
    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
    int takeNum = sum(n-1);
    int sumRes = takeNum + n;
    return sumRes;
}
