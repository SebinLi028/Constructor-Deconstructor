#include<iostream>
#include<conio.h>
using std::cout;
using std::endl;

class Student
{
private:
	int marks;
	char grade;
public:
	Student(int m, char g) // constructor
	{
		marks = m;
		grade = g;
	}
	void show()
	{
		cout << "Marks = " << marks << endl;
		cout << "Grade = " << grade << endl;
	}
};

int main()
{
	Student s1(730, 'A'), s2(621, 'B');
	cout << "Record of tudent 1:" << endl;
	s1.show();
	cout << "Record of student 2:" << endl;
	s2.show();
	getch();
	return 0;
}
