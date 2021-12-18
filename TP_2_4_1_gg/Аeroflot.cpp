#include "�eroflot.h"

�eroflot::�eroflot() : destination("�� ������"), type("�� ������"), number("�� ������")
{
	cout << "������ ����������� �eroflot" << endl;
}

�eroflot::�eroflot(string destination, string type, string number) :
	destination(destination), type(type), number(number)
{
	cout << "������ ����������� �eroflot" << endl;
}

�eroflot::�eroflot(const �eroflot& aeroflot) :
	destination(aeroflot.destination), type(aeroflot.type), number(aeroflot.number)
{
	cout << "������ ����������� ����������� �eroflot" << endl;
}

�eroflot::~�eroflot()
{
	cout << "������ ���������� �eroflot" << endl;
}

void �eroflot::inputFromConsole()
{
	cout << "������� ����� ����������: ";
	getline(cin, destination);
	cout << "������� ����� �����: ";
	getline(cin, number);
	cout << "������� ��� ��������: ";
	getline(cin, type);
}

void �eroflot::printToConsole()
{
	cout << "����� ����������: " << destination << endl;
	cout << "����� �����: " << number << endl;
	cout << "��� ��������: " << type << endl;
}

void �eroflot::change()
{
	cout << "������� ����� ����� ����������: ";
	getline(cin, destination);
	cout << "������� ����� ����� �����: ";
	getline(cin, number);
	cout << "������� ����� ��� ��������: ";
	getline(cin, type);
}

�eroflot& �eroflot::operator=(const �eroflot& aeroflot) {
	if (this == &aeroflot)
		return *this;
	destination = aeroflot.destination;
	type = aeroflot.type;
	number = aeroflot.number;
	return *this;
}

bool �eroflot::operator>(const �eroflot& aeroflot) {
	return number > aeroflot.number;
}