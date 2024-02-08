#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort_even_odd(int n, int a[])
{
    int even[n];
    int odd[n];
    int even_count = 0;
    int odd_count = 0;


    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[even_count] = a[i];
            even_count++;
        }
        else
        {
            odd[odd_count] = a[i];
            odd_count++;
        }
    }

    int index = 0;

    for (int i = 0; i < even_count; i++)
    {
        a[index] = even[i];
        index++;
    }

    for (int i = 0; i < odd_count; i++)
    {
        a[index] = odd[i];
        index++;
    }
}

int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int a[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }

    printf("entered array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    sort_even_odd(n, a);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}


