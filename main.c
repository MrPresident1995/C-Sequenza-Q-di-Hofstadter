#include <stdio.h>
#include <stdlib.h>

int Q(int n);

int main()
{
    int i, N, res;

    printf("Inserire N: ");
    scanf("%d", &N);

    printf("Q(%d)= ", N);
    for(i=1; i<=N; i++)
    {
        res= Q(i);
        printf("%d  ", res);
    }

    return 0;
}

int Q(int n)
{
    if(n>2)
        return Q(n-Q(n-1)) + Q(n-Q(n-2));
    else
        return 1;
}
