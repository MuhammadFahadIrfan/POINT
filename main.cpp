#include <iostream>
#include "point.h"
using namespace std;
int main()
{point a(20,30);
point b(30,40);
point ans;
point dvi;
point mult;
dvi=a+b;
ans=a/b;
cout<<"A D D I T I O N"<<endl;
dvi.display();
cout<<"D I V I S I O N"<<endl;
ans.display();
cout<<"M U L T I P L I C A T I  O N"<<endl;
mult=a*b;
mult.display();
system("pause");
}
