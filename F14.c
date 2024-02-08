#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum_between(int from, int to, int size, int a[])
{
    int sum = 0;

    for (int i = from; i <= to; i++)
    {
        if (i >= 0 && i < size)
        {
            sum += a[i];
        }
    }

    return sum;
}

int main()
{
    int from, to, size;
    printf("Enter the two serial numbers of array elements [from to]: ");
    scanf("%d %d", &from, &to);

    printf("enter size: ");
    scanf("%d", &size);

    int a[size];
    srand(time(0));

    printf("generated array: ");
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }
    printf("\n");

    int sum = sum_between(from, to, size, a);
    printf("sum in the segment of element: [%d, %d]: %d\n", from, to, sum);

    return 0;
}
