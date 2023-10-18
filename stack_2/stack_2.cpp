﻿#include <stdlib.h>
#include <iostream>

// Этот код предназначен для демонстрации работы стека и указателей.

// Объявление функции stackMemory1, которая возвращает указатель на int.
int* stackMemory1()
{
    // Создаем локальную переменную 'a' и инициализируем её значением 1.
    int a = 1;
    // Возвращаем указатель на 'a'. Обратите внимание, что 'a' будет недействительной после завершения функции.
    return &a;
}

// Объявление функции stackMemory2, аналогичной первой.
int* stackMemory2()
{
    int b = 2;
    return &b;
}

int main()
{
    // Вызываем функцию stackMemory1 и сохраняем её результат в указателе 'b'.
    int* b = stackMemory1();
    // Получаем значение, на которое указывает 'b' и присваиваем его переменной 'a1'.
    int a1 = *b; // a1 = 1

    // Аналогичные шаги для функции stackMemory2.
    int* c = stackMemory2();
    int a2 = *c; // a2 = 2
    int a3 = *b; // a3 = 2, обратите внимание, что 'b' теперь указывает на 'b' из stackMemory2.

    // Выводим результаты на экран.
    std::cout << a1 << std::endl; // Выводит 1
    std::cout << a2 << std::endl; // Выводит 2
    std::cout << a3 << std::endl; // Выводит 2

    // Рассчитываем разницу в байтах между указателями 'b' и 'c' и выводим результат.
    std::cout << ((std::byte*) b - (std::byte*) c) << std::endl; // Выводит 0, так как указатели равны.

    return 0;
}