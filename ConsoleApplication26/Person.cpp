#include "stdafx.h"
#include "Person.h"
using namespace std;

//Constructor

void Person::setAge(int p)
{
	age = p;
}

int Person::readAge() {
	return age;
}

void Person::setEyeColor(string p) {
	eyeColor = p;
}

string Person::readEyeColor() {
	return eyeColor;
}

Person::Person() :age(0), eyeColor("unknown")
{
}