#include <stdio.h>

int main()
{
    int n, num,i,typ,sum=0;
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&num);
        sum += num;
        if (i == 0)
            typ = num;
        if (typ > num)
            typ=num;
    }

    sum = sum - typ;
    printf("%d",sum);


}