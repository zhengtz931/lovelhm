#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>

int main()
{

   int i,j;
   int x = 0;
   int y = 2;
   int ny = 2;
   char input;
   int isFire = 0;
   int isKilled=0;
   while(1)
   {
    system("cls");
    if(isKilled ==0)
    {
        for(i = 0; i <ny; i++)
      printf("  \n");
      printf("  +\n");
    }


   /*for(i = 0; i < x; i++)
      printf("\n");*/
      if(isFire == 0)
      {
         for(i = 0; i < x; i++)
      printf("\n");
      }
      else
      {
           for(i = 0; i < x; i++)
   {
         for(j = 0; j < y; j++)
      printf(" ");
       printf("  |\n");

   }   isFire=0;
   if(y + 2 == ny )
    isKilled=1;


      }

    for(j = 0; j < y; j++)
      printf(" ");

    printf("  *\n");

     for(j = 0; j < y; j++)
      printf(" ");
    printf("*****\n");
     for(j = 0; j < y; j++)
      printf(" ");
    printf("*   *");
   // scanf("%c",&input);
   input = getch();
    if(input=='s')
     x++;
    if(input=='w')
     x--;
    if(input=='a')
     y--;
    if(input=='d')
     y++;
    if(input==' ')
        isFire=1;

   }
     getch();
    return 0;
   }
