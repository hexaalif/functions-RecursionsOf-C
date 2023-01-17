#include <stdio.h>
#include <math.h>

int areaRac(int a);

int main(){
    int a=5;

    printf("result = %d", areaRac(a));
    return 0;
}

int areaRac(int a){
    return a*a;
}
