#pragma once
int length(const char* arr);
char* get_difference(char* arr1, char* arr2, int len1, int len2, char* new_arr, char* new_arr1)
{
	char current = '0'; // current = 1 in mind
	char copy_arr1[50];
	char copy_arr2[50];
	int copy_len1 = len1;
	int copy_len2 = len2;
	for (int i = 0; i < len1; i++)
	{
		copy_arr1[i] = arr1[i];
	}
	copy_arr1[len1] = '\0';
	for (int i = 0; i < len2; i++)
	{
		copy_arr2[i] = arr2[i];
	}
	copy_arr2[len2] = '\0';
	
		if (len1 >= len2)
		{
			if (len1 == len2)
			{
				int br = 0;
				int p = 0;
				while (p < len1)
				{
					if (arr1[p] == arr2[p])
					{
						br++;
					}

					p++;
				}
				if (br == len1)
				{
					new_arr1[0] = '0';
					new_arr1[1] = '\0';
					return new_arr1;
				}
			}
			new_arr[len1] = '\0';
			for (int i = len1 - 1; i > len1 - 1 - len2; i--)
			{
				if (0 <= ((copy_arr1[i] - '0') - (copy_arr2[len2 - 1] - '0')) && ((copy_arr1[i] - '0') - (copy_arr2[len2 - 1] - '0')) < 10) // because '0' = 48 and arr1[i] - '0' = '5'(for example) - '0' = 5 (integer)
				{
					new_arr[i] = ((copy_arr1[i] - '0') - (copy_arr2[len2 - 1] - '0') + '0');
					len1--;
					len2--;
				}

				else if (((copy_arr1[i] - '0') - (copy_arr2[len2 - 1] - '0')) < 0)
				{
					new_arr[i] = (((copy_arr1[i] - '0') + 10) - (copy_arr2[len2 - 1] - '0') - (current - '0')) + '0';
					if (copy_arr1[i - 1] != '0')
					{
						copy_arr1[i - 1] = (arr1[i - 1] - 1);
					}
					current = '1';
					len1--;
					len2--;
				}
			}
			for (int j = len1 - 1 - len2; j >= 0; j--)
			{
				if (copy_arr1[j] == ' ')
				{
					len1--;
					break;
				}
				if ((copy_arr1[j] - '0') - (current - '0') < 0)
				{
					new_arr[j] = copy_arr1[j];
					current = '1';
				}
				else if (0 <= (copy_arr1[j] - '0') - (current - '0') && (copy_arr1[j] - '0') - (current - '0') < 10)
				{
					new_arr[j] = copy_arr1[j];
					current = '0';
				}
				else if (((copy_arr1[j] - '0') + (current - '0')) >= 10)
				{
					new_arr[j] = ((copy_arr1[j] - '0') - (current - '0') + 10) + '0';
					current = '1';
				}
			}
			int len_of_new_arr = length(new_arr);
			int k = 0;
			int time = 0;
			while (new_arr[k] == '0')
			{
				k++;
				time++;
			}
			int t = time;
			for (int i = 0; i <= copy_len1 - time; i++)
			{
				new_arr1[i] = new_arr[t];
				t++;
			}
			new_arr1[copy_len1 - time + 1] = '\0';
			if (new_arr1[0] == '\0')
			{
				new_arr1[0] = '0';
				new_arr1[1] = '\0';
			}
			return new_arr1;
		}
	
	if (len2 > len1)
	{
		new_arr1[0] = '0';
		new_arr1[1] = '\0';
		return new_arr1;
	}
}


