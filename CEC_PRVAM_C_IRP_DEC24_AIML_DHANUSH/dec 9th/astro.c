#include<stdio.h>
int main(){
    char alphaUpr[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char alphaLow[]="abcdefghijklmnopqrstuvwxyz";
    for (int i=0;i<26;i++)
        printf("%c=%c=%d\n",alphaUpr[i],alphaLow[i],i+1);
    return 0;
}