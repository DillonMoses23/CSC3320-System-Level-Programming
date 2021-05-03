#include<stdio.h>

#include <string.h>

// main

 int main()

{

// declare variables.

 char ch[10];

 int len,pnt,new_len;

// input password

printf("Enter a password : ");

scanf("%s", ch);

len=strlen(ch);

// check conditions

if(len!=10)


{

new_len=10-len;

pnt=5*new_len;

// check conditions

if(pnt>30)


 {


// display values


printf("Deductions: %d \nThe password is unsafe! Please reset.", pnt);

          }


else {

// display values

printf("The password is safe.");

    }

}

else {

// display values

printf("The password is safe.");

      }

return 0;

 }
