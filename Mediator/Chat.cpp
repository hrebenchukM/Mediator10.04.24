#include "Participant.h"

void registration(AbstractMediator* chatroom, Transport *participants[], int size)
{
	for (int i = 0; i < size; i++)
		chatroom->Register(participants[i]);
}

void chat(Transport *participants, string to, string message)
{
	participants->Send(to, message);
}