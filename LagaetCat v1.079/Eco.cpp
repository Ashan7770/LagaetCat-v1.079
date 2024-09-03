#include <iostream>
#include "Dir.h"
using namespace std;
const char* frag::getDan1() const {
	return ii;
}
void  frag::setDan1(const char* idi) {
	ii = idi;
	cout << ii << "\n\n                      Спасибо, что выбираете нас.\n\n                       Продолжить/Уйти/Внимание\n                       ------------------------\n\n\n        (Для управленмя пишите слова действия, которые предлагают)\n        __________________________________________________________\n\n\n\n" << endl;
}
const char* frag::getDan2()const {
	return ii;
}
void  frag::setDan2(const char* idi, int ychh) {
	ii = idi;
	cout << "\n\n\n\n" << ii << "\n\n                           Главное меню\n\n                      Количество участников: " << ychh << "\n\n                Войти  ####################  Регистрация\n                _____         Выход          ___________\n                              _____\n\n\n" << endl;
}
const char* frag::getDan3()const {
	return ii;
}
void  frag::setDan3(const char* idi) {
	ii = idi;
	cout << "Не правильный ввод." << endl;
}
const char* frag::getDan4()const {
	return ii;
}
void  frag::setDan4(const char* idi) {
	ii = idi;
	cout << "\nВ чате нет собиседников." << endl;
}
const char* frag::getDan5()const {
	return ii;
}
void  frag::setDan5(const char* idi) {
	ii = idi;
	cout << "Колличество членов в группе не может привышать 99!\nВвод в переписке ограничен. После 9999 пунктов происходит автоматический выход." << endl;
}
const char* frag::getDan6()const {
	return ii;
}
void  frag::setDan6(const char* idi) {
	ii = idi;
	cout << "Найден логин." << endl;
}
const char* frag::getDan7()const {
	return ii;
}
void  frag::setDan7(const char* idi) {
	ii = idi;
	cout << "  Написать/Назад\n  ____________" << endl;
}
const char* frag::getDan8()const {
	return ii;
}
void  frag::setDan8(const char* idi) {
	ii = idi;
	cout << "  =============================\n  ____________" << endl;
}
const char* frag::getDan9()const {
	return ii;
}
void  frag::setDan9(const char* idi) {
	ii = idi;
	cout << "Колличество сообщений привышено! Ваша переписка обнуляется." << endl;
}
const char* frag::getDan10()const {
	return ii;
}
void  frag::setDan10(const char* idi) {
	ii = idi;
	cout << "Ваша запись не верна!\n  Написать/Назад\n  ____________" << endl;
}
const char* frag::getDan11()const {
	return ii;
}
void  frag::setDan11(const char* idi) {
	ii = idi;
	cout << "Вы привыслили лимит ввода паролей." << endl;
}
const char* frag::getDan12()const {
	return ii;
}
void  frag::setDan12(const char* idi) {
	ii = idi;
	cout << "Данного логина нет. Выход." << endl;
}
const char* frag::getDan13()const {
	return ii;
}
void  frag::setDan13(const char* idi) {
	ii = idi;
	cout << "Будите продолжать регистрироваться? Продолжить/Назад " << endl;
}
const char* frag::getDan14()const {
	return ii;
}
void  frag::setDan14(const char* idi) {
	ii = idi;
	cout << "Вас не понимают.  Продолжить/Назад  " << endl;
}
const char* frag::getDan15()const {
	return ii;
}
void  frag::setDan15(const char* idi) {
	ii = idi;
	cout << "Превышение лимита пользователь." << endl;
}
const char* frag::getDan16()const {
	return ii;
}
void  frag::setDan16(const char* idi) {
	ii = idi;
	cout << "Ошибка. Пожалуйста введите заново." << endl;
}
void  frag::setDan17(const char* idi) {
	ii = idi;
	cout << "Досвидание." << endl;
}
void  frag::setDan18(const char* idi) {
	ii = idi;
	cout << "Ошибка. Это конец" << endl;
}