#include <stdio.h>

int printTable(int n){
    for(int i=1; i<=10; i++){
        printf("%d \n", i*n);
    }
};

int main(){
    int n;
    printf("enter your number: ");
    scanf("%d", &n);

    printTable(n); //argument

    return 0;
}

//int printTable(int n){ //parameter

//}
