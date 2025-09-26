#include <iostream>
#include <cstdlib>
int main()
{

	setlocale(LC_ALL, "ru");
	srand(time(NULL));
/*int g;
	std::cout << "введите 1 или 2\n";
	std::cin >> g;
	switch (g)
	{
	case 1:
		std::cout << "\nФарит";
		break;
	case 2:
		std::cout << "\nИгорь";
		break;
	default:
		std::cout << "Под таким символом нет значения";
		break;

	

	}


	int choose = 0;
	std::cin >> choose;
	if (choose == 1)
	{
		std::cout << "Кирилл";
	}
	else if (choose == 2)
	{
		std::cout << "Демьян";
	}
	else
	{
		std::cout << "ввв";
	}*/	
/*int one, two, choose;
	std::cout << "Введите первое число: \n";
	std::cin >> one;
	std::cout << "Действие 1(+), 2(-), 3(*), 4(/)\n";
	std::cin >> choose;
	std::cout << "Введите второе число: \n";
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
		std::cout << "нет такого действия";
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
//			std::cout << "\t\nВведите количество рублей - ";
//			std::cin >> rub;
//			if (rub <= 0)
//			{
//				std::cout << "Некорркектный ввод\n";
//				continue;
//			}
//			else if (rub > 0)
//			{
//				break;
//			}
//		}
//		while (true)
//		{
//			std::cout << "Выберите валюту для конвертации - 1(Доллар), 2(Евро), 3(Юань), 4(Фарит), 5(Йен) - ";
//			std::cin >> value;
//			if (value < 1 or value > 5)
//			{
//				std::cout << "Такой операции нет";
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
//			std::cout << "За ваши " << rub << " рублей, вы получите " << (rub - (rub * 0.05)) * 0.012 << " долларов";
//		}
//		else if (value == 2)
//		{
//			std::cout << "За ваши " << rub << " рублей, вы получите " << (rub - (rub * 0.05)) * 0.010 << " евро";
//		}
//		else if (value == 3)
//		{
//			std::cout << "За ваши " << rub << " рублей, вы получите " << (rub - (rub * 0.05)) * 0.085 << " Юань";
//		}
//		else if (value == 4)
//		{
//			std::cout << "За ваши " << rub << " рублей, вы получите " << (rub - (rub * 0.05)) * 37 << " Фарит";
//		}
//		else if (value == 5)
//		{
//			std::cout << "За ваши " << rub << " рублей, вы получите " << (rub - (rub * 0.05)) * 1.78 << " Йена";
//		}
//		while (true)
//		{
//			std::cout << "\t\nПроизвести операцию заного 1(да), 2(нет) - ";
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
//				std::cout << "некоррекстный ввод";
//			
//			
//			}
//
//		}
//
//	}				
/*
			МАССИВЫ

			тип_данных имя_массива[размер_массива];
			int arr[5]; или int arr[5]{3,4,1}; (если написать int arr [5]{}; будет 0 в каждой)
			arr[0] = 30;
			arr[1] = 56;
			std::cout << arr[0] << " " << arr[size - 1];
			const in size = 5;
			int arr[size];

		
		*/	
//	int mas[6]{};
//	int sum = 0;
//std::cout << "Введите числа для массива\n";
//for (int i = 0; i < 5; i++)
//{
//	std::cout << "Введите " << i + 1 << "-e число - ";
//	std::cin >> mas[i];
//	
//}
//
//for (int i = 0; i < 5; i++)
//{
//	sum = sum + mas[i];
//}
//std::cout << "сумма " << mas;
	
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