#include "stdafx.h"
#include "Pet.h"
#include <iostream>
#include <string>

using namespace std;

Pet::Pet()
{
}

string Pet::GetName(string name)
{
	this->name = name;
	return name;
}

string Pet::GetSound(string sound)
{
	this->sound = sound;
	return sound;
}

Pet::Pet(string name, string sound, string type)
{
	this->name = name;
	this->sound = sound;
	this->type = type;
}

void Pet::toString()
{
	cout << "=======================" << endl;
	cout << "Pet: " << name << endl;
	cout << "Sound: " << sound << endl;
}

Pet::~Pet()
{
}

Dog::Dog()
{
}

void Dog::SetType()
{
	cout << type << endl;
}

Dog::~Dog()
{
}

Cat::Cat()
{
}

void Cat::SetType()
{
	cout << type << endl;
}

Cat::~Cat()
{
}

Parrot::Parrot()
{
}

void Parrot::SetType()
{
	cout << type << endl;
}

Parrot::~Parrot()
{
}

Hamster::Hamster()
{
}

void Hamster::SetType()
{
	cout << type << endl;
}

Hamster::~Hamster()
{
}
