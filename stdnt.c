
// 2021 dhakne balaji All Rights Reserved



#include<stdio.h>
void main()
{
    int hi, math, eng, sci,art,total;
    float percentage;
    printf("Enter the marks of Hi: ");
    scanf("%d", &hi);

    printf("Enter the marks of Math: ");
    scanf("%d", &math);

    printf("Enter the marks of Eng: ");
    scanf("%d", &eng);

    printf("Enter the marks of Sci: ");
    scanf("%d", &sci);

    printf("Enter the marks of art: ");
    scanf("%d", &art);

    total = hi+math+eng+sci+art;

    percentage = total/5;

    printf("\nAggregate marks: %d", total);
    printf("\nPercentage marks: %0.2f %%", percentage);
}
