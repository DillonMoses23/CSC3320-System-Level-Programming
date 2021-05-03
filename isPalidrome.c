#include <string.h>
#include <stdio.h>

int isPalindrome(char str[]) {
   int len = strlen(str);
   int left = 0;
   int right = len - 1;
   char ch;
   while(left < right) {
       ch = str[left];
       if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
           left++;
           continue;
       }
       ch = str[right];
       if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
           right--;
           continue;
       }
       if(str[left] != str[right]) {
           return 0;
       }
       left++;
       right--;
   }
   return 1;
}

int main() {
   char str[1000];
   printf("Enter your string: ");
   gets(str);
   if(isPalindrome(str)) {
       printf("%s is a palindrome\n", str);
   } else {
       printf("%s is not a palindrome\n", str);
   }
   return 0;
}
