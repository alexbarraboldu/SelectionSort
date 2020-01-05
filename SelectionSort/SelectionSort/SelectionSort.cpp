#include <iostream>
#include <array>

const short int length = 5000;
typedef std::array<short int, length> int_array;
int_array arr1;

int_array fillArray(int_array _array)
{
	short int ran;
	for (size_t i = 0; i < _array.size(); i++)
	{
		ran = rand() % 5000;
		_array[i] = ran;
	}
	return _array;
}

void printArray(int_array _array)
{
	for (size_t i = 0; i < _array.size(); i++)
	{
		std::cout << _array[i] << ' ';
	}
}

void sortArray(int_array& _array)
{
	short int auxHead;
	size_t size = _array.size();
	for (size_t j = 0; j < size; j++)
	{
		for (size_t i = 0; i < size; i++)
		{
			if (_array[i] <= _array[j]) { continue; };
			auxHead = _array[j];
			_array[j] = _array[i];
			_array[i] = auxHead;
		}
	}
}

int main()
{
	arr1 = fillArray(arr1);
	printArray(arr1);
	sortArray(arr1);
	std::cout << "\n\n";
	printArray(arr1);
}