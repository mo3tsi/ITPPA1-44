// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> //Libraries that allows input and output operations
using namespace std;
int main()
{
    cout << "Hello World!\n";
	cout << "Asive Moetsi\n";
	cout << "I doing ITPPA";

	//variables
	int age = 20;
	double height = 1.75;
	bool isStudent = true;
	char grade = 'A';
	string name = "Asive Moetsi";

	const double TAX = 0.15; //Constant variable, its value cannot be changed

	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Height: " << height << endl;
	cout << "Is Student: " << isStudent << endl;
	cout << "Grade: " << grade << endl;
	cout << "Tax: " << TAX << endl;

	//User input
	cout << "What is your name? ";
	cin >> name;
	cout << "What is your age? ";
	cin >> age;
	//Output the user input
	cout << "Hello " << name << endl;
	cout << "You are " << age << " years old." << endl;

	//To read a full line of input including spaces
	getline(cin, name);

	//Operators
	cout << "Addition: " << age + 5 << endl;
	cout << "Subtraction: " << age - 5 << endl;
	cout << "Multiplication: " << age * 5 << endl;
	cout << "Division: " << age / 5 << endl;
	cout << "Modulus: " << age % 5 << endl;

	age = 21; //Updating the value of age
	height = 1.80; //Updating the value of height
	isStudent = false; //Updating the value of isStudent
	grade = 'B'; //Updating the value of grade
	name = "Asive Moetsi"; //Updating the value of name

	return 0;//An exit code of 0 indicates that the program has executed successfully without any errors.
}

