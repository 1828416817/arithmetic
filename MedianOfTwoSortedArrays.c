#include <stdio.h>
#include <stdlib.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size);
int main() {
    int a[2] = { 1,3 };
    int b[1] = { 2 };
    double c;
    c = findMedianSortedArrays(a, 2, b, 1);
    printf("%.1lf", c);
    return 0;
}




double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
   
    int nums3[100];
    int n = nums1Size + nums2Size;
    double result;
    int k = 0;
    int i, j;
    i = j = 0;
    while (i < nums1Size && j < nums2Size)
    {
        if (nums1[i] < nums2[j])
        {
            nums3[k++] = nums1[i++];
        }
        else
        {
            nums3[k++] = nums2[j++];
        }


    }
    if (i == nums1Size)
    {
        while (j < nums2Size)
        {
            nums3[k++] = nums2[j++];
        }
    }
    if (j == nums2Size)
    {
        while (i < nums1Size)
        {
            nums3[k++] = nums1[i++];
        }
    }

    result = (n % 2 == 0) ? ((nums3[n / 2] + nums3[n / 2 - 1]) / 2.0) : (nums3[n / 2]) * 1.0;
    return result;
}



