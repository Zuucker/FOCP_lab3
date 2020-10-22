#include <iostream>
#include <vector>
#include <array>
using namespace std;

struct matrix2D{
	vector<vector<int>> contents;

	void print() {
		cout << "Contents of the matrix:" << endl;
		for (int i = 0; i < contents.size(); i++)
		{
			for (int j = 0; j < contents[0].size(); j++)
			{
				cout << contents[i][j] << " ";
			}
			cout << endl;
		}
	}
};


int main()
{
	matrix2D a, b;
	a.contents = { {1,2,3},{4,5,6},{7,8,9} };
	b.contents = { {9,8,7},{6,5,4},{3,2,1} };

	a.print();
	b.print();

	return 0;
}