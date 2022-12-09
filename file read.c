#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fptr;
   char ch;
   //char ch[40];

   fptr = fopen("input.txt","r");

   if(fptr == NULL)
   {
      printf("Error!");
   }
   else{

    printf("file is open\n");
    while(!feof(fptr))
    {
        ch = fgetc(fptr);
        printf("%c",ch);
    }

    /* while(!feof(fptr))
    {
        fgets(ch,39,fptr);
        printf("%s\n",ch);
    }
    */

    /*
    fsacnf(fptr,"%s",&ch);
    printf("%s\n",ch);
    */
    fclose(fptr);
   }



   getch();
}
