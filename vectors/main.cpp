#include "Katas.h"

// ----------------------------------------------------------------------
// in
const std::string MyEmptyString = "No input";

class Calculator 
{
private:

	int a = 0;
	int b = 0;
	int currentValue = 0;


public:

	void SetA(int a)
	{
		this->a = a;
	}
	void SetB(int b) 
	{
		this->b = b;
	}
	int GetA() 
	{
		return this->a;
	}
	int GetB() 
	{
		return this->b;
	}
	void GetAdress()
	{
		std::cout << "baa: " << this << std::endl;
	}
};


void PrimitiveCalc()
{
	int a = 0,
		b = 0, c = 0;
	char acction = 'A';

	std::cout << "CALCULATOR!!!" << std::endl;
	std::cout << "Input value: "; // here
	std::cin >> a;
	std::cout << "Action ??? \n 1.Add \n 2.Substract" << std::endl;
	std::cin >> acction;
	std::cout << "acction char = " << (int)acction << std::endl;


	std::cout << "Input value: "; // here
	std::cin >> b;

	std::cout << std::endl;
	std::cout << "Value B is: " << b << std::endl;
	// CONTROLS


	switch (acction)
	{
	case(49):
	{
		std::cout << "addition ON" << std::endl;
		c = a + b;
		break;
	}
	case(50):
	{
		std::cout << "Substraction ON" << std::endl;
		c = a - b;
		break;
	}
	default:
		std::cout << "wrong key" << std::endl;
	}

	std::cout << "Result is: " << c << std::endl;

	// END CONTROLS

}


static std::vector<std::string> Kata1(const std::vector<std::string>& lines)
{

	std::vector<std::string> test = lines;

	for (int i = 0; i < test.capacity(); i++)
	{
		int number = i + 1;
		std::string tempSTR = std::to_string(number);
		tempSTR.push_back(':'), tempSTR.push_back(' ');

		// creat string with numbers 1: . 2: . 3. ...
		// so ". + space" is always.
		tempSTR += test.at(i);
		test.at(i) = tempSTR;

	}
	return test;
}

static std::vector<std::string> Katta2(const std::vector<std::string>& input) {
	
	
	
	std::vector<std::string> result;

	for (int i = 0; i < input.capacity(); ++i) 
	{
		if (input.at(i).size() == 4)
		{
			result.push_back(input.at(i));
		}

	}
	return result;
}

std::string Kata3(std::string str) {
	//your code here
	for (int i = 0; i < str.size(); ++i)
	{
		if (str.at(i) == '5')
		{
			str.at(i) = 'S';
		}
		else if (str.at(i) == '0') {
			str.at(i) == 'O';
		}
		else if (str.at(i) == '1') {
			str.at(i) == 'I';
		}

	}
	return str;
}
bool validParentheses(const std::string& str) 
{
	bool result = true;
	std::stack<char> STACK;
	
	for (char var : str)
	{
		if (var == '(') 
		{
			STACK.push(var);
		}
		else if (var == ')') {
			if (STACK.empty())
			{
				return false;
			}
			STACK.pop();
		}
	}
	if (STACK.empty()) {
		result = true;
	}
	return result;
}

void PrintINT(std::string comment, int a) {

	if (comment.empty()) {
		std::cout << MyEmptyString << " : " << a << std::endl;
	}
	else
	std::cout << comment << " : " << a << std::endl;
};

void PrintINT(std::string comment, const int *a) {

	if (comment.empty()) {
		std::cout << MyEmptyString << " : " << a << std::endl;
	}
	else
		std::cout << comment << " : " << a << std::endl;
};


void PrintINT(const int a) 
{
	std::cout << MyEmptyString << " : " << a << std::endl;
};

void PrintINT(const int *a)
{
	std::cout << MyEmptyString << " : " << a << std::endl;
};
template <typename T>

void PrintVector(std::vector <T> &a) 
{
	for (auto var : a)
	{
		std::cout << var << " " << std::endl;
	}
	std:: cout << " " << std::endl;
	std::cout << "End of print..." << std::endl;
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

std::vector<long long> pascalsTriangle(int input)
{
	std::vector <long long> result;
	int C = 1;
	for (int i = 1; i <= input; ++i) {
		C = 1;
		for (int j = 1; j <= i; ++j) {
			result.push_back(C);
			C = C * (i - j) / j;
		}
	}
	return result;
}

int main()
{
    /*
	int test = 25;
	int *testPT = &(test);
	PrintINT("test", test);
	PrintINT("pointer &test", &test);
	PrintINT("pointer *testPT = &(test)", testPT);
	*/
	
	int a[5] = { 0,0,0,0,0 };
	int length = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < length; ++i) {
	 std::cout << a[i] << "\t";
	}
	ArrSort(a, length);
	for (int i = 0; i < length; ++i) {
		std::cout << a[i] << "\t";
	}
	return 0;
}