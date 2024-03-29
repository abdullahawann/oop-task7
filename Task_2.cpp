#include <iostream>
using namespace std;

class Teacher
{
	int EmployeeID;
	char* Name;

public :
	Teacher(int ID = 0, char* name = NULL)
	{
		EmployeeID = ID;
		Name = name;
	}

	void display()
	{
		cout << "Employee ID is : " << EmployeeID << endl;
		cout << "Teacher name is : " << Name << endl;
	}
};

class Student
{
	char* RollNumber;
	char* Name;
	Teacher* TeacherList;
	int NumOfTeachers;

public :
	Student(char* rn, char* name, Teacher* list, int num)
	{
		RollNumber = rn;
		Name = name;
		TeacherList = list;
		NumOfTeachers = num;
	}

	void display()
	{
		cout << "Roll number of student is : " << RollNumber << endl;
		cout << "Name of the student is : " << Name << endl;
		cout << "List of teachers teaching this student is" << endl;

		for(int i=0; i<NumOfTeachers; i++)
		{
			TeacherList[i].display();
		}
	}

	~Student()
	{
		delete TeacherList;
	}
};

int main()
{
	int numofteachers, id;
	char s_name[50];
	char roll_number[30];
	char t_name[50];

	cout << "Enter the student's detail" << endl;
	cout << "Enter student's name : ";
	cin >> s_name;
	cout << "Enter student's roll number : ";
	cin >> roll_number;

	cout << "Enter the number of teachers associated : ";
	cin >> numofteachers;

	Teacher* Teachers = new Teacher[numofteachers];

	cout << endl << "Enter the teachers details" << endl;

	for (int i=0; i<numofteachers; i++)
	{
		cout << "Enter the employee id : ";
		cin >> id;
		cout << "Enter the teacher's name : ";
		cin >> t_name;
		cout << endl;
		Teacher newTeacher(id, t_name);
		Teachers[i] = newTeacher;
	}

	Student s(roll_number, s_name, Teachers, numofteachers);
	s.display();

	system("pause");
	return 0;
}