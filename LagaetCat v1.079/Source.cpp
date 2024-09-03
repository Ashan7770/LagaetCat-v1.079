#include <iostream>
#include <vector>
#include "Dir.h"
#include <mysql.h>
#include <fstream>
#include <Windows.h>
#include <thread>
using namespace std;





int main() {

	MYSQL mysql;
	MYSQL_RES* res;
	MYSQL_ROW row;



	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	const char* ee1;
	ee1 = "                           << LagaetCat >>";
	frag* m1 = new frag;
	Logger* lg = new Logger;
	int iiiw = 0, q = 0, w = 0, ych = 0, e = 0, v = 0, klych = 0, klych1 = 1, klych2 = 1, klych3 = 1, klych4 = 1, klych5 = 1, klych7 = 1, popyutka, pod = 0, tigr = 0, triger = 0;
	const int a = 99, b = 99, c = 99, d = 9999, t = 99;
	string  chatdialog[d], zapomnik[t];
	const int k = 99;
	int i = 0, ki = 0, kii = 0;
	string mas[k], mas2[k];

	mysql_init(&mysql);
	if (&mysql == nullptr) {

		cout << "Error: can't create MySQL-descriptor" << endl;
	}


	if (!mysql_real_connect(&mysql, "localhost", "root", "1234", "testdb", NULL, NULL, 0)) {

		cout << "Error: can't connect to database " << mysql_error(&mysql) << endl;
	}
	mysql_query(&mysql, "CREATE TABLE test2(id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(255))");
	vector<string>maslogin, masparol, masimy;
	string m, ma, prop0, prop1, prop2, prop3, vvodlog, vvodpar, vvodchat, dok, slovo, * pomni, rrt;
	do {
		m1->setDan1(ee1);
		cin >> ma;
		if (ma == "Продолжить") {
			klych2 = 0;
		}
		else if (ma == "Уйти") {
			cout << "Досвидание." << endl;
			return 0;
		}
		else if (ma == "Внимание") {
			m1->setDan5(ee1);
			klych2 = 1;
		}
		else {
			m1->setDan3(ee1);
		}
	} while (1 == klych2);
	do {
		m1->setDan2(ee1, maslogin.size());
		cin >> prop0;
		if ("Войти" == prop0) {
			popyutka = 3;
			if (ych == 0) {
				m1->setDan4(ee1);
				prop1 = "р";
			}
			else if (ych != 0) {
				cout << "\nВаш логин:" << endl;
				cin >> vvodlog;











				cout << "\nПароль:" << endl;
				cin >> vvodpar;
				cout << "\nПоиск...." << endl;
				int i = 0;
				do {

					if (vvodlog == maslogin[i]) {       ///!!!!!!!!
						q = i;
						w = i;
						m1->setDan6(ee1);
						do {
							if (vvodpar == masparol[q]) {///!!!!!!!!!!
								do {
									cout << "Ваша страница, " << masimy[w] << ", в общем чате.          Участники группы:" << endl;
									for (int w = 0; w < ych; w++) {
										cout << "\n                                                 " << masimy[w] << endl;//!!!!!!!!!
									}
									m1->setDan7(ee1);
									cin >> vvodchat;
									if (vvodchat == "Написать") {
										m1->setDan8(ee1);
										dok = " ";
										tigr = 0;
										do {
											if (pod != 0) {

												for (int e = 0; e <= triger; e++, v++) {

													if (e < triger) {
														cout << zapomnik[v] << " пишет: " << chatdialog[e] << endl; //!!!!!!!!





													}
													else {
														pod = 0;
													}
												}
											}
											else if (pod == 0) {
												for (int e = triger; e <= triger;) {
													cout << " Вы: " << endl;
													cin >> slovo;
													if (e > 9999) {
														m1->setDan9(ee1);

														abort();
													}
													if (slovo != "Назад") {
														chatdialog[e] = slovo;

														SetConsoleCP(1251);
														lg->displayMessage(chatdialog[e], masimy[w]);
														/*thread t(&Logger::displayMessage, std::ref(lg), chatdialog[e], masimy[w]); - Ментор смог мне помочь найти это. Самое близкое, чтоб был многопоток.
														 t.join();
														*/
														SetConsoleCP(866);
														setlocale(LC_ALL, "Rus");
														SetConsoleCP(1251);
														SetConsoleOutputCP(1251);



														dok = slovo;
														triger++;
														pomni = &masimy[w];
														zapomnik[v] = *pomni;
														e++;
														v++;
													}
													else if (slovo == "Назад") {
														pod = 1;
														e = (1 + triger);
														v = 0;
														dok = "Назад";
														klych7 = 1;
														klych5 = 1;
														klych4 = 1;
													}
												}
											}
										} while ("Назад" != dok);
									}
									else if (vvodchat == "Назад") {
										klych4 = 1;
										klych5 = 1;
										klych7 = 1;
									}




									else {
										m1->setDan10(ee1);

										klych7 = 0;
									}
								} while (0 == klych7);
							}
							else if (vvodpar != masparol[q] && q <= ych && popyutka >= 1) {
								cout << "Не верный пароль. Введите еще раз.  (Ваши попытки: " << popyutka << endl;
								popyutka -= 1;
								cin >> vvodpar;
								klych5 = 0;
							}
							else {
								m1->setDan11(ee1);

								klych4 = 1;
								klych5 = 1;
							}
						} while (klych5 == 0);
					}
					else if (i <= ych && vvodlog != maslogin[i]) {
						cout << i << " " << ych << endl;
						++i;
						klych4 = 0;



					}
					else {
						m1->setDan12(ee1);

						klych4 = 1;
						prop1 = "р";
					}
				} while (klych4 == 0);
			}
			prop1 = "р";
		}
		else if ("Регистрация" == prop0 && ych < 99) {
			do {
				int i = ych;
				cout << "Создаем логин: " << endl;
				cin >> m;
				maslogin.push_back(m);
				cout << "Сравнение......" << endl;
				klych1 = 1;
				if (0 != ych) {
					for (int i = 0; i < ych; i++) {
						if (m != maslogin[i] && klych1 == 1) {
							klych1 = 1;
						}
						else if (m == maslogin[i]) {
							cout << "Логин с ТАКИМ ИМЕНЕМ существует: " << m << endl;
							m1->setDan13(ee1);

							klych1 = 0;
							do {
								cin >> prop2;
								if ("Продолжить" == prop2) {
									klych3 = 1;
									prop1 = "н";
								}
								else if ("Назад" == prop2) {
									klych3 = 1;
									prop1 = "р";
								}
								else {
									m1->setDan14(ee1);

									klych3 = 0;
								}
							} while (klych3 == 0);
						}
					}
				}
				else if (0 == ych) {
					cout << "Логин позволим: " << m << endl;
					klych1 = 1;
				}
				else {
					cout << "Логин YНЕ позволим: " << m << endl;
					klych1 = 0;
					prop1 = "н";
				}
				if (1 == klych1) {

					maslogin[i] = m;
					q = ych;
					w = ych;
					cout << "Логин создан: " << maslogin[i] << endl;
					prop1 = "р";
					cout << "Введите пароль: " << endl;
					cin >> rrt;
					masparol.push_back(rrt);
					q++;
					cout << "Введите имя: " << endl;
					cin >> rrt;
					masimy.push_back(rrt);
					w++;
					ych++;
				}

			} while ("н" == prop1);
		}
		else if ("Регистрация" == prop0 && ych > 98) {
			m1->setDan15(ee1);
			prop1 = "р";
		}
		else if ("Выход" == prop0) {
			m1->setDan17(ee1);
			cout << "Досвидание." << endl;

			prop1 = "";
		}
		else {
			m1->setDan16(ee1);
			cout << "Ошибка. Пожалуйста введите заново." << endl;
			prop1 = "р";
		}
		if (maslogin.size() == 99) {
			abort();
			cout << "Ошибка. Это конец" << endl;
		}
	} while ("р" == prop1);

	for (int g = 0; g <= ych; g++) {
		std::string query = "INSERT INTO test2(id, name) values(default, '" + maslogin[g] + " ')";
		mysql_query(&mysql, query.data());
	}
	mysql_query(&mysql, "SELECT * FROM table_fromCplusplus");
	if (res = mysql_store_result(&mysql)) {
		while (row = mysql_fetch_row(res)) {
			for (iiiw = 0; iiiw < mysql_num_fields(res); iiiw++) {
				cout << row[iiiw] << "  ";
			}
			cout << endl;
		}
	}
	else
		cout << "Ошибка MySql номер " << mysql_error(&mysql);

	mysql_close(&mysql);
	system("Pause");


	masimy[w] = nullptr;
	masparol[q] = nullptr;
	chatdialog[e] = nullptr;
	delete m1;
	delete lg;

	return 0;
}