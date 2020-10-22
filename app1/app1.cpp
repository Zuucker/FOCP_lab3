#include <iostream>
#include <array>
using namespace std;

struct point2D{
	double x;
	double y;
};

int main()
{
	point2D myPoint;
	myPoint.x = 3.3;
	myPoint.y=5.5;
	cout << myPoint.x << " , " << myPoint.y<<endl;

	point2D myOtherPoint;
	myOtherPoint.x = 6.6;
	myOtherPoint.y = 7.7;
	cout << myOtherPoint.x << " , " << myOtherPoint.y<<endl;


	return 0;
}