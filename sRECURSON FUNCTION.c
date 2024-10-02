#include<stdio.h>
void printhello(int number);

int main () {
    printhello(7);
    return 0;

}

void printhello(int number){
    if (number==0){
        return;
    }
    printf("hello Dev\n");
    printhello(number-1);
}