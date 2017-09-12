#include <stdio.h>

int main(){
	char i;
	FILE *fp;
	fp= fopen("sample.txt","r");
	i=fgetc(fp);
	while(i!=EOF){
		printf("%c",i);
		i=fgetc(fp);
	}
	fclose(fp);	
    return 0;
}