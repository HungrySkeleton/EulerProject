#include <stdio.h>

int main()
{
    int sum = 0;
    //Find the Sum of the list of integers that are a multiple of 3 or 5 less than 1000
    //Natural Numbers from 1 to 999

    for(int i = 1; i < 1000; i++)
    {
        if(((i % 3) == 0) || (i % 5 == 0))
        {
            sum += i;
        }
    }
    int combinatoricscount = (999/3) + (999/5) - (999/15); // Count Multiples of 3 + Count Multiples of 5 - GCF(3,5) Remove Multiples of 15 (Double Counted by 3 and 5) by set theory

    printf("Count:%i Sum:%i\n",combinatoricscount, sum);
    return 0;
}