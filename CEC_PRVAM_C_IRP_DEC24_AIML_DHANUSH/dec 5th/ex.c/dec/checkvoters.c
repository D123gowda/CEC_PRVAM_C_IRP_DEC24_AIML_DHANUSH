// check voters
// greater than 18 

#include<stdio.h>
int main(){
   int Age=0;
   printf("Enter the Age : ");
   scanf("%d",&Age);
   if(Age >= 18){
        if(Age >= 200){
            printf("Your Enter wrong Age 1");
        }else{
            printf("your eligible to vote");
        }
    
   }
   else if(Age < 0){ 

    printf("Your Enter wrong Age 2");
   }
    return 0;
}