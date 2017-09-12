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

struct point makepoint(int x, int y);
int lineallignment(struct line l);

int main(){
	struct line l;
	l.a=makepoint(2,1);
	l.b=makepoint(5,1);
	assert(lineallignment(l)==1);
	l.a=makepoint(1,2);
	l.b=makepoint(1,5);
	assert(lineallignment(l)==2);	
	l.a=makepoint(2,3);
	l.b=makepoint(7,8);
	assert(lineallignment(l)==3);		
	return 0;
}

struct point makepoint(int x, int y){
	struct point newpoint;
	newpoint.x=x;
	newpoint.y=y;
	return newpoint;
}


int lineallignment(struct line l){
		if(l.a.y==l.b.y)
			return 1; //horizontal (parallel to x axis)
		if(l.a.x==l.b.x)
			return 2;//vertical (parallel to y axis)
		else 
			return 3;//oblique wrt x or y axis
}