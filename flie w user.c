#include <stdio.h>
#include <stdlib.h>

int main()
{

   FILE *fptr;
   char name[20];
   int length = strlen(name);
   int i;

   fptr = fopen("input.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
   }
   else{

    printf("file is open");
    printf("enter your name: ");
    gets(name);

    fputs(name,fptr);
    fprintf(fptr,"Name = %s\n",name);

    printf("\nfile is written successfully");
    fclose(fptr);
   }



   getch();
}

