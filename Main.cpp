#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main() {
	//system("chcp 1251>nul");
	srand(time(NULL));

	const int Size = 10;
	char RandArr[Size] = { };
	char Непарнi[Size] = { };
	char Парнi[Size] = { };

	char* PtrRandArr = RandArr;
	char* PtrA = Непарнi; 	int SizeA = 0;
	char* PtrB = Парнi; 	int SizeB = 0;

	for (int i = 0; i < Size; i++)
		RandArr[i] = rand() % 85 + 40;

	for (int i = 0; i < Size; i++) {
		if (*(PtrRandArr + i) % 2) {
			Непарнi[SizeA] += *(PtrRandArr + i);
			SizeA++;
		}
		else {
			Парнi[SizeB] += *(PtrRandArr + i);
			SizeB++;
		}
	}
	cout << "Псевдовипадковi значення: " << "\n";
	for (int i = 0; i < Size; i++)
		cout << RandArr[i] << " ";

	cout << "\nНепарнi значення: " << "\n";
	for (int i = 0; i < SizeA; i++)
		cout << *(Непарнi + i) << " ";

	cout << "\nПарнi значення: " << "\n";
	for (int i = 0; i < SizeB; i++)
		cout << *(Парнi + i)<< " ";

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
