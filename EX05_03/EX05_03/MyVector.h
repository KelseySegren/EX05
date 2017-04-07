#ifndef MYVECTOR_H_
#define MYVECTOR_H_
template <typename T>

class MyVector {
private:
	T elements[10];
	int vectorSize;
public:
	MyVector() {
		vectorSize = 0;
	}

	T push_back(T value) {
		elements[vectorSize++] = value;
		return value;
	}

	T pop_back() {
		return elements[vectorSize--];
	}
	
	unsigned const int size() {
		return vectorSize;
	}
	
	T at(int index) {
		return elements[index];
	}
	
	bool empty() {
		return vectorSize == 0;
	}
	
	int clear() {
		vectorSize = 0;
		return vectorSize;
	}
	
	void swap(MyVector v2) {
		T temp[10];
		int tempSize = v2.size();

		for (int i = 0; i < size(); i++) {
			v2.push_back(at(i));
		}
		clear();

		for (int i = 0; i < tempSize; i++) {
			push_back(temp[i]);
		}
	}



};

#endif