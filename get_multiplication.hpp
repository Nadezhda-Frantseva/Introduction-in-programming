#pragma once
int length(const char* arr);
char* get_sum(char* arr1, char* arr2, int len1, int len2, char* new_arr, char* new_arr1);
char* get_multiplication(char* arr1, char* arr2, int len1, int len2, char* result_of_multiplication, char* new_arr, char* new_arr1)
{   
	char current_arr1[101];
	int len_of_result = 100;
	int t = 0;
	char current = '0';
	for (int i = len2 - 1; i >= 0; i--)
	{
		for (int j = len1 - 1; j >= 0; j--)
		{
			current_arr1[j] = ((((arr2[i] - '0') * (arr1[j] - '0')) + current - '0') % 10) + '0';
			if (j != 0)
			{
				current = ((((arr2[i] - '0') * (arr1[j] - '0')) + current - '0') / 10) + '0';
			}
			if (j == 0)
			{
				if (t == 200)
				{
					break;
				}
				if (((arr2[i] - '0') * (arr1[0] - '0')) + current - '0' >= 10)
				{
					current = ((((arr2[i] - '0') * (arr1[0] - '0')) + current - '0') / 10) + '0';
					current_arr1[len1 + 1 + t] = '\0';
					for (int k = len1; k > 0; k--)
					{
						current_arr1[k] = current_arr1[k - 1];
					}
					current_arr1[0] = current;
					if (t != 0)
					{
						for (int u = len1 + 1; u < len1 + t; u++)
						{
							current_arr1[u] = '0';
						}
					}
					t++;
				}
				else
				{
					current_arr1[len1 + t] = '\0';
					for (int u = len1; u < len1 + t; u++)
					{
						current_arr1[u] = '0';
					}
					t++;
				}
			}
		}
		current = '0';
		int len_of_current_arr1 = length(current_arr1);
		char* result_of_sum = get_sum(current_arr1, result_of_multiplication, len_of_current_arr1, len_of_result, new_arr, new_arr1);
		int len_of_result_of_sum = length(result_of_sum);
		len_of_result = len_of_result_of_sum;
		for (int y = 0; y < len_of_result; y++)
		{
			result_of_multiplication[y] = result_of_sum[y];
		}
		result_of_multiplication[len_of_result] = '\0';
	}
	return result_of_multiplication;
}
