
#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	virtual void display();
	void setfeet(int f);
	void setinches(int i);
	int getfeet();
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
}
void CFeet::setfeet(int f)
{
	feet = f;
}
void CFeet::setinches(int i)
{
	inches = i % 12;
	feet = feet + i / 12;
}
void CFeet::display()
{
	cout << "價濬" << feet << "荎喜" << inches << "荎喜" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
class CMyFeet :public CFeet
{
public:
	void display();
};
void CMyFeet::display()
{
	cout << "巖汜濬" << feet << "荎喜" << inches << "荎喜" << endl;
}
int main()
{
	CFeet *p;
	p = new CMyFeet;
	p->setfeet(4);
	p->setinches(9);
	p->display();
	p->CFeet::display();
	return 0;
}