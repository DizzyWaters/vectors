#include <iostream>
#include <vector>


void PrintVector(std::vector <int> a) 
{
	for (auto var : a)
	{
		std::cout << var << std::endl;
	}
}

void PrintVectorAddress(const std::vector <int> &a)
{
	std::cout << "Beginning of PrintVecAddress func " << std::endl;
	for (int i = 0; i < a.size(); ++i)
	{
		std::cout << &a.at(i) << std::endl;
	}
	std::cout << "End of PrintVecAddress func " << std::endl;
}

void AddValuesToVector(std::vector <int>& a, int input) 
{
	if (input < 0) 
	{
		for (int i = 0; i < input; ++i)
			a.push_back(a.back() + i +1);
	}
}

int main()
{
	std::vector <int> vec = { 1,2,3,4,5,6 };
	
	PrintVector(vec);
	PrintVectorAddress(vec);
	PrintVectorAddress(vec);

	AddValuesToVector(vec, 7);

	PrintVector(vec);
	PrintVectorAddress(vec);

	return 0;
}