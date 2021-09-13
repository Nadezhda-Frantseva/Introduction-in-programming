#pragma once
int length(const char* arr);
char* get_sum(char* arr1, char* arr2, int len1, int len2, char* new_arr, char* new_arr1);
char* get_difference(char* arr1, char* arr2, int len1, int len2, char* new_arr, char* new_arr1);
char* get_multiplication(char* arr1, char* arr2, int len1, int len2, char* result, char* new_arr, char* new_arr1);
char* get_division(char* arr1, char* arr2, int len1, int len2, char* result, char* new_arr, char* new_arr1);
int get_factorial(int number);
char* factorial(char* arr, char* factorial_result);
bool isCorrectFactorial(char arr[]);
int get_calculate(char* arr)
{
	int j = 0;
	int len = length(arr);
	int counter1 = 0;
	int counter2 = 0;
	char new_arr[50];
	char new_arr1[50];
	char new_arr2[50];
	char result_of_multiplication[101];
	char result_of_division[100];
	char result_of_factorial[100];
	char factorial_result[100];
	for (int i = 0; i < 100; i++)
	{
		result_of_multiplication[i] = '0';
	}
	result_of_multiplication[100] = '\0';
	char current_result[100];
	int y = 0;
	while (arr[y] != ' ' && arr[y] != '!')
	{
		counter1++;
		y++;
	}
	for (int u = 0; u < counter1; u++)
	{
		current_result[u] = arr[u];
	}
	current_result[counter1] = '\0';
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == '+')
		{
			counter2 = 0;
			int t = i;
			int w = t;
			while (arr[t + 2] != ' ')
			{
				if (arr[t + 2] == '\0')
				{
					break;
				}
				if (arr[t + 2] == '!')
				{
					char help_arr[50];
					int j = 0;
					for (int h = w + 2; h < t + 2; h++)
					{
						help_arr[j] = arr[h];
						j++;
					}
					help_arr[counter2] = '\0'; 
					char* array_for_factorial = factorial(help_arr, factorial_result);
					int len_of_array = length(array_for_factorial);
					counter2 = len_of_array;
					j = 0;
					for (int y = w + 2; y < w + 2 + counter2; y++)
					{
						arr[y] = array_for_factorial[j];
						j++;
					}
					arr[w + 2 + counter2] = ' ';
					break;
					}
				else
				{
					counter2++;
					t++;
				}
			}

			t = i;
			for (int j = 0; j < counter2; j++)
			{
				new_arr[j] = arr[t + 2];
				t++;;
			}
			new_arr[counter2] = '\0';

			t = i;
			char* result_of_summation = get_sum(current_result, new_arr, counter1, counter2, new_arr1, new_arr2);
			int len_of_result = length(result_of_summation);
			counter1 = len_of_result;
			for (int y = 0; y < counter1; y++)
			{
				current_result[y] = result_of_summation[y];
			}
			current_result[len_of_result] = '\0';
		}
		if (arr[i] == '-')
		{
			counter2 = 0;
			int t = i;
			int w = t;
			while (arr[t + 2] != ' ')
			{
				if (arr[t + 2] == '\0')
				{
					break;
				}
				if (arr[t + 2] == '!')
				{
					char help_arr[50];
					int j = 0;
					for (int h = w + 2; h < t + 2; h++)
					{
						help_arr[j] = arr[h];
						j++;
					}
					help_arr[counter2] = '\0';
					char* array_for_factorial = factorial(help_arr, factorial_result);
					int len_of_array = length(array_for_factorial);
					counter2 = len_of_array;
					j = 0;
					for (int y = w + 2; y < w + 2 + counter2; y++)
					{
						arr[y] = array_for_factorial[j];
						j++;
					}
					arr[w + 2 + counter2] = ' ';
					break;
				}
				else
				{
					counter2++;
					t++;
				}
			}
		
			t = i;
			for (int j = 0; j < counter2; j++)
			{
				new_arr[j] = arr[t + 2];
				t++;;
			}
			new_arr[counter2] = '\0';
			
			char* result_of_difference = get_difference(current_result, new_arr, counter1, counter2, new_arr1, new_arr2);
			int len_of_result = length(result_of_difference);
			counter1 = len_of_result;
			for (int y = 0; y < len_of_result; y++)
			{
				current_result[y] = result_of_difference[y];
			}
			current_result[len_of_result] = '\0';
		}
		if (arr[i] == '*')
		{
			counter2 = 0;
			int t = i;
			int w = t;
			while (arr[t + 2] != ' ')
			{
				if (arr[t + 2] == '\0')
				{
					break;
				}
				if (arr[t + 2] == '!')
				{
					char help_arr[50];
					int j = 0;
					for (int h = w + 2; h < t + 2; h++)
					{
						help_arr[j] = arr[h];
						j++;
					}
					help_arr[counter2] = '\0';
					char* array_for_factorial = factorial(help_arr, factorial_result);
					int len_of_array = length(array_for_factorial);
					counter2 = len_of_array;
					j = 0;
					for (int y = w + 2; y < w + 2 + counter2; y++)
					{
						arr[y] = array_for_factorial[j];
						j++;
					}
					arr[w + 2 + counter2] = ' ';
					break;
				}
				else
				{
					counter2++;
					t++;
				}
			}
			
			t = i;
			for (int j = 0; j <= counter2 - 1; j++)
			{
				new_arr[j] = arr[t + 2];
				t++;;
			}
			new_arr[counter2] = '\0';
		
			char* result_of_multi = get_multiplication(current_result, new_arr, counter1, counter2, result_of_multiplication, new_arr1, new_arr2);
			int len_of_result = length(result_of_multi);
			counter1 = len_of_result;
			for (int y = 0; y < len_of_result; y++)
			{
				current_result[y] = result_of_multi[y];
			}
			current_result[len_of_result] = '\0';
		}
		if (arr[i] == '/')
		{
			counter2 = 0;
			int t = i;
			int w = t;
			while (arr[t + 2] != ' ')
			{
				if (arr[t + 2] == '\0')
				{
					break;
				}
				if (arr[t + 2] == '!')
				{
					char help_arr[50];
					int j = 0;
					for (int h = w + 2; h < t + 2; h++)
					{
						help_arr[j] = arr[h];
						j++;
					}
					help_arr[counter2] = '\0';
					char* array_for_factorial = factorial(help_arr, factorial_result);
					int len_of_array = length(array_for_factorial);
					counter2 = len_of_array;
					j = 0;
					for (int y = w + 2; y < w + 2 + counter2; y++)
					{
						arr[y] = array_for_factorial[j];
						j++;
					}
					arr[w + 2 + counter2] = ' ';
					break;
				}
				else
				{
					counter2++;
					t++;
				}
			}
			
			t = i;
			for (int j = 0; j <= counter2 - 1; j++)
			{
				new_arr[j] = arr[t + 2];
				t++;;
			}
			new_arr[counter2] = '\0';
		
			char* result_of_div = get_division(current_result, new_arr, counter1, counter2,result_of_division, new_arr1, new_arr2);
			int len_of_result = length(result_of_div);
			counter1 = len_of_result;
			for (int y = 0; y < counter1; y++)
			{
				current_result[y] = result_of_div[y];
			}
			current_result[counter1] = '\0';
		}
		if (arr[i] == '!')
		{
			bool isCorrect = isCorrectFactorial(arr);
			if (isCorrect == true)
			{
				int index = 0;
				int number = 0;

				while (current_result[index] != '\0')
				{
					if (current_result[index] == ' ')
					{
						++index;
						continue;
					}
					number = number * 10 + (int)(current_result[index] - '0');
					++index;
				}
				int result_of_fact = get_factorial(number);

				int br = 0;
				int copy_result = result_of_fact;
				while (copy_result != 0)
				{
					copy_result = copy_result / 10;
					br++;
				}

				for (int y = br - 1; y >= 0; y--)
				{
					current_result[y] = (result_of_fact % 10) + '0';
					result_of_fact = result_of_fact / 10;
				}
				current_result[br] = '\0';
				counter1 = br;
			}
			else
			{
				return -1;
			}
		}
	} 
	int index = 0;
	int number = 0;

	while (current_result[index] != '\0')
	{
		if (current_result[index] == ' ')
		{
			++index;
			continue;
		}
		number = number * 10 + (int)(current_result[index] - '0');
		++index;
	}

	return number;
}

