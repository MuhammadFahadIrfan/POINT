#include <iostream>

using namespace std;

class point
{
public:
    point()
    {
        this->x=20;
        this->y=30;
    }
    point(double x,double y)
    {
        this->x=x;
        this->y=y;
    }
    point (point& p)
{

    this->x=p.x;
    this->y=p.y;
}
//GETTER
float getx()
{
    return this->x;
}
float gety()
{
    return this->y;
}
//SETTERS
void setx(double x)
{
    this->x=x;

}
void sety(double y)
{
    this->y=y;
}
//DISPLAY
void display()
{
    cout<<"LET's DO SOME ARITHMETIC OPERATIONS"<<endl;
    cout<<"("<<this->x<<","<<this->y<<")"<<endl;
}
point operator +(point& a)
{
    point add;
    add.x=this->x+a.x;
    add.y=this->y+a.y;
    return add;
}
point operator *(point& a)
{
    point mul;
    mul.x=this->x*a.x;
    mul.y=this->y*a.y;
    return mul;
}
point operator /(point& a)
{
    point dvd;
    dvd.x=this->x/a.x;
    dvd.y=this->y/a.y;
    return dvd;

}






  private:
      double x;
      double y;
};
ostream& operator<<(ostream& o, point x)
{


return o <<"("<<x.getx()<<","<<x.gety()<<")"<<endl;
}