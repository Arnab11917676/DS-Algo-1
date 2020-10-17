#include<iostream>
using namespace std;
class fishing
{	protected:
	int x;
	public:
	void fi()
	{
		cin>>x;
	}
	void iif()
	{
		cout<<x<<endl;
	}
};
class net:public virtual fishing
{	protected:
	int y;
	public:
	int function()
	{
		y=x+2;
		cout<<y;
		cout<<endl;
		cout<<"The next value will be changed"<<y;
	}
};
class ten:public virtual net
{	protected:
	int z;
	public:
		void inc()
		{
			z=y+3;
			cout<<z;
			cout<<endl;
			cout<<"The next value will be changed"<<z;
		}
};
class gottcha:public net,public ten
{
	int zz;
	public:
		void nalla()
		{
			zz=z+4;
			cout<<zz;
			cout<<endl;
			cout<<"The next value will be changed"<<zz;
		}
};
main()
{
	gottcha g;
	g.fi();
	g.iif();
	g.function();
	g.inc();
	g.nalla();
	//getch();
}
