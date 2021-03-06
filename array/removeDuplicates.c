/* Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
 * Do not allocate extra space for another array, you must do this in place with constant memory.
 * For example,
 * Given input array nums = [1,1,2],
 * Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
 * It doesn't matter what you leave beyond the new length.
 */

#include <stdio.h>

int removeDuplicates(int *nums, int numsSize)
{
    int i = 0;
    int j = 0;

    if (numsSize == 0) return 0;

    for (i = 1, j = 0; i < numsSize; i++)
    {
        if (nums[i-1] != nums[i])
        {
            nums[++j] = nums[i];
        }
    }
    return j+1;
}

int main(void)
{
    int A[3] = {1, 1, 2};

    printf("%d\n", removeDuplicates(A, 3));

    return 0;
}
