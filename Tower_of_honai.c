#include <stdio.h>
void toh(int, char, char, char);
int count = 0;
void main()
{
    char source = 'S', temp = 'T', dest = 'D';
    int n;
    printf("Enter the number of disks :");
    scanf("%d", &n);
    printf("\n Sequence in :");
    toh(n, source, temp, dest);
    printf("\n The Number of moves : %d", count);
}
void toh(int n, char source, char temp, char dest)
{
    if (n>0) {
        toh(n-1, source, dest, temp);
        printf("\n Move disk %d %c -> %c \n", n, source, dest);
        count++;
        toh(n-1, temp, source, dest);
    }
}
