//printing thr array and its reverse
#include<stdio.h>
void main()
{
    int a[5]={10,20,30,40,50},element,i;
    printf("%ld\n",sizeof(a));
    printf("%ld\n",sizeof(a[0]));
    element=sizeof(a)/sizeof(a[0]);

    for(i=0;i<element;i++)
    {
        //printf("%d\n",a[i]);
        // printf("a[%d]=%d\n",i,a[i]);
    }
    printf("\n");
    for(i=element-1;i>=0;i--)
    {
        //printf("%d\n",a[i]);
         printf("a[%d]=%d\n",i,a[i]);
    }
    
}