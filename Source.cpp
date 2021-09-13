#include <iostream>
#include "get_length.hpp"
#include "get_calculate.hpp"
#include "get_sum.hpp"
#include "get_difference.hpp"
#include "get_multiplication.hpp"
#include "get_division.hpp"
#include "get_factorial.hpp"
#include "factorial.hpp"
#include "isCorrectFactorial.hpp"
#include "isCorrectSign.hpp"
#include "isValidCharacter.hpp"
using namespace std;
int length(const char* arr);
int get_calculate(char* arr);
char* get_sum(char* arr1, char* arr2, int len1, int len2, char* new_arr, char* new_arr1);
char* get_difference(char* arr1, char* arr2, int len1, int len2, char* new_arr, char* new_arr1);
char* get_multiplication(char* arr1, char* arr2, int len1, int len2, char* result, char* new_arr, char* new_arr1);
char* get_division(char* arr1, char* arr2, int len1, int len2, char* result, char* new_arr, char* new_arr1);
int get_factorial(int number);
char* factorial(char* arr, char* factorial_result);
bool isCorrectFactorial(char arr[]);
bool isCorrectSign(char arr[]);
bool isValidCharacter(char arr[]);

int main()
{
	char arr[100];
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter an expression to calculate: " << '\n';
		cin.getline(arr, sizeof(arr), '\n');
		bool isCorrectSpace = isCorrectSign(arr);
		bool isValidSign = isValidCharacter(arr);
		if (arr[0] == 'e' && arr[1] == 'x' && arr[2] == 'i' && arr[3] == 't' && arr[4] == '\0')
		{
			return 0;
		}
		else
		{
			if (isCorrectSpace == false || isValidSign == false)
			{
				cout << "This expression is invalid !" << '\n';
			}
			else
			{
				int result = get_calculate(arr);
				if (result == -1)
				{
					cout << "This expression is invalid !" << '\n';
				}
				else
				{
					cout <<"The result is : "<< result << "\n";
				}
			}
		}
	}
return 0;
}