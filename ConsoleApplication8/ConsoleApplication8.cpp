#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <clocale>
#include "Pet.h"

using namespace std;

int main()
{
	srand(__time64_t(NULL));
	setlocale(LC_ALL, "rus");

	Dog Ice;
	Cat Fabby;
	Parrot Archi;
	Hamster Grey;

	cout << "Pets: " << endl;
	cout << "*************************" << endl << endl;
	cout << "Dog: " << endl;
	Ice.GetName("Ice");
	Ice.GetSound("Barking.");
	Ice.toString();
	cout << "Type: ";
	Ice.SetType();
	cout << "=======================" << endl;

	cout << endl << endl;
	cout << "Cat: " << endl;
	Fabby.GetName("Fabby");
	Fabby.GetSound("Meowing");
	Fabby.toString();
	cout << "Type: ";
	Fabby.SetType();
	cout << "=======================" << endl;

	cout << endl << endl;
	cout << "Parrot: " << endl;
	Archi.GetName("Archi");
	Archi.GetSound("Repeating all sounds he could heard");
	Archi.toString();
	cout << "Type: ";
	Archi.SetType();
	cout << "=======================" << endl;

	cout << endl << endl;
	cout << "Hamster: " << endl;
	Grey.GetName("Grey");
	Grey.GetSound("Chirping");
	Grey.toString();
	cout << "Type: ";
	Grey.SetType();
	cout << "=======================" << endl;

	cout << endl << endl;
	cout << "*************************" << endl << endl;
	cout << endl << endl;

	return EXIT_SUCCESS;
}