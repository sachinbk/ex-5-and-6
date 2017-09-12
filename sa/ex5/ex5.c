#include<stdio.h>
#include<assert.h>

struct point{
	int x;
	int y;
};

struct rectangle{
	struct point lowerleft;
	struct point upperright;
};

struct point makepoint(int x, int y){
	struct point newpoint;
	newpoint.x=x;
	newpoint.y=y;
	return newpoint;
}

struct rectangle makerectangle(struct point lowerleft, struct point upperright){
	struct rectangle newrectangle;
	newrectangle.lowerleft=lowerleft;
	newrectangle.upperright=upperright;
	return newrectangle;
}

int area(struct rectangle arectangle){
	int length,breadth;
	length=arectangle.upperright.x-arectangle.lowerleft.x;
	breadth=arectangle.upperright.y-arectangle.lowerleft.y;
	return length*breadth;
}

int perimeter(struct rectangle arectangle){
	int length,breadth;
	length=arectangle.upperright.x-arectangle.lowerleft.x;
	breadth=arectangle.upperright.y-arectangle.lowerleft.y;
	return 2*length+2*breadth;
}


int main(){
	struct rectangle a,b;
	a=makerectangle(makepoint(0,0),makepoint(2,2));
	assert(area(a)==4);
	assert(perimeter(a)==8);
	b=makerectangle(makepoint(1,1),makepoint(2,5));
	assert(area(a)==area(b));
	b=makerectangle(makepoint(1,1),makepoint(2,6));
	assert(area(a)!=area(b));
	return 0;
}

