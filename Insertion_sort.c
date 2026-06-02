#include <stdio.h>
int main()
{
    int a[] = {75, 8, 1, 16, 48, 3, 7, 0}, n = 8, i, j, key;
    for (i = 0; i < n; i++)
        printf("Array elements before sorting \n");
        printf("%d", a[i]);
    for (i = 1; i < n; i++)
        key = a[i];
        for (j = i - 1; j >= 0 && a[j] < key; j--)
            a[j+1] = a[j];
        a[j+1] = key;
    for (i = 0; i < n; i++)
        printf("Array elements after sorting \n");
        printf("%d", a[i]);
    return 0;
}
