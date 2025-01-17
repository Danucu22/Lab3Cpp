﻿
#include <iostream>
#include "f.cpp"

//int hello(int x);1
static int hello(int x)//6
{
	return x;
}
/*int hello(int x)//2.тепепь метод определём и ошибок не возникает 
{
	return x*2;
}
*/
int main()
{
   std::cout<<hello(10);
   /*
      1.Ошибка возникает, когда функция объявлена, но не определена,
	  и компилятор не знает, как обрабатывать вызовы этой функции.

	  3.Если в файлах f.cpp и main.cpp есть две функции int hello(int x),
	  но они не имеют определений, то компилятор не может определить, какую функцию использовать.

	  4.При компиляции только main.cpp без определения функции hello, 
	  возникает ошибка, так как компилятор не может найти определение этой функции.

	  5.Если функция hello имеет модификатор static, то она имеет локальную область 
	  видимости и не может быть использована в других файлах.

	  6.Когда функция hello определена в том же файле, где она используется,
	  и имеет модификатор static, код успешно компилируется.Функция hello ограничивается 
	  локальной областью видимости для данного файла.

	  7.Если функция hello объявлена с модификатором static и определена в файле main.cpp,
	  компилятор создает единственное определение функции только в пределах main.cpp.Однако, 
	  если вы определите функцию hello без модификатора static в файле f.cpp, 
	  то компилятор создаст отдельное определение функции в f.cpp.
	  В результате будет две копии тела функции hello : одна в main.cpp и одна в f.cpp.
	  */
}


