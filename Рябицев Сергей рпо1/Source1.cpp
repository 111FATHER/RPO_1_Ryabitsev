#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <iomanip>

/*

���_�������� ���_�������(��������_�������)
{

	���� �������


}

*/

//float plus(float num, float num1)
//{
//	return num + num1;
//}
//float minus(float num, float num1)
//{
//	return num - num1;
//}
//float del(float num, float num1)
//{
//	return num / num1;
//}
//float um(float num, float num1)
//{
//	return num * num1;
//}

//void PrintArray(int mass1[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << mass1[i] << " ";
//	}
//	std::cout << "\n";
//}
//void PrintArray(char mass2[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << mass2[i] << " ";
//	}
//	std::cout << "\n";
//}
//void PrintArray(bool mass3[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << mass3[i] << " ";
//	}
//	std::cout << "\n";
//}
//
//void SetArray(int mass1[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		mass1[i] = rand() % 100;
//	}
//	PrintArray(mass1);
//}
//void SetArray(char mass2[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		mass2[i] = rand() % 58 + 65;
//	}
//	PrintArray(mass2);
//}
//void SetArray(bool mass3[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		mass3[i] = rand() % 2;
//	}
//	PrintArray(mass3);
//}
//
//template<typename T, typename yes>
//T Sum(T first, yes second)
//{
//	return (yes)(first + second);
//}
//
//int Fak(int n)
//{
//	if (n < 0)
//	{
//		return 0;
//	}
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fak(n - 1);
//	}
//}

/*	float choose, num, num1;
	std::cout << "�������� ������ ������� 1(+), 2(-), 3(/), 4(*) - ";
	std::cin >> choose;

		while (true)
		{
			if (choose < 1 || choose > 4)
			{
				std::cout << "������\t\n";
				std::cout << "������� ������ ����� ������� - ";
				std::cin >> choose;
			}
			else
			{
				break;
			}
		}
		std::cout << "������� ������ ����� - ";
		std::cin >> num;
		std::cout << "������� ������ ����� - ";
		std::cin >> num1;
		if (choose == 1)
		{
			std::cout << "���� ����� - " << plus(num, num1);
		}
		else if (choose == 2)
		{
			std::cout << "���� ����� - " << minus(num, num1);
		}
		else if (choose == 3)
		{
			while (true)
			{
				if (num1 == 0)
				{
					std::cout << "������� �� 0 ����������, ������� ��� ��� ������ ����� - ";
					std::cin >> num1;
				}
				else
				{
					break;
				}
			}
			std::cout << "���� ����� - " << del(num, num1);
		}
		else if (choose == 4)
		{
			std::cout << "���� ����� - " << um(num, num1);
		}*/

/*int one, two, choose;
	std::cout << "������� ������ �����: \n";
	std::cin >> one;
	std::cout << "�������� 1(+), 2(-), 3(*), 4(/)\n";
	std::cin >> choose;
	std::cout << "������� ������ �����: \n";
	std::cin >> two;
	
	if (choose == 1)
	{
		std::cout << one + two;
	}
	else if (choose == 2)
	{
		std::cout << one - two;
	}
	else if (choose == 3)
	{
		std::cout << one * two;
	}
	else if (choose == 4)
	{
		std::cout << one / two;
	}
	else
	{
		std::cout << "��� ������ ��������";
	}*/

/*int rub, value, again = 0;
	bool mainloop = true;
	while (mainloop)
	{
		while (true)
		{
			std::cout << "\t\n������� ���������� ������ - ";
			std::cin >> rub;
			if (rub <= 0)
			{
				std::cout << "������������� ����\n";
				continue;
			}
			else if (rub > 0)
			{
				break;
			}
		}
		while (true)
		{
			std::cout << "�������� ������ ��� ����������� - 1(������), 2(����), 3(����), 4(�����), 5(���) - ";
			std::cin >> value;
			if (value < 1 or value > 5)
			{
				std::cout << "����� �������� ���";
				continue;
			}
			else
			{
				break;
			}
		}

		if (value == 1)
		{
			std::cout << "�� ���� " << rub << " ������, �� �������� " << (rub - (rub * 0.05)) * 0.012 << " ��������";
		}
		else if (value == 2)
		{
			std::cout << "�� ���� " << rub << " ������, �� �������� " << (rub - (rub * 0.05)) * 0.010 << " ����";
		}
		else if (value == 3)
		{
			std::cout << "�� ���� " << rub << " ������, �� �������� " << (rub - (rub * 0.05)) * 0.085 << " ����";
		}
		else if (value == 4)
		{
			std::cout << "�� ���� " << rub << " ������, �� �������� " << (rub - (rub * 0.05)) * 37 << " �����";
		}
		else if (value == 5)
		{
			std::cout << "�� ���� " << rub << " ������, �� �������� " << (rub - (rub * 0.05)) * 1.78 << " ����";
		}
		while (true)
		{
			std::cout << "\t\n���������� �������� ������ 1(��), 2(���) - ";
			std::cin >> again;
			if (again == 1 )
			{
				break;
			}
			else if (again == 2)
			{
				mainloop = false;
				break;

			}
			else
			{
				std::cout << "������������� ����";
			
			
			}

		}

	}*/	

/*
			�������

			���_������ ���_�������[������_�������];
			int arr[5]; ��� int arr[5]{3,4,1}; (���� �������� int arr [5]{}; ����� 0 � ������)
			arr[0] = 30;
			arr[1] = 56;
			std::cout << arr[0] << " " << arr[size - 1];
			const in size = 5;
			int arr[size];

		
		*/	

/*int mas[6]{};
	int sum = 0;
std::cout << "������� ����� ��� �������\n";
for (int i = 0; i < 5; i++)
{
	std::cout << "������� " << i + 1 << "-e ����� - ";
	std::cin >> mas[i];
	
}

for (int i = 0; i < 5; i++)
{
	sum = sum + mas[i];
}
std::cout << "����� " << mas;
int mas[10]{};
	for (int i = 0; i < 10; i++)
		{
		mas[i] = rand() % 29 - 15;
		std::cout << mas[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		if (mas[i] >= 0);
		{
			std::cout << mas[i] << " ";
		}
	}
	std::cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		if (mas[i] < 0)
		{
			std::cout << mas[i] << " ";
		}
		std::cout << "k";
	 }*/

/*const int col = 5;
	const int row = 3;
	int arr[row][col];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = rand() % 10 + 1;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";

	int arr2[row][col]{ {},{},{} };
	int sum1 = 0, sum2 = 0, kol = 0, str = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << "\t";
			sum1 = sum1 + arr[i][j];
		}
		std::cout << "\t|\t" << sum1 << std::endl;
		sum1 = 0;
	}
	std::cout << "----------------------------------------------------------------\n";
	sum1 = 0;
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			sum1 = sum1 + arr[i][j];
		}
		std::cout << sum1 << "\t";
		str = str + sum1;
		sum1 = 0;
	}
	std::cout << "\t|\t" << str << "\n";*/

//�� ��
//inline ������� � ��� �������

/*int mass1[5]{};
	SetArray(mass1);
	char mass2[5]{};
	SetArray(mass2);
	bool mass3[5]{};
	SetArray(mass3);

	


	std::cout << Sum(3, 4) << Sum(4.3, 5.4);

	std::cout << Fak(5);*/






int main()
{

	//setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));


std::cout << "_________________________"
std::cout << "������� 1"

	int t, s;
	std::cout << "������� ���������� � ����������� - ";
	std::cin >> s;
	std::cout << "������� ����� � ������� - ";
	std::cin >> t;
	std::cout << "�������� - " << s * 60 / t << " ��/�";

std::cout << "_________________________"
std::cout << "������� 2"

	int start, end, duration, total;
	int hour1, min1, sec1, hour2, min2, sec2;
	std::cout << "������� ����� ������ (����, ������, �������) - \n";
	std::cin >> hour1 >> min1 >> sec1;
	std::cout << "������� ����� ��������� (����, ������, �������) - \n";
	std::cin >> hour2 >> min2 >> sec2;

	start = hour1 * 60 + sec1 / 60 + min1;
	end = hour2 * 60 + sec1 / 60 + min2;
	duration = end - start;

	if (duration <= 0)
	{
		std::cout << "������";
	}
	else
	{
		total = duration * 2;
		std::cout << "��������� ������� - " << total << " ������\n";
	}
	
std::cout << "_________________________"
std::cout << "������� 3"

	double liters, total1, total2, total3;
	double distance, consumption, price1, price2, price3;
	std::cout << "������� ���������� � ����������� - ";
	std::cin >> distance;
	std::cout << "������� ������ ������� �� 100 ��: ";
	std::cin >> consumption;
	std::cout << "������� ��������� �� 1 ���� ������� ���� ������� - ";
	std::cin >> price1;
	std::cout << "������� ��������� �� 1 ���� ������� ���� ������� - ";
	std::cin >> price2;
	std::cout << "������� ��������� �� 1 ���� �������� ���� ������� - ";
	std::cin >> price3;

	liters = distance * consumption / 100;
	total1 = liters * price1;
	total2 = liters * price2;
	total3 = liters * price3;

	std::cout << "\n         ������������� �������\n";
	std::cout << "------------------------------------------\n";
	std::cout << "��� ������� | ��������� ������� � ������\n";
	std::cout << "------------------------------------------\n";
	std::cout << "1           | " << total1 << "\n";
	std::cout << "2           | " << total2 << "\n";
	std::cout << "3           | " << total3 << "\n";
	std::cout << "------------------------------------------\n";

	return 0;


}








