#include <stdio.h>


void bubble_sort(int a[], int n)
{
    int i, j;
    int tmp;
    int swapped;

    for (i = 0; i < n-1; i++)
    {
        swapped = 0;
        for (j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                swapped = 1;
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
        if (!swapped) break;
    }
}

void selection_sort(int a[], int n)
{
    int i, j, index;
    int tmp;

    for (i = 0; i < n - 1; i++)
    {
        int index = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[index])
            {
                index = j;
            }
        }

        if (i != index)
        {
            tmp = a[i];
            a[i] = a[index];
            a[index] = tmp;
        }
    }
}


int  main()
{
    int num[8] = {89, 38, 11, 78, 96, 44, 19, 25};
    /* bubble_sort(num, 8); */
    selection_sort(num, 8);
    for(int i=0; i<8; i++)
        printf("%d  ", num[i]);
    printf("\n");
    return 0;
}
