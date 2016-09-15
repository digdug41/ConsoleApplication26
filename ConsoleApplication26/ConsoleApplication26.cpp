// ConsoleApplication25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include <iostream>
#include <string>
#include <algorithm> 
#include <vector>

using namespace std;



class People {
public:
	People();

	void addPerson(string name);
	vector<string> readPersonList();

private:
	vector<string> personList;
};

People::People() {
	int TotalPeople = 0;
}

void People::addPerson(string name) {
	personList.push_back(name);
}

vector<string> People::readPersonList() {
	return personList;
}




void printPersonList(People groupName)
{
	for (auto n : groupName.readPersonList())
	{
		cout << n << endl;
	}
}

int main()
{
	Person diggy;
	diggy.setAge(16);
	diggy.setEyeColor("brown");

	cout << diggy.readAge() << endl;
	cout << diggy.readEyeColor() << endl;

	People discordGroup;
	discordGroup.addPerson("diggy");
	discordGroup.addPerson("aru");

	printPersonList(discordGroup);




	int pause;
	cin >> pause;

	return 0;
}



