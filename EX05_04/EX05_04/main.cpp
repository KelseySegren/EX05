///////////////
//Kelsey Segren
//12.20 Shuffle Vector
///////////////


#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

template <typename T> 
void shuffle(vector<T>& v);

int main() {
	int x;
	vector<int> v;

	cout << "Enter 10 integers: ";
	for (int i = 0; i < 10; i++) {
		cin >> x;
		v.push_back(x);
	}

	shuffle(v);

	cout << "Shuffled integers: " << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}



}

template <typename T>
void shuffle(vector<T>& v) {
	srand(time(0));

	for (int i = 0; i < v.size(); i++) {
		int index = rand() % v.size();
		T temp = v[index];
		v[index] = v[i];
		v[i] = temp;
}

}