#include <stdio.h>

int main(){
	FILE *fp,*fp1;
	int cnt;
	fp= fopen("sample.txt","r");
	fp1=fopen("output.txt","w");
	fseek(fp,-1,SEEK_END);
	cnt=ftell(fp);
	while(cnt--){
		fputc(fgetc(fp),fp1);
		fseek(fp,-2L,1);
	}	
	return 0;
}
