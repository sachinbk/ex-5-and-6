#include<stdio.h>
#include<string.h>

void reverse(char *);

int main(){
	char string[]="hello world";
	reverse(string);
	printf("%s\n",string);
	return 0;
}

void reverse(char *str){
    char *src = str;
	char *end = src + strlen(src) - 1;
	if (*src == '\0')
        return;
    while (end > src)
    {
        char t = *end;
        *end-- = *src;
        *src++ = t;
    }
}