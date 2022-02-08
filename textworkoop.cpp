#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/* 
* сохранение данных в файл
*/
int main(void)
{
	setlocale(LC_ALL, "ru");

	string path;
	cin >> path;
	
	ofstream fout;
	fout.open(path);

	if (!fout.is_open()) {
		cout << "Ошибка открытия файла!" << endl;
	}
	else 
	{
		fout << "Это наши данные dblfkb xj!"<<endl;
		fout << "Vjnjhby Hjvfy";
	}
	fout.close();
}