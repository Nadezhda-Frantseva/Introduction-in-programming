#pragma once
bool isCorrectFactorial(char arr[]);
bool isCorrectSign(char arr[])
{
	bool isTrue = false;
	bool isTrueFactorial = isCorrectFactorial(arr);
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '!' && isTrueFactorial == true)
		{
			isTrue = true;
		}
		if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/')
		{
			if ((arr[i - 2] >= '0' && arr[i - 2] <= '9' || arr[i - 2] == '!') && arr[i - 1] == ' ' && arr[i + 1] == ' ' && arr[i + 2] >= '0' && arr[i + 2] <= '9')
			{
				isTrue = true;
			}
			else
			{
				return false;
			}
		}
		i++;
	}
	return isTrue;
}


