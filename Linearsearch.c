#include <stdio.h>
#include <conio.h>
{
    int a[8] = {4, 7, 3, 2, 1, 7, 9, 0}, i, key = 7, 
    n = 8, flag = -1;
    clrscr();
    for(i = 0; i < n; i++)
        if (key == a[i])
            flag = i + 1;
            break;
    if (flag == -1)
        printf(" search in unsuccesful");
    else
        printf(" Element found at position %d", flag);
    getch();
}
