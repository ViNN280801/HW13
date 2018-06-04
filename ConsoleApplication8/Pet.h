#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pet
{
private:
	string name;
	string sound;
	string type;
public:
	Pet();

	string GetName(string name);
	string GetSound(string sound);
	Pet(string name, string sound, string type);
	virtual void toString();

	virtual ~Pet();
};

class Dog : public Pet
{
protected:
	const string type = "Canis lupus familiaris";
public:
	Dog();

	virtual void SetType();

	virtual ~Dog();
};

class Cat : public Pet
{
protected:
	const string type = "Felis";
public:
	Cat();

	virtual void SetType();

	virtual ~Cat();
};

class Parrot : public Pet
{
protected:
	const string type = "Psittacidae";
public:
	Parrot();

	virtual void SetType();

	virtual ~Parrot();
};

class Hamster : public Pet
{
protected:
	const string type = "Cricetinae";
public:
	Hamster();

	virtual void SetType();

	virtual ~Hamster();
};