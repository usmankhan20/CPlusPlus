#include <iostream>
void PrintMultipleTable(int num)
{
	for (int i = 1; i < 11; i++)
	{
		std::cout << num << " * " << i << " = " << i * num << std::endl;
	}
}