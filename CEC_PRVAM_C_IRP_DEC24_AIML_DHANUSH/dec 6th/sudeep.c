// 1+2+3+4+5
//  x  = a+b
// res1=1+2
// res2 = res1 + 4 
// res3 = res2 + 5
// i = i+ 1; i+=2; i+=1 = i++
// for ( int i=0;i>5;i++){

//     i = 1
// }


// int c=2;
// while(c>5){
//     logic before 2
//     c++
//     logic after 3
// }

// do{

// }while();
#include <stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the number to total SUM:");
    scanf("%d",&num);

    //without using loop
    //sum = (num*(num+1))/2;
    
    //using loop
    for(int c=1;c<=num;c++){
        sum =sum + c;
    }
    printf("SUM:=%d",sum);
    return 0;
}
