#include "pch.h"
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

struct Str
{
	string author;
	int pages;
	int tiraj;
	int year;
};

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Введите информацию о книгах \n";
	Str books[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите имя автора: ";
		cin >> books[i].author;
		books[i].year = 1+ 1500 + rand() % 510;
		books[i].tiraj = 1 + 1000 + rand() % 100000;
		books[i].pages = 1 + 50 + rand() % 300;
		system("cls");
}
	bool itsfine = false;
	for (int i = 0; i < 5; i++)
	{
		if (books[i].pages > 150)
		{
			itsfine = true;
			cout << "автор:  " << books[i].author << endl << "год:  " << books[i].year << endl
				<< "тираж:  " << books[i].tiraj << endl << "количество страниц:  " << books[i].pages << endl << "\n\n\n";
		}
	}
	if (itsfine == false)
		cout << "все ниги имеют менее 150 страниц :( \n";

	system("pause");
	return 0;
}

