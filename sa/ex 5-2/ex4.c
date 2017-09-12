#include<stdio.h>
#include<assert.h>

int stringcompare(char*,char*);

int main(){
	char string1[]="this is a string";
	char string2[]="this is a string";
	char string3[]="this is an unequal string";
	assert(stringcompare(string1,string2)==0);
	assert(stringcompare(string1,string3)!=0);
	return 0;
}

int stringcompare(char* s,char* t){
	//return 0 if both strings are equal 
	for(;*s==*t;s++,t++)
		if(*s=='\0')
			return 0;
		return *s-*t;
}
