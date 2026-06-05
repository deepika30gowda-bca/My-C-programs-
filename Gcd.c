#include <stdio.h>
int GCD(int m, int n)
{
    if (n == 0)
        return (m);
    else if (n > m)
        return (GCD(n, m));
    else
        return (GCD(n, m % n));
}
void main()
{
    int k, m, n;
    printf("Enter three numbers");
    scanf("%d %d %d", &k, &m, &n);
    printf("\n GCD (%d, %d, %d) = %d \n", k, 
           m, n, GCD(k, GCD(m, n)));
}
