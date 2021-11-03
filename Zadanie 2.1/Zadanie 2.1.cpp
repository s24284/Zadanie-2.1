// Zadanie 2.1.cpp Program do obliczania szeregu//

#include <iostream>
#include <vector> //dodane, żeby używać tablicy vector

int main()
{
	int koniecszeregu; //liczba podana przez użytkownika
	int sumaszeregu = 0; //ostatnia wartość, czyli suma końcowa wszystkich składowych szeregu

	do {
		std::cout << "Podaj liczbe calkowita dodatnia, do ktorej program ma liczyc szereg: \n";
		std::cin >> koniecszeregu; //użytkownik podaje, do której liczby ma liczyć szereg

		if (koniecszeregu < 1) //reaguje, gdy poda się liczbę mniejszą lub równą 0 i prosi jeszcze raz o podanie liczby
		{
			std::cout << "Nie podales liczby z zakresu.\n";

		}
	}
	while (koniecszeregu < 1);

	std::vector<int> linieszeregu(koniecszeregu);	//tworzy tablice, aby przechowywać do późniejszego wypisania w odpowiedzi

	for (int i = 1; i <= koniecszeregu; i++)

	{
		int sumaliniiszeregu = 0;
		for (int j = 1; j <= i; j++)
		{
			std::cout << j;
			sumaliniiszeregu += j;
			if (j != i) 
				std::cout << " + ";
		}
		std::cout << " = " << sumaliniiszeregu << "\n";

		linieszeregu [i-1] = (sumaliniiszeregu);
		sumaszeregu += sumaliniiszeregu;
	}

	std::cout << "\nSuma szeregu: ";

	for (int i = 1; i <= koniecszeregu; i++)
	{
		std::cout << linieszeregu [i-1];
		if (koniecszeregu != i)
			std::cout << " + ";
	}
	std::cout << " = " << sumaszeregu << "\n";

	return 0;
}

