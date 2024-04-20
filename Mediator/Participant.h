#pragma once
#include "AbstractChatroom.h"

using namespace std;
#include <iostream>
// The 'Colleague' abstract class
class Transport abstract
{
	AbstractMediator* mediator;
	string name;
public:
	Transport(string name)
	{
		this->name = name;
	}
	string GetName()
	{
		return name;
	}
	void SetName(string name)
	{
		this->name = name;
	}
	AbstractMediator* GetMediator()
	{
		return mediator;
	}
	void SetMediator(AbstractMediator* chatroom)
	{
		this->mediator = chatroom;
	}


	void Send(string to, string message)
	{
		mediator->Send(name, to, message);
	}
	virtual void Receive(string from, string message)
	{
		cout << from << " to " << name << ": '" << message << "'" << endl;
	}
};
