#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

#include <string>
using namespace std;

class RightTriangle {
private:
    double firstLeg;
    double secondLeg;

public:
    // Конструктор для инициализации объекта
    RightTriangle(double leg1, double leg2);

    // Функция формирования строки с информацией об объекте
    string getInfo() const;

    // Функция обработки значений полей по индивидуальному варианту
    void processValues();

    // Функция для вычисления площади прямоугольного треугольника
    double calculateArea() const;
};

#endif
