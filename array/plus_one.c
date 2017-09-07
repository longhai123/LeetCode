/* Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.
 * You may assume the integer do not contain any leading zero, except the number 0 itself.
 * The digits are stored such that the most significant digit is at the head of the list.
 */

#include <stdio.h>
#include <malloc.h>
#include <string.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = 0;
    int *newDigits = NULL;

    if (!digits || digitsSize < 1)  return NULL;

    for (i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i] += 1;
            break;
        }
    }

    if (digits[0] == 0)
    {
        *returnSize = digitsSize + 1;
        newDigits = (int *)malloc(sizeof(int)*(digitsSize+1));
        memcpy(newDigits+1, digits, sizeof(int)*digitsSize);
        newDigits[0] = 1;
    }
    else
    {
        *returnSize = digitsSize;
        newDigits = (int *)malloc(sizeof(int)*(digitsSize));
        memcpy(newDigits, digits, sizeof(int)*digitsSize);
    }

    return newDigits;
}

int main(void)
{
    int A[5] = {9,9,9,9,9};
    int size;

    int *B = plusOne(A, 5, &size);

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", B[i]);
    }
    printf("\n");
}

