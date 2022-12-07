#include <stdio.h>

int main()
{
    int a[100],b,c,d,f;
    printf("enter the amount of number > ");
    scanf("%d" ,&b);
    for(c=0;c<b;c++)
    {    printf("enter number %d > " ,(c+1));
         scanf("%d" ,&a[c]);
    }
   
    for(c=0;c<b-1;c++){
        for(f=c+1;f<b;f++){
        if(a[c+1]<a[c])
        {d=a[c];
         a[c]=a[c+1];
         a[c+1]=d;}}
    }
   
    
     printf("printing entered numbers in ascending order\n");
        for(c=0;c<b;c++)
    {    printf("%d\n" ,a[c]);}
}