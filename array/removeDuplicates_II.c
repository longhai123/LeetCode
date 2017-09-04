/*
 * Follow up for "Remove Duplicates":
 * What if duplicates are allowed at most twice?
 *
 * For example,
 * Given sorted array nums = [1,1,1,2,2,3],
 *
 * Your function should return length = 5, with the first five elements of nums being 1, 1, 2, 2 and 3. It doesn't matter what you leave beyond the new length.
 */
#include <stdio.h>

int removeDuplicates(int *nums, int numsSize)
{
    int i = 0;
    int j = 0;
    int count = 0;

    if (numsSize == 0) return 0;

    for (i = 1, j = 0; i < numsSize; i++)
    {
        if (nums[j] == nums[i])
        {
            count++;
            if (count < 2)
            {
                nums[++j] = nums[i];
            }
        }
        else
        {
            nums[++j] = nums[i];
            count = 0;
        }
    }
    return j+1;
}

int main(void)
{
    int A[6] = {1, 1, 1, 2, 2, 3};

    printf("%d\n", removeDuplicates(A, 6));

    return 0;
}
