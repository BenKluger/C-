//Find the largest possible integer

#include <iostream>
using namespace std;

//COMMENTS

//My understanding was to use a brute force tactic to test every single i number as long as i is true. i goes up every number and is multiplied by 
//itself. The next issue is to check the result for the last two digits to be odd. The last digit was easy - all I had to do was modulo 2 
//to see if the overall number was odd or even. After that I tested the second to last digit by integer dividing the number by 10 - after which
//I did modulo 2 again to test if the number was odd or even. If both of these requirements weren't met, the code incremented i.
//The solution is that there is no perfect square that has the last two digits are odd, since i becomes greater than an integer's largest limit
int main()
{
	int i = 1;
	while (i)
	{
		int num = i * i;
		if (i == 65535)
		{
			cout << "There is no perfect square such that the last two digits are odd.";
			break;
		}
		else if (((num % 2) == 1) && (((num / 10) % 2) == 1))
		{
			cout << num;
			break;
		}
		else
			i++;
	}


	return (0);
}
