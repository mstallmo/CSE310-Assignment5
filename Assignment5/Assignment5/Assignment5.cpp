#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int tableSize;
string action;

void insert();

class courseInfo{
public:
	string id;
	string courseName;
};

class courseList{
public:
	courseInfo * current;
	courseInfo * next;
}*head = NULL;

int main()
{
	cout << "Enter Hash Table Size:" << endl;
	cin >> tableSize;

	int * hashTable = new int[tableSize];

	cout << "Enter Action" << endl;
	cin >> action;

	while (action.compare("Display") != 0)
	{
		if (action.compare("Insertion") == 0)
		{
			insert();
		}
	}
}

void insert()
{
	courseInfo input;

	cout << "Enter course number and title:" << endl;
	cin >> input.id;
	cin >> input.courseName;


}

