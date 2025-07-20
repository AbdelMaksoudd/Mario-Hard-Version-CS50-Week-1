#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int c;
    int numbre = 1;

    do
    {
        c = get_int("heigh?(1:8) ");
    }
    while (c <= 0 || c > 8);

    int j = c;

    while (c > 0)
    {
        int i1 = 0;
        int i2 = 0;
        int final_sum_1 = 0;
        int final_sum_2 = 0;

        int sum = (8 - numbre);

        while (final_sum_1 < sum)
        {
            printf(" ");
            final_sum_1++;
        }

        while (i1 < numbre)
        {
            printf("#");
            i1++;
        }

        printf("  ");
        while (i2 < numbre)
        {
            printf("#");
            i2++;
        }

        while (final_sum_2 < sum)
        {
            printf(" ");
            final_sum_2++;
        }

        printf("\n");
        numbre++;
        c--;
    }
}
