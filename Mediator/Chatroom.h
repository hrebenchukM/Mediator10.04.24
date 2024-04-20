#pragma once
#include "AbstractChatroom.h"
#include "Participant.h"
#include <map>
#include <string>
using namespace std;

// The 'ConcreteMediator' class
class Mediator: public AbstractMediator
{
	map<string, Transport*> transports;
public:
	void Register(Transport* transport)
	{
		auto res = transports.find(transport->GetName());
		if (res == transports.end())
		{
			transports[transport->GetName()] = transport;
		}
		transport->SetMediator(this);
	}
	void Send(string from, string to, string message) override
	{
		Transport* transport = transports[to];
		if (transport != nullptr)
		{
			transport->Receive(from, message);
		}
	}
};
