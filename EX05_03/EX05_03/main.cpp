//////////////
//Kelsey Segren
//12.8 Implement Vector Class
////////////////

//The vector class is provided in the standard C++ library. Implement the vector class as an exercise. The standard vector class
//has many functions. For this exercise, implement only the functions defined in the UML class diagram as show in Figure 12.2

#include <iostream>
#include <string>
#include "MyVector.h"
using namespace std;

int main() {
	MyVector <int> intVector;

	for (int i = 0; i < 10; i++) {
		intVector.push_back(i + 1);
	}

	cout << "Numbers in the vector: ";
	for (int i = 0; i < intVector.size(); i++) {
		cout << intVector.at(i) << " ";
	}

	MyVector <string> stringVector;
	stringVector.push_back("Dallas");
	stringVector.push_back("Houston");
	stringVector.push_back("Austin");
	stringVector.push_back("Norman");

	cout << "\nStrings in the vector: ";
	for (int i = 0; i < stringVector.size(); i++) {
		cout << stringVector.at(i) << " ";
	}

	stringVector.pop_back();

	MyVector <string> v2;
	v2.swap(stringVector);
	//v2[0] = "Atlanta";

	cout << "\n Strings in vector v2: ";
	for (int i = 0; i < v2.size(); i++)
		cout << v2.at(i) << " ";

	return 0;

}