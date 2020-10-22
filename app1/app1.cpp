#include <iostream>
#include <cstdlib>
using namespace std;

struct point2D{
	double x;
	double y;
};

point2D createPoint()
{
	point2D tmp;
	tmp.x = rand() % 100;
	tmp.y = rand() % 100;
	return tmp;
}

void createInPlace(point2D& point)
{
	point.x = rand() % 100;
	point.y = rand() % 100;
}

int main()
{
	point2D myPoint= createPoint();
	cout << myPoint.x << " , " << myPoint.y<<endl;
	
	point2D emptyPoint;

	createInPlace(emptyPoint);
	cout << emptyPoint.x << " , " << emptyPoint.y << endl;

	return 0;
}