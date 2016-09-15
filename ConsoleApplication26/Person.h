#pragma once
#include <string>
#include <algorithm> 
#include <vector>
using namespace std;

class Person
{

private:
	int age;
	string eyeColor;

public:
	void setAge(int p);
	int readAge();
	Person::Person();

	void setEyeColor(string p);
	string readEyeColor();
};






