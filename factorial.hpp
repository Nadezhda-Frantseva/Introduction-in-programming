#pragma once
int get_factorial(int number);
char* factorial(char* arr, char* factorial_result)
{

	int index = 0;
	int number = 0;

	while (arr[index] != '\0')
	{
		if (arr[index] == ' ')
		{
			++index;
			continue;
		}
		number = number * 10 + (int)(arr[index] - '0');
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
		factorial_result[y] = (result_of_fact % 10) + '0';
		result_of_fact = result_of_fact / 10;
	}
	factorial_result[br] = '\0';
		return factorial_result;
}
