#include <iostream>
#include <cstdlib>
int main()
{

	setlocale(LC_ALL, "ru");
	srand(time(NULL));
/*int g;
	std::cout << "������� 1 ��� 2\n";
	std::cin >> g;
	switch (g)
	{
	case 1:
		std::cout << "\n�����";
		break;
	case 2:
		std::cout << "\n�����";
		break;
	default:
		std::cout << "��� ����� �������� ��� ��������";
		break;

	

	}


	int choose = 0;
	std::cin >> choose;
	if (choose == 1)
	{
		std::cout << "������";
	}
	else if (choose == 2)
	{
		std::cout << "������";
	}
	else
	{
		std::cout << "���";
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
/*int f = 0, g = 0;
	char star = '*';
	while (g < 8)
	{

		f = 0;
		while (f < 5)
		{
			std::cout << star ;
			std::cout << " ";
			f++;
		}
		std::cout << "\n";
		g++;
	}*/
//int rub, value, again = 0;
//	bool mainloop = true;
//	while (mainloop)
//	{
//		while (true)
//		{
//			std::cout << "\t\n������� ���������� ������ - ";
//			std::cin >> rub;
//			if (rub <= 0)
//			{
//				std::cout << "������������� ����\n";
//				continue;
//			}
//			else if (rub > 0)
//			{
//				break;
//			}
//		}
//		while (true)
//		{
//			std::cout << "�������� ������ ��� ����������� - 1(������), 2(����), 3(����), 4(�����), 5(���) - ";
//			std::cin >> value;
//			if (value < 1 or value > 5)
//			{
//				std::cout << "����� �������� ���";
//				continue;
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		if (value == 1)
//		{
//			std::cout << "�� ���� " << rub << " ������, �� �������� " << (rub - (rub * 0.05)) * 0.012 << " ��������";
//		}
//		else if (value == 2)
//		{
//			std::cout << "�� ���� " << rub << " ������, �� �������� " << (rub - (rub * 0.05)) * 0.010 << " ����";
//		}
//		else if (value == 3)
//		{
//			std::cout << "�� ���� " << rub << " ������, �� �������� " << (rub - (rub * 0.05)) * 0.085 << " ����";
//		}
//		else if (value == 4)
//		{
//			std::cout << "�� ���� " << rub << " ������, �� �������� " << (rub - (rub * 0.05)) * 37 << " �����";
//		}
//		else if (value == 5)
//		{
//			std::cout << "�� ���� " << rub << " ������, �� �������� " << (rub - (rub * 0.05)) * 1.78 << " ����";
//		}
//		while (true)
//		{
//			std::cout << "\t\n���������� �������� ������ 1(��), 2(���) - ";
//			std::cin >> again;
//			if (again == 1 )
//			{
//				break;
//			}
//			else if (again == 2)
//			{
//				mainloop = false;
//				break;
//
//			}
//			else
//			{
//				std::cout << "������������� ����";
//			
//			
//			}
//
//		}
//
//	}				
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
//	int mas[6]{};
//	int sum = 0;
//std::cout << "������� ����� ��� �������\n";
//for (int i = 0; i < 5; i++)
//{
//	std::cout << "������� " << i + 1 << "-e ����� - ";
//	std::cin >> mas[i];
//	
//}
//
//for (int i = 0; i < 5; i++)
//{
//	sum = sum + mas[i];
//}
//std::cout << "����� " << mas;
	
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

	}
	











	





	
	return 0;

}