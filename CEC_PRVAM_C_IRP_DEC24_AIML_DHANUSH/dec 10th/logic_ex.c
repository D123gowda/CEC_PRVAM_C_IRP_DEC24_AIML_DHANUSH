// get the name from user
// count of name e.g anu print the count = 3
// identify even or odd

#include<stdio.h>
int main(){
    char name[50];
    int count;
    printf("Enter Your name : ");
    scanf("%s", &name);

    for(int i=0; name[i]!='\0';i++);
        count++;
    if (count%2==0)
    printf("Your name has even characters");
    else
    printf("Your name has odd chartacters");
    return 0;
}    