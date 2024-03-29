#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;

public :
	Point(int a, int b)
	{
		x = a;
		y = b;
		cout << "Point() called" << endl;
	}

	void print()
	{
		cout << "The cordinates of circle are " << "(" << x << "," << y << ")";
		cout << endl;
	}

	~Point()
	{
		cout << "~Point() called" << endl;
	}
};

class Circle
{
	Point center;
	float radius;

public :
	Circle(int x, int y, float r) : center(x,y)
	{
		radius = r;
		cout << "Circle() called" << endl;
	}

	void print()
	{
		center.print();
		cout << "Radius of circle is " << radius << endl;
	}

	~Circle()
	{
		cout << "~Circle() called" << endl;
	}
};

class Quadrilateral
{
	Point w;
	Point x;
	Point y;
	Point z;

public :

	Quadrilateral(int a, int b, int c, int d, int e, int f, int g, int h) : w(a,b), x(c,d), y(e,f), z(g,h)
	{
		cout << "Quadrilateral() called" << endl;
	}

	void print()
	{
		w.print();
		x.print();
		y.print();
		z.print();
	}

	~Quadrilateral()
	{
		cout << "~Quadrilateral() called" << endl;
	}
};

void main()
{
	Circle c(3, 4, 5.5);
    c.print();

	Quadrilateral q(1,0,0,1,1,1,0,0);
	q.print();

	system("pause");
}