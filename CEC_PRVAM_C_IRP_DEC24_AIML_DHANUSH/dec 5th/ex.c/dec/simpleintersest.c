// PTR/100
// p  = 500000
// t  = 5
// r  = 5%

// (500000*5*5)/100

#include<stdio.h>
int main(){
    short int rateofinterest=0;
    float time=0,pA=0;
    printf("Enter the PTR Value with space to calculate  SI:");
    scanf("%f%f%hd",&pA,&time,&roi);
    
    printf("SI = %f",(pA*time*roi)/100);
    return 0;
}