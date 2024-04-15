#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>

class Rectangle {
private:
    double x1, y1, x2, y2;

public:
    // Конструктор по умолчанию
    Rectangle();

    // Конструктор с параметрами
    Rectangle(double x1_val, double y1_val, double x2_val, double y2_val);

    // Деструктор
    ~Rectangle();

    // Функция обработки данных (1)
    void process1();

    // Функция обработки данных (2)
    void process2();

    // Функция формирования строки с информацией об объекте
    std::string getInfo() const;
};

#endif

