#include "RightTriangle.h"
#include <sstream>
using namespace std;

// Конструктор для инициализации объекта
RightTriangle::RightTriangle(double leg1, double leg2) : firstLeg(leg1), secondLeg(leg2) {}

// Функция формирования строки с информацией об объекте
string RightTriangle::getInfo() const {
    ostringstream oss;
    oss << "Первый катет: " << firstLeg << ", Второй катет: " << secondLeg;
    return oss.str();
}

// Функция для обработки значений полей по индивидуальному варианту
void RightTriangle::processValues() {
    // Здесь можно добавить код для обработки значений полей по индивидуальному варианту,
    // но в данном случае мы оставим эту функцию пустой.
}

// Функция для вычисления площади прямоугольного треугольника
double RightTriangle::calculateArea() const {
    return 0.5 * firstLeg * secondLeg;
}
