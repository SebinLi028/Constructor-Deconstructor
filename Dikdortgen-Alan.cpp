/* This program calculates the area of a rectangle and dispalys it. */
#include<iostream>
using namespace std;

class Area
{
private:
	int length, breadth;
public:
	Area() : length(5), breadth(2) { } /* Constructor */
	void GetLength()
	{
		cout << "Enter length and breadth respectively: ";
		cin >> length;
		cout << "Enter length and breadth respectively: ";
		cin >> breadth;
	}
	int AreaCalculation()
	{
		return (length*breadth);
	}
	void DisplayArea(int temp)
	{
		cout << "Area: " << temp << endl;
	}
};

int main()
{
	Area A1, A2;
	int temp;
	A1.GetLength();
	temp = A1.AreaCalculation();
	A1.DisplayArea(temp);
	cout << endl << "Default Area when value is not taken from user" << endl;
	// A2.GetLength();
	temp = A2.AreaCalculation();
	A2.DisplayArea(temp);
	system("PAUSE");
	return 0;
}
