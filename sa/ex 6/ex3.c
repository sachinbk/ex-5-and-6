#include <stdio.h>

int main(int argc, char *argv[]){
 	FILE *fp1,*fp2;
	fp1= fopen(argv[1],"r");
	fp2= fopen(argv[2],"w");
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