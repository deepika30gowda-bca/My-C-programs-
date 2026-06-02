#include <stdio.h>
#include <conio.h>
void main()
{
    int a[9] = {7, 5, 8, 1, 16, 4, 8, 3, 6, 0};
    int n = 9, temp, pass, i;
    clrscr();
    printf("Array before sorting: \n");
    for(i = 0; i < n; i++)
        printf("%d \n", a[i]);
    for(pan = 1; pass < n; pass++) {
        temp = a[pass];
        for(i = pass - 1; i >= 0 && temp < a[i]; i--) {
            a[i+1] = a[i];
        }
        a[i+1] = temp;
    }
    printf("After sorting: \n");
    for(i = n - 1; i >= 0; i--)
        printf("%d \n", a[i]);
    getch();
}
