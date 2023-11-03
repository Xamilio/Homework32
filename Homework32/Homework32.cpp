

#include <iostream>
#include <string>
#include <cstring>
#include <clocale>
#include <Windows.h>
using namespace std;

//1) Используя два указателя на массив целых чисел, скопировать один массив в другой.Использовать в программе арифметику указателей для продвижения по массиву,
//а также оператор разыменования.
//2) Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
//3) Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы во втором массиве элементы находились в обратном порядке.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
//4) Написать функцию, которая получает указатель на массив и его размер и возвращает сумму и произведение его элементов в двух параметрах - указателях.
//5) Написать функцию, которая получает указатель на массив и его размер и возвращает количество отрицательных, положительных и нулевых элементов массива с помощью параметров - указателей.
//6) Написать функцию, которая принимает массив и с помощью параметров - указателей возвращает 2 результата - индекс максимального элемента и его значение.

//1
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	const int size = 5;
//	int m1[size] = { 1, 2, 3, 4 ,5 };
//	int m2[size];
//	int* p1 = m1;
//	int* p2 = m2;
//
//	for (int i = 0; i < size; i++)
//	{
//		*p2 = *p1;
//		p1++;
//		p2++;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << m2[i] << " ";
//	}
//	
//
//}

//2
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	const int size = 5;
//	int m1[size] = { 1, 2, 3, 4 ,5 };
//	int* p1 = m1;
//	int* p2 = m1;
//	p2 = p2 + size - 1;
//
//	for (int i = 0; i < size / 2; i++)
//	{
//		int k = *p2;
//		*p2 = *p1;
//		*p1 = k;
//		p1++;
//		p2--;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << m1[i] << " ";
//	}
//
//
//}

//3
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	const int size = 5;
//	int m1[size] = { 1, 2, 3, 4 ,5 };
//	int m2[size];
//	int* p1 = m1;
//	int* p2 = m2;
//	p2 = p2 + size - 1;
//
//	for (int i = 0; i < size; i++)
//	{
//		*p2 = *p1;
//		p1++;
//		p2--;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << m2[i] << " ";
//	}
//
//
//}


//4
//void ss(int* p1, int size, int* s, int* m) 
//{
//	*s = 0;
//	*m = 1;
//	for (int i = 0; i < size; i++)
//	{
//		*s = *s + p1[i];
//		*m = *m * p1[i];
//	}
//}
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	const int size = 5;
//	int m1[size] = { 1, 2, 3, 4 ,5 };
//	int* p1 = m1;
//	int s;
//	int m;
//	ss(p1, size, &s, &m);
//	cout << "Сумма: " << s << "\nПроизведение: " << m;
//}

//5
//void ss(int* p1, int size, int* o, int* p, int* n)
//{
//	*o = 0;
//	*p = 0;
//	*n = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (p1[i] < 0)
//		{
//			*o = *o + 1;
//		}
//		if (p1[i] > 0)
//		{
//			*p = *p + 1;
//		}
//		if (p1[i] == 0)
//		{
//			*n = *n + 1;
//		}
//		
//	}
//}
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	const int size = 5;
//	int m1[size] = { 0, -2, 3, -4 ,5 };
//	int* p1 = m1;
//	int o;
//	int p;
//	int n;
//	ss(p1, size, &o, &p, &n);
//	cout << "Отрецательных: " << o << "\nПоложительных: " << p << "\nНулей: " << n;
//}


//6
void ss(int* p1, int size, int* max, int* min, int* z1, int* z2)
{
	*max = p1[1];
	*min = p1[1];
	*z1 = 0;
	*z2 = 0;
	for (int i = 0; i < size; i++)
	{
		if (p1[i] > *max)
		{
			*max = p1[i];
			*z1 = i;
		}
		if (p1[i] < *min)
		{
			*max = p1[i];
			*z2 = i;
		}

	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 5;
	int m1[size] = { 0, -2, 3, -4 ,5 };
	int* p1 = m1;
	int max;
	int min;
	int z1;
	int z2;
	ss(p1, size, &max, &min, &z1, &z2);
	cout << "Максимальное значение: " << max << " Его индекс: " << z1 << "\nМинимальное значение: " << min << " Его индекс: " << z2;
}