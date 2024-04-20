#include <iostream>
#include <map>
#include <string>
#include "Participant.h"
#include "Chatroom.h"
#include "Airplanes.h"

using namespace std;
/*
	Mediator (Посредник) позволяет группе объектов взаимодействовать, не ссылаясь напрямую друг на друга, а используя промежуточный объект.
	Этот объект передаёт запросы от каждого участника группы всем остальным или части группы, своеобразно координируя их действия.
	В целом вариант передачи запроса между членами группы посредством Медиатора определяется конкретной поставленной задачей.
	Каждый участник группы знает, кто координирует его взаимодействие с другими подобными объектами, а медиатор инкапсулирует механизм регистрации участников группы.
	Также Медиатор инкапсулирует протокол общения между участниками группы.
*/

void registration(AbstractMediator* chatroom, Transport *participants[], int size);
void chat(Transport *participants, string to, string message);

int main()
{
	AbstractMediator* chatroom = new Mediator();

	Transport * transports[5] = {
		new Airplane1("George"),
		new Airplane1("Paul"),
		new Airplane2("Ringo"),
		new Airplane2("John"),
		new Airplane3("Yoko")
	};
	registration(chatroom, transports, 5);

	chat(transports[4], "John", "Hi John!");
	chat(transports[1], "Ringo", "All you need is love");
	chat(transports[2], "George", "My sweet Lord");
	chat(transports[1], "John", "Can't buy me love");
	chat(transports[3], "Yoko", "My sweet love");

	delete chatroom;
	for (int i = 0; i < 5; i++)
		delete transports[i];

	system("pause");
}