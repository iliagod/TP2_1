#include "�eroflot.h"
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

void printMenu();
void addObject(Marray<�eroflot>& aeroflots);
void changeObject(Marray<�eroflot>& aeroflots);
void deleteObject(Marray<�eroflot>& aeroflots);
void print(Marray<�eroflot>& aeroflots);
void searchObjects(Marray<�eroflot>& aeroflots);


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Marray<�eroflot> aeroflots;

	bool isExit = false;
	while (!isExit) {
		printMenu();
		int method = safeInput(0, 5);
		switch (method)
		{
		case 1:
			addObject(aeroflots);
			break;
		case 2:
			changeObject(aeroflots);
			break;
		case 3:
			deleteObject(aeroflots);
			break;
		case 4:
			print(aeroflots);
			break;
		case 5:
			searchObjects(aeroflots);
			break;
		case 0:

			isExit = true;
			break;
		}
	}

}

void printMenu() {
	cout << "1. �������� ������" << endl;
	cout << "2. �������� ������" << endl;
	cout << "3. ������� ������" << endl;
	cout << "4. ������� ������" << endl;
	cout << "5. ����� ���� �� ������ ����������" << endl;
	cout << "0. �����" << endl;
	cout << "�������� ����� ����: ";
}

void addObject(Marray<�eroflot>& aeroflots) {
	�eroflot student;
	student.inputFromConsole();
	aeroflots += student;
	aeroflots.sort();
}

void changeObject(Marray<�eroflot>& aeroflots) {
	if (aeroflots.getSize() > 0) {
		print(aeroflots);
		cout << "������� ����� ����� ��� ���������: ";
		aeroflots[safeInput(1, aeroflots.getSize()) - 1].change();
	}
	else
		cout << "������ ������ ����. ������ ��������\n";
	aeroflots.sort();
}

void deleteObject(Marray<�eroflot>& aeroflots) {
	if (aeroflots.getSize() > 0) {
		print(aeroflots);
		cout << "������� ����� ����� ��� ��������: ";
		aeroflots -= safeInput(1, aeroflots.getSize()) - 1;
	}
	else
		cout << "������ ������ ����. ������ �������\n";
	aeroflots.sort();
}

void print(Marray<�eroflot>& aeroflots) {
	if (aeroflots.getSize() == 0)
		cout << "������ ������ ����.\n";
	else {
		cout << "������ ������\n";
		for (int i = 0; i < aeroflots.getSize(); i++) {
			cout << i + 1 << ". ����\n";
			aeroflots[i].printToConsole();
		}
	}
}

void searchObjects(Marray<�eroflot>& aeroflots) {
	if (aeroflots.getSize() == 0)
		cout << "������ ������ ����\n";
	else {
		bool isPrint = false;
		cout << "������� ����� ����������, ������� ������ �����: ";
		string destination;
		getline(cin, destination);
		for (int i = 0; i < aeroflots.getSize(); i++)
			if (aeroflots[i].getDestination() == destination) {
				isPrint = true;
				aeroflots[i].printToConsole();
			}
		if (!isPrint)
			cout << "����� � ����� ������� ���������� �� �������\n";
	}
}