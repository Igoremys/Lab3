#include <iostream>
#include <sstream>
#include "Rectangle.h"

int main() {
    setlocale(LC_ALL, "RU");
    // Создаем объекты прямоугольника с различными значениями координат
    Rectangle rectangle1(0, 0, 4, 3); // Прямоугольник с вершинами в точках (0,0), (4,0), (4,3), (0,3)
    Rectangle rectangle2(-2, -2, 5, 5); // Прямоугольник с вершинами в точках (-2,-2), (5,-2), (5,5), (-2,5)

    // Вывод информации о прямоугольниках
    std::cout << "Информация о прямоугольнике 1: " << rectangle1.getInfo() << std::endl;
    std::cout << "Информация о прямоугольнике 2: " << rectangle2.getInfo() << std::endl;

    // Вывод дополнительной информации о работе программы
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Выполнение дополнительных операций:" << std::endl;

    // Выполнение операций для каждого прямоугольника
    rectangle1.process1();
    rectangle2.process2();

    return 0;
}
