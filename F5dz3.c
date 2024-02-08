#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int find_max_array(int size, int a[])
{
    int max = a[0];

    for (int i = 1; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}

int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int a[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 100;
    }

    printf("entered array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int max = find_max_array(size, a);
    printf("%d\n", max);

    return 0;
}
