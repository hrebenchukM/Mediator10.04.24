#pragma once
#include <string>
using namespace std;

class Transport;

// The 'Mediator' abstract class
class AbstractMediator abstract
{
public:
	virtual void Register(Transport* participant) abstract;
	virtual void Send(string from, string to, string message) abstract;
};
