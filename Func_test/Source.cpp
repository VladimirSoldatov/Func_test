#include<iostream>
using namespace std;

void init_massive(int massive[], int size) 
{
	for (int i = 0; i < size; i++)
	{
		massive[i] = -1;
	}
}

void random_massive(int massive[], int size)
{
	int test[8];
	int count = 1;
	int old_count = 3;
	int number;
	number = rand() % size;
	massive[0] = number;
	test[0] = number;
	for (; ;)
	{
		if (count == size + 1)
		{
			break;
		}
	
		number = rand() % size;
		for (int i = 0; i < count; i++)
		{

		 if (massive[i] == number)
			{
				//count++;
				number = rand() % size;
				i = 0;
				continue;

			}

		}
		if (count == old_count)
		{
			massive[count - 1] = number;
			test[count - 1] = number;
			count++;

		}
		old_count = count;

	}
}

void show_massive(int massive[], int size) 
{
	for (int i = 0; i < 8; i++)
	{
		cout << massive[i] << "\t";
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int mas[8];
	init_massive(mas, 8);
	random_massive(mas, 8);
	show_massive(mas, 8);
	

	//while()
	return 0;
}