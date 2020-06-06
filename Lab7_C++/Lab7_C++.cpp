#include <iostream> //ввод, вывод cout<< cin>>
#include <iomanip> //расшириные функции <iostream>
#include <cstdlib> //преобразование типов
#include <math.h> //стандартные функции
#include <ctime> //пауза
#include <locale.h> //русский язык


using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int i, n, imin = 0, a = 0, b = 0;
    double sum = 0, proizv = 1, min = 0, c = 0;
    double sort = 1;
    cout << ("Введите количество эллементов массива: ");
    cin >> n;  //ввод размерности массива
    cout << ("Введите элементы массива:") << endl << endl;
    double* p = new double[n]; // объявление массива
    double* p1 = new double[n]; //объявление массива четных позиций
    double* p2 = new double[n]; //объявление массива нечетных позиций
    for (i = 0; i < n; i++)
    {
        cin >> p[i]; //ввод массива
    }
    for (i = 0; i < n; i++) {                   //поиск элементов четных позиций
        if ((i % 2) == false)  //деление на 2
        {
            p1[a] = p[i];
            a++;
        }
        if (i % 2)           //поиск элементов нечетных позиций
        {
            p2[b] = p2[i];
            b++;
        }
    }
    while (sort) {
        sort = 0;
        for (i = 0; i < a - 1; i++)      //сортировка нечетных
        {
            if (p1[i] > p1[i + 1]) {
                c = p1[i];
                p1[i] = p1[i + 1];
                p1[i + 1] = c;
                sort = 1;
            }
        }

        sort = 0;
        for (i = 0; i < b - 1; i++)     //сортировка четных
        {
            if (p2[i] > p2[i + 1]) {
                c = p2[i];
                p2[i] = p2[i + 1];
                p2[i + 1] = c;
                sort = 1;
            }
        }
    }
    cout << "\nНечетные: ";
    for (i = 0; i < b+1; i++)cout << p1[i] << ' ';//вывод отсортированных нечетных элементов
    for (i = 0; i < n; i++)
        if (p1[i]> 0) 
        {
            proizv *= p1[i];//произведение нечетных элементов
        }
    cout << ("\nПроизведение нечетных элементов: ") << proizv << endl; //вывод

    system("pause");
    return 0;
}