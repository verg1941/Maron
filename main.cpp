#include <iostream>

using namespace std;

class Base
{
public:
Base() { cout « "Construct Base object\n"; }
~Base() { cout « "Destruct Base object\n"; }

void func() { cout « "Function1 func() of class Base\n"; }
};

int main()
{
int x;
x=0;
int y;
cout « "* Create Object 1base" « endl;
Base base;
cout « "* Call method func() for object base" « endl;
base.func();
return 0;
}
