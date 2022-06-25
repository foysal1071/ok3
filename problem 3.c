//Write a program to print all prime numbers from 1 to 300. (Hint: Use nested loops, break and continue)

#include <stdio.h>
int main ()
{
    int i = 1, a = 2;
    while (i <= 300)
    {
        a = 2; 
        while (a < i)
        {
                if (i % a == 0)
                break;
                else
                printf ("%d\n", i);
                a++;
        }
        i++;
    }
    return 0;
}
