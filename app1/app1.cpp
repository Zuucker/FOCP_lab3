#include <iostream>
#include <vector>
#include <array>
using namespace std;

struct matrix2D{
	vector<vector<int>> contents;

	void add(matrix2D other)
	{
		if (other.rows() == rows() && other.collumns() == collumns())
		{

			for (int i = 0; i < rows(); i++)
			{
				for (int j = 0; j < collumns(); j++)
				{
					contents[i][j] += other.contents[i][j];

				}
			}

		}else
		{
			cout << "Dimensions must match!" << endl;
		}

	}

	void multiplication(matrix2D other)
	{
		if (other.rows() == rows() && other.collumns() == collumns())
		{

			for (int i = 0; i < rows(); i++)
			{
				for (int j = 0; j < collumns(); j++)
				{
					contents[i][j] *= other.contents[i][j];

				}
			}

		}
		else
		{
			cout << "Dimensions must match!" << endl;
		}

	}

	int rows()
	{
		return contents.size();
	}

	int collumns()
	{
		return contents[0].size();
	}

	void inputMatrix() {
		int r,c;

		cout << "Number of rows:" << endl;
		cin >> r;
		cout << "Number of collumns:" << endl;
		cin >> c;

		for (int i = 0; i < r; i++)
		{
			vector<int> row;
			int tmp;
			cout << "Adding a row with " << c<<" collumns"<<endl;
			for (int j = 0; j < c; j++)
			{
				cout << "introduce value:"<<endl;
				cin >> tmp;
				row.push_back(tmp);
			}
			contents.push_back(row);
		}
	}

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
	cout << "Introduce data for matrix a:" << endl;
	a.inputMatrix();
	cout << "Introduce data for matrix b:" << endl;
	b.inputMatrix();
	cout << "Matrix a:" << endl;
	a.print();
	cout << "Matrix b:" << endl;
	b.print();

	a.multiplication(b);
	
	cout << "Matrix a*b:" << endl;
	a.print();
	return 0;
}