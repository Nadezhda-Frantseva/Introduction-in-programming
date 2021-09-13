#pragma once
bool isCorrectFactorial(char arr[])
{
	bool isTrue = false;
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == '!')
		{
			if (arr[i - 1] >= '0' && arr[i - 1] <= '9' && arr[i - 2] != '-' || arr[i - 1] >= '0' && arr[i - 1] <= '9' && arr[i - 2] >= '0' && arr[i - 2] <= '9' && arr[i - 3] != '-')
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
