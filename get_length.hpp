#pragma once
int length(const char* arr)
{
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return i;
}