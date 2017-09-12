#include<stdio.h>

int main(){
	char name[50]="sois manipal university";
	char *first,*middle,*last,*full;
	
	full=first=name;	
	int i=0;
	while(*full!=' '){
		full++;
		i++;
	}
	*(first+i)='\0';	
	printf("First:%s \n",first);
	
	full++;
	middle=full;
	i=0;
	while(*full!=' '){
		full++;
		i++;
	}
	*(middle+i)='\0';
	printf("Middle:%s \n",middle);
	
	full++;
	last=full;
	printf("Last:%s ",last);
	
	return 0;
}