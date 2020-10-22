#include <iostream>
#include <cstdlib>
#include <array>
#include <cmath>
using namespace std;

struct point2D{
	double x;
	double y;

};

float areaOfTriangle(point2D a, point2D b, point2D c)
{
	float prod=a.x* (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y);
	return abs(prod / 2);
}

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

	float largestArea = 0.0;
	point2D first, second,third;
	/*
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

	*/

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				float area = areaOfTriangle(points[i], points[j], points[k]);
				if (area > largestArea)
				{
					largestArea = area;
					first = points[i];
					second = points[j];
					third = points[k];
				}
			}
		}
	}

	cout << "Threa largest area is: " << largestArea << endl;
	cout << "First point: " << first.x << ","<<first.y << endl;
	cout << "Second point: " << second.x << "," << second.y << endl;
	cout << "Third point: " << third.x << "," << third.y << endl;
	

	return 0;
}