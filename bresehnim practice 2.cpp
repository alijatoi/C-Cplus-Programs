#include<iostream>
#include"graphics.h"
using namespace std;
int main()
{
int x1,y1,x2,y2;
x1=20;
y1=10;
x2=30;
y2=18;
int dx, dy, i, x, y , start;
x=x1, y=y1;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
putpixel(x,y,RED);
x=x1, y=y1;
start=x;

dx=x2-x1;
dy=y2-y1;

int dx2=2 * dx, dy2 = 2*dy;
int po=dy2-dx,pk,pk1;

pk=po;
cout<<pk<<endl;
for(i=start;i<=x2;i++){
	
if(pk<0){
dx=1;
dy=0;
pk=pk+dy2;
cout<<pk<<endl;
}
else{
dx=1;
dy=1;
pk=pk+dy2-dx2;
cout<<pk<<endl;
}
x+=dx;
y+=dy;

putpixel(x,y,RED);

}
getch();
closegraph();
}
