#include<stdio.h>
#include<assert.h>

struct point{
	int x;
	int y;
};

struct line{
	struct point a;
	struct point b;
};

struct point makepoint(int x, int y){
	struct point newpoint;
	newpoint.x=x;
	newpoint.y=y;
	return newpoint;
}

float slope(struct line l){
	return (l.a.y-l.b.y)/(l.a.x-l.b.x);
}

int areparallel(struct line l1,struct line l2){
	return slope(l1)==slope(l2);
}

int main(){
	struct line l1;
	l1.a=makepoint(1,1);
	l1.b=makepoint(2,1);
	struct line l2;
	l2.a=makepoint(1,2);
	l2.b=makepoint(2,2);	
	assert(areparallel(l1,l2)==1);
	
	l1.a=makepoint(1,1);
	l1.b=makepoint(2,1);
	l2.a=makepoint(1,2);
	l2.b=makepoint(2,3);	
	assert(areparallel(l1,l2)!=1);
	return 0;
}

