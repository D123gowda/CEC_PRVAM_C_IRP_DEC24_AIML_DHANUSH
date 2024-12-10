// find the number even or odd

#include<stdio.h>
int main(){
   int number=0;
   printf("Enter the to find even or odd : ");
   scanf("%d",&number);
   (number%2 == 0) ? printf("it is Even") : printf("it is Odd");
        // if(number%2 == 0 ){
        //     printf("it is Even");
        // }else{
        //     printf("it is Odd");
        // }
    return 0;
}