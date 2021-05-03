#include<stdio.h>

//function declaration

void split_time(long, int*, int*, int*);

int main(){

int n, hr = 0, min = 0, sec = 0;

printf("Enter Seconds : ");

scanf("%d", &n);

//if input seconds is negative, Print negative statement

if(n < 0) {

printf("Seconds can't be negative, Please enter an integer that is not negative");

}

else{

//call for split_time 

split_time(n, &hr, &min, &sec);

printf("Changed format: %d hour %d mins %d secs", hr, min, sec);

}

return 0;

}

//writing code fot split_function 

void split_time(long total_sec, int* hr, int* min, int* sec){

int remaing_sec = 0;

//3600 seconds in 1 hour

*hr = total_sec/3600;

//total_sec mod to give seconds that are left

remaing_sec = total_sec%3600;

//we know there are 60 seconds in one minute

*min = remaing_sec/60;

//the goal is for min to give seconds that are left.

*sec = remaing_sec%60;

}

