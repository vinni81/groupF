#include <stdio.h>

int is_two_same(int size, int a[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    int size;
    printf("enter size of the array: ");
    scanf("%d", &size);

    int a[size];
    printf("enter integers of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    int result = is_two_same(size, a);
    if (result)
    {
        printf("Yes.\n");
    }
    else
    {
        printf("No.\n");
    }

    return 0;
}

