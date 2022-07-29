#include <stdio.h>
#include <conio.h>


void sum_void(int a, int b){
    printf("SUM is(void): %d\n", (a+b));
}

int sum_int(int a, int b){
    return (a+b);
}

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    sum_void(a,b);
    int ans = sum_int(a,b);
    printf("SUM is(int): %d", (ans));
    return 0;   
}