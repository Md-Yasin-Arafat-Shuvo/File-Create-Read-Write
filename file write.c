#include <stdio.h>
#include <stdlib.h>

int main()
{

   FILE *fptr;
   char name[20] = "yasin";
   int length = strlen(name);
   int i;

   fptr = fopen("input.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
   }
   else{

    printf("file is open");
    for(i=0;i<length; i++)
    {
        fputc(name[i],fptr);
    }
    printf("\nfile is written successfully");
    fclose(fptr);
   }



   getch();
}

