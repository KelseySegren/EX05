//////////////
//Kelsey Segren
//12.2 Linear Search
//////////////////

//Rewrite the linear search function in Listing 7.9, LinearSearch.cpp to use a generic type for array elements. 
//Test the function with array of int, double and string values

#include <iostream>
#include <string>
using namespace std;

template <typename T> 
int linearSearch(const T list[], T key, int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		if (key == list[i])
			return i;
	}
	return -1;
}

int main() {

	int a[] = { 1,2,3,4};  //array of int
	double b[] = { 5.6,3.4,2.5,7.8 };  //array of double
	string c[] = { "a","b","c","d" };  //array of string
	
	cout << "Location of 4 is " << linearSearch(a, 4, 4) << endl;  //should output 3
	cout << "Location of 3.4 is " << linearSearch(b, 3.4, 4) << endl;  //should output 1
	cout << "Location of c is " << linearSearch(c, string ("c"), 4) << endl;  //should output 2
	


}