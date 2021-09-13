#pragma once
int length(const char* arr);
char* get_difference(char* arr1, char* arr2, int len1, int len2, char* new_arr, char* new_arr1);
char* get_division(char* arr1, char* arr2, int len1, int len2, char* result_of_division, char* new_arr, char* new_arr1)
{
	int counter = 0;
	if (len1 >= len2)
	{
		counter = 1;
		char* current = get_difference(arr1, arr2, len1, len2, new_arr, new_arr1);
		while (current[0] != '0')
		{
			int len_of_current = length(current);
			len1 = len_of_current;
			if (len1 == len2 && current[0] < arr2[0])
			{
				break;
			}
			
			counter++;
			for (int i = 0; i < len1; i++)
			{
				arr1[i] = current[i];
			}
			arr1[len1] = '\0';
			current = get_difference(arr1, arr2, len1, len2, new_arr, new_arr1);
		} 
	}
		int temp = 0;
		int copy_counter = counter;
		while (copy_counter != 0)
		{
			temp++;
			copy_counter = copy_counter / 10;
		}
		for (int u = temp-1; u >= 0; u--)
		{
			result_of_division[u] = (counter % 10) + '0';
			counter = counter / 10;
		}
		result_of_division[temp] = '\0';
		return result_of_division;
}