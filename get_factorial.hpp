#pragma once
int get_factorial(int number)
{
	if (number < 0)
	{
		return -1;
	}
	if (number == 0)
	{
		return 1;
	}
	else 
	{
		return number * (get_factorial(number - 1));
	}


}