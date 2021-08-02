
// 2021 dhakne balaji All Rights Reserved



#include<stdio.h>
int main()
{
    float f, c;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f-32)*5/9;

    printf("\nThe Temperature in Centigrade Degree: %.2f", c);
    return (0);
}
