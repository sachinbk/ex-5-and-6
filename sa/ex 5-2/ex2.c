#include<stdio.h>
#include<assert.h>

int stringlen(char *s);

int main(){
	char string1[]="this is a string";
	assert(stringlen(string1)==16);
	return 0;
}

int stringlen(char *s){
	char *p=s;
	while(*p!='\0')
		p++;
	return p-s;
}