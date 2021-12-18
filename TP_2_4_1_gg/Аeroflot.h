#pragma once
#include "helper.h"
#include "Marray.h"
using namespace std;

class �eroflot
{
private:
	string destination, type, number;
public:
	�eroflot();
	�eroflot(string destination, string type, string number);
	�eroflot(const �eroflot& student);
	~�eroflot();

	void inputFromConsole();
	void printToConsole();
	void change();

	string getDestination() { return destination; }
	void setDestination(string destination) { this->destination = destination; }

	string getType() { return type; }
	void setType(string type) { this->type = type; }

	string getNumber() { return number; }
	void setNumber(string number) { this->number = number; }

	�eroflot& operator=(const �eroflot& student);
	bool operator>(const �eroflot& aeroflot);
};

