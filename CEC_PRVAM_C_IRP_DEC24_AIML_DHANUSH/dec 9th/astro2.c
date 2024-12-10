#include<stdio.h>
int main(){
   char alphaUpr[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   char alphaLow[]="abcdefghijklmnopqrstuvwxyz";
   char name[100];
   int sum=0;
   printf("Please Enter your name : \n");
   scanf("%s",&name);
  
    for(int c=0;name[c] != '\0';c++){
           for(int i=0;i<26;i++)
                 if(name[c] == alphaUpr[i] || name[c] == alphaLow[i] ){
                      printf(" %c + ",name[c]);
                    sum += i+1; //sum = sum + i+1

                 }
    }
    printf(" = %d \n",sum);
    return 0;
}
