
#include<stdio.h>
#include<conio.h>

main()
{  int a,b;
   clrscr();
   printf("Enter A Value = ");
   scanf("%d",&a);
   printf("Enter B Value = ");
   scanf("%d",&b);
   if(a>b)
   {
     printf("Value A Is Max.");
   }
   else if(a<b)
   {
     printf("Value B Is Max.");
   }
   else if(a==b)
   {
     printf("Value A And B Is Same.");
   }
   getch();
}