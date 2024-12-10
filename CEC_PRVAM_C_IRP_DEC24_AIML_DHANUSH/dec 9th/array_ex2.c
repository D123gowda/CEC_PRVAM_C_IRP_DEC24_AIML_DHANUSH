#include<stdio.h>
void printArray(int arr[]){
    printf("\n");
    for(int i=0; i<10 ;i++)
        printf("%d ",arr[i]);
}
int main(){
   int arr[10]={1001,1002,1003,1004,1005,1006,1007,1008,1009,1010};
   
   printArray(arr);
   
   arr[0]=10;
   arr[1]=20;
   arr[2]=30;
   arr[3]=40;
   arr[4]=50;
   printArray(arr);


   for(int i=0; i<10;i++){
       arr[i] = i*100;
   }

   printArray(arr);
  
    return 0;
}