#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5] = {5, 3, 1, 6, 0}, n = 5, i, pan, temp;
    clrscr();
    printf("Array Before sorting\n");
    for(i = 0; i < n; i++)
        printf("%d \n", a[i]);
    for(pan = 1; pan < n; pan++)
        for(i = 0; i < n - pan; i++)
            if(a[i] > a[i+1])
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
    printf("Array after sorting \n");
    for(i = 0; i < n; i++)
        printf("%d \n", a[i]);
}
