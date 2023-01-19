#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main() {
	system("chcp 1251>nul");
	srand(time(NULL));

	const int Size = 10;
	int RandArr [Size]		 = { };
	int Непарнi [Size]       = { };
	int Парнi   [Size]       = { };

	int* PtrRandArr			 = RandArr;
	int* PtrA				 = Непарнi; 	int SizeA = 0;
	int* PtrB				 = Парнi; 		int SizeB = 0;

	for (int i = 0; i < Size; i++)
		RandArr[i] = rand() % 100 - 10;
	
	for (int i = 0; i < Size; i++) {
		if (*(PtrRandArr + i) % 2)
		{
			Непарнi[SizeA] += PtrRandArr[i];
			SizeA++;
		}
		else if (*(PtrRandArr + i) != 0)
		{
			Парнi[SizeB] += PtrRandArr[i];
			SizeB++;
		}
	}	

	cout << "Непарнi: " << "\n";
	for (int i = 0; i < SizeA; i++)
		cout << Непарнi[i] << "\n";

	cout << "Парнi: \n";
	for (int i = 0; i < SizeB; i++)
		cout << Парнi[i] << "\n";

}

/*
Створіть масив
символів. Заповніть його
псевдовипадковими значеннями. На основі
заданого масива створіть два нових:

перший міститиме елементи з непарними індексами,
другий з парними.

Завдання виконайте за допомогою вказівників.
*/
