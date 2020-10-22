#include <iostream>
#include <cstdlib>
#include <array>
#include <cmath>
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

float distance(point2D left, point2D right)
{
	return sqrt(pow((right.x - left.x), 2) + pow((right.y - left.y), 2));

}

int main()
{
	point2D myPoint= createPoint();
	
	array<point2D, 10>points;

	for (int i = 0; i < 10; i++)
	{
		points[i] = createPoint();
		cout << points[i].x << " , " << points[i].y << endl;
	}

	float largestDistance = 0.0;
	point2D first, second;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			float d = distance(points[i], points[j]);
			
			if (d >= largestDistance)
			{
				largestDistance = d;
				first = points[i];
				second = points[j];
			}
		}
	}

	cout << "Distance: " << largestDistance << endl;
	cout << "for point: " << first.x << "," << first.y << endl;;
	cout << "to point: " << second.x << "," << second.y << endl;;

	

	return 0;
}