#include "Rectangle.h"
#include <cmath>
#include <iostream>
#include <sstream>

// Конструктор по умолчанию
Rectangle::Rectangle() : x1(0), y1(0), x2(0), y2(0) {}

// Конструктор с параметрами
Rectangle::Rectangle(double x1_val, double y1_val, double x2_val, double y2_val) :
    x1(x1_val), y1(y1_val), x2(x2_val), y2(y2_val) {}

// Деструктор
Rectangle::~Rectangle() {
    std::cout << "Объект прямоугольника уничтожен" << std::endl;
}

// Функция обработки данных (1)
void Rectangle::process1() {
    // Здесь можно добавить код для обработки данных (1),
    // но в данном случае мы оставим эту функцию пустой.
}

// Функция обработки данных (2)
void Rectangle::process2() {
    // Здесь можно добавить код для обработки данных (2),
    // но в данном случае мы оставим эту функцию пустой.
}

// Функция формирования строки с информацией об объекте
std::string Rectangle::getInfo() const {
    std::ostringstream oss;
    oss << "Координаты вершин прямоугольника: (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << ")";
    return oss.str();
}

