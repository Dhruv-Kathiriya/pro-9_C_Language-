/*
Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
For example, 
Output:
Even numbers from even_file.txt:
50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70

Odd numbers from odd_file.txt:
51, 53, 55, 57, 59, 61, 63, 65, 67, 69
*/

#include<stdio.h>

void main() {
    
    FILE *even, *odd;
    int i;

    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");

    if(even == NULL || odd == NULL){
        printf("can't open file\n");
    }
    for(i = 50; i <= 70; i++){
        if(i % 2 == 0){
            fprintf(even, "%d\n", i);
        }else{
            fprintf(odd, "%d\n", i);
        }
    }

    printf("Successfully added even and odd numbers to files\n");

}
