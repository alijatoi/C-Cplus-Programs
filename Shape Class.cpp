#include<iostream>
#include<conio.h>
                using namespace std;
class shape
{     protected:
                int height, width;
     public:
            void get()
            {    cout<<"Enter height and width: ";
                 cin>>height>>width;
            }
};
class triangle: public shape
{     public:
      int show()
      {   shape::get();
          return ((height*width)/2);
      }
};
class rectangle: public shape
{     public:
      int show()
      {   shape::get();
          return (height*width);
      }
};
int main(){
    triangle tri;
    rectangle rect;
    cout<<"\t\tTriangle: ";
    cout<<"Area: "<<tri.show();
    cout<<"\n\n\tRectangle: ";
    cout<<"Area: "<<rect.show();

getch();  }

