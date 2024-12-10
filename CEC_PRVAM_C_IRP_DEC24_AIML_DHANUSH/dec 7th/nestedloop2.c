/*
n=5
*
* *
* * *
* * * *
* * * * * 

    *
   * *
  * * * 
 * * * *
* * * * * 

* * * * *
* * * *
* * *
* *
*

* * *

* * *
*/
#include<stdio.h>
int main(){

for(int j=1;j<=5;j++){
    for ( int i =1; i <= j ; i++){
        printf("* ");
    } 
    printf("\n"); 
}
printf("\n -------------------------- \n\n"); 
for(int j=5;j>=1;j--){
    for ( int i =1; i <= j ; i++){
        printf("* ");
    }
    printf("\n"); 
}
return 0;
}

printf("\n -------------------------- \n\n"); 
int n=5;
for(int j=1;j>=n;j++){}
    for (int k=1; k<=n-j ; k++){
        printf(" ");
    }
    for ( int i =1; k <= j ; i++){
        printf("* ");
    }
    printf("\n"); 
}
return 0;
}