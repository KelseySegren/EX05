/////////////
//Kelsey Segren
//12.4 Is Sorted?
/////////////

//Write the following function to check if the elements in the array are sorted.
/* template <typename T>
   bool isSorted(const T list[], int size)
Test the function with array of int, double, and string values
*/

#include <iostream>
#include <string>
using namespace std;

template <typename T>
bool isSorted(const T list[], int size) {  //checks if array is sorted 
	for (int i = 0; i < size-1; i++) {
		if (list[i] > list[i + 1]) 
			return false;
		}
	return true;
	}

int main() {
	int list1[] = { 1,2,3,4,5 };
	if (isSorted(list1, 5) == true) { //should output "sorted"
		cout << "is sorted" << endl;
	}
	else
		cout << "not sorted" << endl;
	
	double list2[] = { 3.5,4.8,2.1,6.4 }; 
	if (isSorted(list2, 4) == true) { //should output "not sorted"
		cout << "is sorted" << endl;
	}
	else
		cout << "not sorted" << endl;
	
	string list3[] = { "Hola", "Hello", "Bonjour", "Ciao" }; 
	if (isSorted(list3, 4) == true) { //should output "not sorted"
		cout << "is sorted" << endl;
	}
	else
		cout << "not sorted" << endl;
}