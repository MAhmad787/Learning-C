#include<stdio.h>
#include<cs50.h>


int main(void)
{
    // This Program will print the table of any number which the user enter

    // Get the number
    int num = get_int("Enter the number: ");
    // Loop
    for(int i = 1; i<=10;  i++) {
        printf("%i * %i = %i\n", num, i, num*i);
    }

}