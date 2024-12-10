#include<stdio.h>
int main(){
    int arr [10], a1 , a2 , a3;
    a3=45;
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[8]=40;
    arr[10-1]=50; 
    for (int i=0; i<10;i++){
        arr[i]=i*100;
    }      
    for (int i=0; i<10;i++){
        printf("%d",arr[i]);
    }    
    return 0;
}