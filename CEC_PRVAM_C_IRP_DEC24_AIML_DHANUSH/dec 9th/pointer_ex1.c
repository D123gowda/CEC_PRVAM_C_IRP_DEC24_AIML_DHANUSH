#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=10,y=20;
    printf("Before swaping a=%d, b=%d \n",x,y);
    swap( &x, &y);
     printf("After swaping a=%d, b=%d ",x,y);
    return 0;
}