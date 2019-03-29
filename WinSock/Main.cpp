#include <iostream>
#include <WinSock2.h>
#include <WS2tcpip.h>

#pragma comment(lib,"Ws2_32.lib")

int main()
{
	int choice;
	std::cout << "Press 1 to act as server, press 2 to act as client." << std::endl;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		std::cout << "Server Selected" << std::endl;
		//do server stuff
		break;
	case 2:
		std::cout << "Client Selected" << std::endl;
		//do client stuff
		break;
	}
}