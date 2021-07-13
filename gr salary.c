#include<stdio.h>
int main()
{
    int bs, da, hr, gs;
    printf("Enter Basic Salary: ");
    scanf("%d",&bs);

    da = 0.4 * bs;
   hr = 0.2 * bs;

    gs = bs + da + hr;

    printf("\n bs: % d", bs);
    printf("\n da: %d", da);
    printf("\n hr: %d", hr);
    printf("\n\n gs: %d", gs);

    return (0);
}