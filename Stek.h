#pragma once
template<typename T> 
class Stek
{
public:
	Stek(size_t size) {
		LIMIT = size;
		arr = new T[LIMIT];
	}

	bool Push(T el) {
		if (count >= LIMIT)
		{
			return false;
		}
		else
		{
			arr[count] = el;
			count++;
			return true;
		}
	}
	T Pop() {
		if (Empty())
		{
			return 0;
		}
		else
		{
			T val = arr[count-1];
			arr[count-1] = 0;
			count--;

			return val;
		}
	}
	bool Empty() {
		if (count == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	~Stek() {
		delete arr;
		arr = nullptr;
	}
private:
	size_t count = 0;
	T* arr = nullptr;
	size_t LIMIT = 5;
};
