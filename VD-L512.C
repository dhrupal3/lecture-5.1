#include<stdio.h>
#include<conio.h>

main()
{  clrscr();
   int a;
   printf("Enter Your Value = ");
   scanf("%d",&a);
   if(a<0)
   {
       printf("Your Value Is Negative.");
   }
   if(a>0)
   {
       printf("Your Value Is Postive.");
   }
   if(a=0)
   {
       printf("Your Value is Same.");
   }
   getch();
}