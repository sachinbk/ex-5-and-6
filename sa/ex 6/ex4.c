#include<stdio.h>

int main(){
	FILE *fp;
	char c;
	fp=fopen("output.txt","r");
	c=fgetc(fp);
	int character,space,tabs,lines;
	lines=character=space=tabs=0;
	while (c!=EOF){
		if (c!=' '){
			character++;
		}
		if (c==' '){
			space++;
		}
		if (c=='\t'){
			tabs++;
		}
		if (c=='\n'){
			lines++;
		}
		c=fgetc(fp);
	}
	printf("character:%d\nspace:%d\ntabs:%d\nlines:%d\n",character,space,tabs,lines);
	fclose(fp);
	return 0;
}