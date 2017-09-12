#include<stdio.h>

void copystring(char*,char*);
void getline1(char s[],int lim);

int main(){
	char string1[100];
	char string2[100];
	fgets(string1,20,stdin);
	copystring(string1,string2);
	printf("copied string:%s",string2);
	return 0;
}

void copystring(char* s,char* t){
	while(*s!='\0'){	
		*t=*s;
		s++;
		t++;
	}
	*t='\0';
}
