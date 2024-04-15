#include <iostream>
#include <vector>
#include "RightTriangle.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // Создание вектора для хранения прямоугольных треугольников
    vector<RightTriangle> triangles;

    // Ввод значений полей каждого объекта из компонентов Edit
    double leg1, leg2;
    cout << "Введите значение первого катета прямоугольного треугольника: ";
    cin >> leg1;
    cout << "Введите значение второго катета прямоугольного треугольника: ";
    cin >> leg2;

    // Создание объекта класса RightTriangle
    RightTriangle triangle(leg1, leg2);

    // Добавление треугольника в вектор
    triangles.push_back(triangle);

    // Вывод результатов в компонент Memo
    cout << "Информация о прямоугольном треугольнике:" << endl;
    cout << triangle.getInfo() << endl;
    cout << "Площадь прямоугольного треугольника: " << triangle.calculateArea() << endl;

    return 0;
}
