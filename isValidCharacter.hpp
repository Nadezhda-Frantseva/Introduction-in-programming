#pragma once
bool isValidCharacter(char arr[])
{
	bool isTrue = false;
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] >= '0' && arr[i] <= '9' || arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/' || arr[i] == '!' || arr[i] == ' ')
		{
			isTrue = true;
			i++;
		}
		else
		{
			return false;
		}
	}
	return isTrue;
}
