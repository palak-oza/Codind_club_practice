#include <iostream>
#include <stdio.h>
#include<conio.h>
#include<string.h>

#define max 5
using namespace std;

// Structure of Employee
struct employee {
	string name;
	long int code;
	string designation;
	int exp;
	int age;
};

int num;
void showMenu();

employee emp[max];

void build()
{
	cout << "Build The Table\n";
	cout << "Maximum Entries can be "
		<< max << "\n";

	cout << "Enter the number of "
		<< "Entries required";
	cin >> num;

	if (num > 20) {
		cout << "Maximum number of "
			<< "Entries are 20\n";
		num = 20;
	}
	cout << "Enter the following data:\n";

	for (int i = 0; i < num; i++) {
		cout << "Name ";
		cin >> emp[i].name;

		cout << "Employee ID ";
		cin >> emp[i].code;

		cout << "Designation ";
		cin >> emp[i].designation;

		cout << "Experience ";
		cin >> emp[i].exp;

		cout << "Age ";
		cin >> emp[i].age;
	}
	showMenu();
	return;
}


void insert()
{
	if (num < max) {
		int i = num;
		num++;

		cout << "Enter the information "
			<< "of the Employee\n";
		cout << "Name ";
		cin >> emp[i].name;

		cout << "Employee ID ";
		cin >> emp[i].code;

		cout << "Designation ";
		cin >> emp[i].designation;

		cout << "Experience ";
		cin >> emp[i].exp;

		cout << "Age ";
		cin >> emp[i].age;
	}
	else {
		cout << "Employee Table Full\n";
	}

	showMenu();
	return;

}

// Function to delete record at index i
void deleteIndex(int i)
{
	for (int j = i; j < num - 1; j++) {
		emp[j].name = emp[j + 1].name;
		emp[j].code = emp[j + 1].code;
		emp[j].designation
			= emp[j + 1].designation;
		emp[j].exp = emp[j + 1].exp;
		emp[j].age = emp[j + 1].age;
	}
	return;
}

// Function to delete record
void deleteRecord()
{
	cout << "Enter the Employee ID "
		<< "to Delete Record";

	int code;

	cin >> code;
	for (int i = 0; i < num; i++) {
		if (emp[i].code == code) {
			deleteIndex(i);
			num--;
			break;
		}
	}
	showMenu();
}

void searchRecord()
{
	cout << "Enter the Employee"
		<< " ID to Search Record";

	int code;
	cin >> code;

	for (int i = 0; i < num; i++) {

		// If the data is found
		if (emp[i].code == code) {
			cout << "Name "
				<< emp[i].name << "\n";

			cout << "Employee ID "
				<< emp[i].code << "\n";

			cout << "Designation "
				<< emp[i].designation << "\n";

			cout << "Experience "
				<< emp[i].exp << "\n";

			cout << "Age "
				<< emp[i].age << "\n";
			break;
		}
	}
	showMenu();
	return;
}

void display()
{
	int i, num;
	cout << "\nEnter number of records to be displayed: ";
	cin >> num;
	if (num < sizeof(emp))
	{
		for (i = 0; i < num; i++)
		{
			cout << "\nName: " << emp[i].name;
			cout << "\nemployee Id: " << emp[i].code;
			cout << "\nDesignation: " << emp[i].designation;
			cout << "\nExperience: " << emp[i].exp;
			cout << "\nAge: " << emp[i].age;
		}
	}
	else
	{
		cout << "\nEntered number of records is wrong!";
	}
	showMenu();
	return;
}

// Function to show menu
void showMenu()
{

	cout << "-------------------------"
		<< " Employee Management System"
		<< "-------------------------\n\n";

	cout << "Available Options:\n\n";
	cout << "1.Build Table\n";
	cout << "2.Insert New Entry \n";
	cout << "3.Delete Entry	 \n";
	cout << "4.Search a Record\n";
	cout << "5.Show all options \n";
	cout << "6.Exit\n";
	cout << "\nEnter option: ";

	int option;

	// Input Options
	cin >> option;
	do
	{
		switch (option)
		{
		case 1:
			build();
			break;
		case 2:
			insert();
			break;
		case 3:
			deleteRecord();
			break;
		case 4:
			searchRecord();
			break;
		case 5:
			display();
			break;
		case 6:
			exit(0);
		default:
			cout << "Expected Options:"
				<< " are 1/2/3/4/5";
			break;
		}
	} while (option > 0 && option < 6);
}

int main()
{

	showMenu();
	_getch();
	return 0;
}

