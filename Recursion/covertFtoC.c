#include<stdio.h>
#include<math.h>

float covertTemp(int T);

int main(){
    float Cel = covertTemp(37);
    printf("temp is : %f", Cel);
    return 0;
}

float covertTemp(int T){
    float Cel = (T * (9.0/5.0))+ 32;
    return Cel;
}
