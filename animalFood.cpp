/*
*Kelsey Glasscock
*C++ Summer
*Jin Yoo
* HW1 Q3
*/
#include <iostream>

using namespace std;

int main() {

	//3 rows for num of monkeys, 7 days for total week
	double foodLbs[3][7];
	//variables for counters
	int i = 0, j = 0;
	//variables for outputs
	double aveFamIntake = 0, lowFood = 20, highFood = 0;
	double food = 0;

	for (i = 0; i < 7; i++)
	{
		//asks user to enter information
		cout << "Please input how many pounds of food monkey " << j + 1 << " ate on day " << i + 1 << ": ";
		cin >> foodLbs[j][i];

		cout << "Please input how many pounds of food monkey " << j + 2 << " ate on day " << i + 1 << ": ";
		cin >> foodLbs[j + 1][i];

		cout << "Please input how many pounds of food monkey " << j + 3 << " ate on day " << i + 1 << ": ";
		cin >> foodLbs[j + 2][i];
	}
	//this should make the base case set to the first input
	//lowFood = foodLbs[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 7; j++)
		{
			//calculates the average here and in output statement
			aveFamIntake += foodLbs[j][i];

			//checks for the highest and lowest food intakes
			if (foodLbs[j][i] < lowFood) {
				lowFood = foodLbs[j][i];
			}

			else if (foodLbs[j][i] > highFood) {
				highFood = foodLbs[j][i];
			}
		}
	}

	//test output to make sure data correctly entered into arrays
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 7; j++)
		{
			cout << foodLbs[i][j] << " ";
		}
		cout << endl;
	}

	//cannot figure out why the least amt of food will not display properly in my test cases.
	//output test cases
	cout << "\n\nAverage amount of food eaten per day by all monkeys: " << (aveFamIntake / 7);
	cout << "\n\nLeast amount of food eaten during the week by any one monkey: " << lowFood;
	cout << "\n\nGreatest amount of food eaten during the week by any one monkey: " << highFood << endl;

	system("pause");
	return 0;
}
