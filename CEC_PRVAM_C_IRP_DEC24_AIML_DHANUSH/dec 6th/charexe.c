
// to find the vowel characters : a,e,i,o,u A,E,I,O,U


#include<stdio.h>
int main(){
   char character;
   printf("Enter the character to find vowel:");
   scanf("%c",&character);
//    if(character == 'a' || character == 'A' || character == 'e' ||  character == 'E' ||  character == 'i' ||  character == 'I' || character == 'o' || character == 'O' ||  character == 'u' || character == 'U'){
//     printf("It is a Vowel");
//    }else{
//      printf("It is not a Vowel");
//    }

   switch(character){
    case 'a':
    case 'A':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'o':
    case 'O':
    case 'u':
    case 'U':printf("It is a Vowel");break;
    default:printf("It is not a Vowel");
   }


//    switch(character){
//     case 'a':printf("It is a Vowel a");break;
//     case 'A':printf("It is a Vowel A");break;
//     case 'E':printf("It is a Vowel E");break;
//     case 'e':printf("It is a Vowel e");break;
//     case 'I':printf("It is a Vowel I");break;
//     case 'i':printf("It is a Vowel i");break;
//     case 'o':printf("It is a Vowel o");break;
//     case 'O':printf("It is a Vowel O");break;
//     case 'u':printf("It is a Vowel u");break;
//     case 'U':printf("It is a Vowel U");break;
//     default:printf("It is not a Vowel");
//    }
   return 0;
}