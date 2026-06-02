#include <stdio.h>
#include <conio.h>
void main()
{
    int a[8] = {0, 1, 2, 3, 4, 7, 7, 9}, i, key = 7,
    n = 8, first = 0, last = n - 1, mid;
    clrscr();
    mid = (first + last) / 2;
    while (first <= last && key!= a[mid])
        if (key > a[mid])
            first = mid + 1;
        else
            last = mid - 1;
        mid = (first + last) / 2
    if (key == a[mid])
        printf(" successfully found at position %d \n", mid + 1);
    if (first > last)
        printf(" search is Unsuccesful");
    getch()
}
