#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
    int reversedNumber = 0, remainder;

while(x!=0){
    remainder= x % 10;
    reversedNumber = reversedNumber * 10 + remainder;
    x /= 10;
}
 
    if(x == reversedNumber){
        printf("true", x);
    }
    else{
        printf("false", x);
    }
    return 0;
}
