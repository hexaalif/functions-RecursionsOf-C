#include<stdio.h>
#include<math.h>

int percent(int science,  int math, int quran);

int main(){
    float sciV = percent(80, 79, 91);
    printf("percentage is %f ", sciV);
    return 0;
}

int percent(int science, int math, int quran){
    float sciV = ((science + math + quran) /3);
    return sciV;
}
