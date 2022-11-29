#include <iostream>
#include <string>


// Задание 2. Палиндром.

bool palindrom(std::string str) {
	std::string newStr;
	for (int i = 0; i < str.size(); i++)
		str[i] = tolower(str[i]);

	for (int i = str.size() - 1; i >= 0; i--)
		newStr += str[i];
	if (newStr == str)
		return true;
	else
		return false;
}

// Задание 3. Подсчет знаков препинания и пробелов.
std::string counter(std::string str) {
	int count = 0;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?')
			count++;
	return std::to_string(count);
}

// Задание 4. Обрезание строки.
std::string task4(std::string str, char sym) {
	std::string newStr = "Пустая строка";
	int count = 0;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == sym)
			count++;

	if (count == 0)
		return newStr;
	else
		return str.substr(str.rfind(sym));
}



int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;

	// Задание 1. Поиск символов.
	
	std::cout << "\t\tЗадание 1.\n Поиск символов.\n";
	std::string str1;
	std::cout << " Введите строку -->\t";
	getline(std::cin, str1);
	char sym1;
	std::cout << " Введите символ -->\t";
	std::cin >> sym1;
	std::string new_str;

	for (int i = 0; i < str1.size(); i++)
		if (str1[i] == sym1)
			new_str += sym1;
	std::cout << " new_str = " << new_str << '\n';
	

	// Задание 2. Палиндром.
	
	std::cout << "\t\tЗадание 2.\n Палиндром.\n";
	std::string str2;
	std::cout << " Введите слово -->\t";
	std::cin >> str2;
	
	std::cout << palindrom(str2);
	

	// Задание 3. Подсчет знаков препинания и пробелов.
	
	std::cout << "\n\t\tЗадание 3.\n Подсчет знаков препинания и пробелов.\n";
	std::string str3;
	std::cout << " Введите строку -->\t";
	std::cin.ignore();
	getline(std::cin, str3);
	std::cout << " Сумма всех пробелов, точек, запятых, ! и ? --> ";
	std::cout << counter(str3) << '\n';
	

	// Задание 4. Обрезание строки.

	std::cout << "\t\tЗадание 4.\n Обрезание строки.\n";
	std::cout << " Введите строку -->\t";
	std::string str4;
	getline(std::cin, str4);
	char sym4;
	std::cout << " Введите символ -->\t";
	std::cin >> sym4;
	std::cout << " Результат работы функции -->\t" << task4(str4, sym4) << '\n';

	



	return 0;
}