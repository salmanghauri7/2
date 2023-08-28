#include <iostream>
using namespace std;
class complex{
    private:
    	int a;int b;
    public:
    	void set(int a1,int b1);
    	void setsum(complex o1,complex o2);
    	void display();
		
};

void complex :: set(int a1,int b1)
{
	a=a1;
	b=b1;
}
void complex :: setsum(complex o1,complex o2)
{
	a=o1.a + o2.a;
	b=o1.b + o2.b;
}
void complex :: display()
{
	cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
}
int main(){
	complex o1,o2,c3;
	
	o1.set(1,2);
	o1.display();
	
	o2.set(2,3);
	o2.display();
	
	c3.setsum(o1,o2);
	c3.display();
}

