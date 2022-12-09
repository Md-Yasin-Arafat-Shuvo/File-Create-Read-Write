#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fptr;

   fptr = fopen("input.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
   }
   else{

    printf("file is open");
    fclose(fptr);
   }



   getch();
}
