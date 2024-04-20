#pragma once

#include "Participant.h"

#include <iostream>
using namespace std;

//ConcreteColleague class
class Airplane1 : public Transport
{
public:
	Airplane1(string name) : Transport(name) {}
	void Receive(string from, string message) override
	{
		cout << "To a Airplane1: ";
		Transport::Receive(from, message);
	}
};


//ConcreteColleague class
class Airplane2 : public Transport
{
public:
	Airplane2(string name) : Transport(name) {}
	void Receive(string from, string message) override
	{
		cout << "To a Airplane2: ";
		Transport::Receive(from, message);
	}
};


//ConcreteColleague class
class Airplane3 : public Transport
{
public:
	Airplane3(string name) : Transport(name) {}
	void Receive(string from, string message) override
	{
		cout << "To a Airplane3: ";
		Transport::Receive(from, message);
	}
};


