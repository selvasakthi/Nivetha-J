#include<stdio.h>
void main()
{
int x, y, temp; 
printf("Enter the value of x and y: \n");
scanf("%d%d",&x,&y);
printf("Before Swapping : ",x,y);
{ 
   temp=x;
   x=y;
   y=temp;
}
printf("After Swapping :",x,y);
return 0;
}
