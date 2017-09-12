#include<stdio.h>
 
int main(int argc, char *argv[]) {
     FILE *fp1, *fp2;
     int ch1, ch2;

     fp1 = fopen(argv[1], "r");
     fp2 = fopen(argv[2], "r");
 
	 ch1 = getc(fp1);
     ch2 = getc(fp2);
 
     while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2)) {
         ch1 = getc(fp1);
         ch2 = getc(fp2);
      }
 
     if (ch1 == ch2)
         printf("Files are identical \n");
     else if (ch1 != ch2)
         printf("Files are Not identical \n");
 
     fclose(fp1);
     fclose(fp2);
   return (0);
}