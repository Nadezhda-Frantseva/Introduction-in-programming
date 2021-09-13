#pragma once
int length(const char* arr);
char* get_sum(char* arr1, char* arr2, int len1, int len2, char* new_arr, char* new_arr1)
{
	char current = '0';
	if (len2 == 100)
	{
		return arr1;
	}
	if (len1 >= len2)
	{
		new_arr[len1] = '\0';
		for (int i = len1 - 1; i > len1 - 1 - len2; i--)
		{
			if (((arr1[i] - '0') + (arr2[len2 - 1] - '0') + (current - '0')) < 10) // because '0' = 48 and arr1[i] - '0' = '5'(for example) - '0' = 5 (integer)
			{
				new_arr[i] = ((arr1[i] - '0') + (arr2[len2 - 1] - '0') + current - '0') + '0'; // current = 1 in mind
				current = '0';
				len1--;
				len2--;
			}
			else if (((arr1[i] - '0') + (arr2[len2 - 1] - '0') + (current - '0')) >= 10)
			{
				new_arr[i] = (((arr1[i] - '0') + (arr2[len2 - 1] - '0') + current - '0') - 10) + '0';
				current = '1';
				len1--;
				len2--;
			}
		}
		for (int j = len1 - 1 - len2; j >= 0; j--)
		{
			if ((arr1[j] - '0') + (current - '0') < 10)
			{
				new_arr[j] = (arr1[j] - '0') + (current - '0') + '0';
				current = '0';
			}
			else if (((arr1[j] - '0') + (current - '0')) >= 10)
			{
				new_arr[j] = ((arr1[j] - '0') + (current - '0') - 10) + '0';
				current = '1';
			}
		}
		if ((arr1[0] - '0') + (current - '0') >= 10)
		{
			int len_of_arr1 = length(arr1);
			new_arr1[len_of_arr1 + 1] = '\0';
			for (int k = len_of_arr1; k > 0; k--)
			{
				new_arr1[k] = new_arr[k - 1];
			}
			new_arr1[0] = (((arr1[0] - '0') + (current - '0')) + 39);
			return new_arr1;
		}
		else
		{
			return new_arr;
		}
	}
	if (len2 > len1)
	{
		new_arr[len2] = '\0';
		for (int i = len2 - 1; i > len2 - 1 - len1; i--)
		{
			if (((arr2[i] - '0') + (arr1[len1 - 1] - '0')) < 10)
			{
				new_arr[i] = ((arr2[i] - '0') + (arr1[len1 - 1] - '0') + current - '0') + '0';
				current = '0';
				len1--;
				len2--;
			}
			else if (((arr2[i] - '0') + (arr1[len1 - 1] - '0')) >= 10)
			{
				new_arr[i] = (((arr2[i] - '0') + (arr1[len1 - 1] - '0') + current - '0') - 10) + '0';
				current = '1';
				len1--;
				len2--;
			}
		}
		for (int j = len2 - 1 - len1; j >= 0; j--)
		{
			if ((arr2[j] - '0') + (current - '0') < 10)
			{
				new_arr[j] = (arr2[j] - '0') + (current - '0') + '0';
				current = '0';
			}
			else if (((arr2[j] - '0') + (current - '0')) >= 10)
			{
				new_arr[j] = ((arr2[j] - '0') + (current - '0') - 10) + '0';
				current = '1';
			}
		}
		if ((arr2[0] - '0') + (current - '0') >= 10)
		{
			int len_of_arr2 = length(arr2);
			new_arr1[len_of_arr2 + 1] = '\0';
			for (int k = len_of_arr2; k > 0; k--)
			{
				new_arr1[k] = new_arr[k - 1];
			}
			new_arr1[0] = (((arr2[0] - '0') + (current - '0')) + 39);
			return new_arr1;
		}
		else
		{
			return new_arr;
		}
	}
}