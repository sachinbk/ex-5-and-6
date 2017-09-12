#include<stdio.h>
#include<assert.h>

struct point makepoint(int x, int y);
int whichquadrant(struct point);
int arepointssame(struct point,struct point);

struct point{
	int x;
	int y;
};

int main(){
	assert(whichquadrant(makepoint(1, 1))==2);
	assert(whichquadrant(makepoint(-1, 1))==1);
	assert(whichquadrant(makepoint(-1, -1))==3);
	assert(whichquadrant(makepoint(1, -1))==4);
	assert(whichquadrant(makepoint(0, 0))==0);
	assert(arepointssame(makepoint(3, 5),makepoint(3, 5)));
	return 0;
}

struct point makepoint(int x, int y){
	struct point newpoint;
	newpoint.x=x;
	newpoint.y=y;
	return newpoint;
}

int whichquadrant(struct point pt){
	if(pt.x>0&&pt.y>0)
		return 2;
	else if(pt.x<0&&pt.y>0)
		return 1;
	else if(pt.x>0&&pt.y<0)
		return 4;
	else if(pt.x<0&&pt.y<0)
		return 3;
	else if(pt.x==0&&pt.y==0)
		return 0;
}

int arepointssame(struct point a,struct point b){
	return a.x==b.x&&a.y==b.y;
}
