#include <stdio.h>

void salam();
void hello();

int main(){
    printf("Enter s or h : ");
    int ch;
    scanf("%c", &ch);
    if(ch == 's'){
        salam();
    }
    else{
        hello();
    }
    return 0;
}

void salam(){
    printf("Assalamu Alaikum");
}

void hello(){
    printf("hello!");
}

