#include <iostream>
#include <string>
#include "Dir.h"
#include <fstream>
#include <Windows.h>
#include <shared_mutex>
using namespace std;

void Logger::displayMessage(const std::string& dialog, const std::string& imay) {
	setlocale(LC_ALL, "ru");

	string path = "myfile.txt";

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);
	shared_mutex.lock();
	if (!fs.is_open())
	{
		cout << "Ошибка" << endl;

	}

	fs << "Сообщение от " << imay << ":\n" << dialog << "\n";
	fs.close();
	shared_mutex.unlock();
}