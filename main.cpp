//Создать папку project, 
//создать файл main.cpp и: 
//1. написать ф-цию main (добавить #include <iostream>); 
//2. объявить без знаковую глобальную переменную (типа short) и присвоить -1, результат вывести на экран; 
//3. объявить знаковую глобальную переменную (типа short), присвоить -1, результат вывести на экран; 
//4. проинициализировать Git – репозиторий (в папке project) добавить файл в репозиторий и сохранить его состояние; 
//5. объяснить вывод на экран,
//
#include <iostream>

unsigned short temp_global = -1;
short temp_global_1 = -1;

int main(int argc, char** argv) {

//or (н.у.; условие выхода из цикла; действие)
//< > != == <= >=
//i++ => i = i + 1 => i += 1 => ++i
//int argggg;
//int arggge42[10];
//arggge42[0]

	for (int i = 0; i < argc; i++)  {
		std::cout << i << " : " << argv[i] << std::endl;
	}

//	std::cout << temp_global << std::endl;
//	std::cout << temp_global_1 << std::endl;

	return 0;
}
