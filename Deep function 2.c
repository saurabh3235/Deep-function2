//program for finding perfect numbers
#include<stdio.h>
#include<conio.h>
  int perfect(int);
  int main(){
          int num,s;
          clrscr();
          printf("Give an integer number: ");
          scanf("%d",&num);
          s = perfect(num);
          if(s == num)
          printf("\nThe given number %d is a perfect number",num);
          else
          printf("\nThe given number %d is not a perfect number",num);
          getch();
          return 0;
          }

  int perfect(int numbr){
          int a=1, sum=0;
          while(a< numbr){
          if(numbr % a == 0)
          sum=sum+a;
          a++;
          }
          return(sum);
          }
