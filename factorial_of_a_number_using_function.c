#include<stdio.h>
int factorial(int a)
{   int i,product=1;
    if(a==0||a==1)
    {
        return 1;
    }
    for(i=1;i<=a;i++)
    {
       product *=i;
    }
    return product;
}
int main()
{ int n;
printf("Enter n= ");
scanf("%d",&n);
printf("%d",factorial(n));
printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
return 0;
}
