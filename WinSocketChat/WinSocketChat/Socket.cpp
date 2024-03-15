#include "Socket.h"

Socket::Socket()
{
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != NO_ERROR)
	{
		cerr << "WSAStartup error" << endl;
		system("PAUSE");
		WSACleanup();
		exit(10);
	}
	_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (_socket == INVALID_SOCKET)
	{
		cerr << "Socket creation error" << endl;
		system("PAUSE");
		WSACleanup();
		exit(11);
	}
}

Socket::~Socket()
{
	WSACleanup();
}

bool Socket::SendData(char* buffer)
{
	send(_socket, buffer, strlen(buffer), 0);
	return true;
}

bool Socket::ReceiveData(char* buffer, int size)
{
	INT i = recv(_socket, buffer, size, 0);
	return true;
}

void Socket::CloseConnection()
{
	closesocket(_socket);
}

void Socket::SendDataMessage()
{
	CHAR message[MAXSTRLEN]{};
	cout << "Enter message: ";
	cin.ignore();
	cin.get(message, MAXSTRLEN);
	SendData(message);
}
