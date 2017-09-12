#include <stdio.h>

int main(){
 	FILE *fp1,*fp2;
	fp1= fopen("ex1.c","r");
	fp2= fopen("output.txt","w");
	char c;
    c = fgetc(fp1);
    while (c != EOF){
        fputc(c, fp2);
        c = fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    
	return 0;
}