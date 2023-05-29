#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "info.h"
using namespace std;


int main() {
    setlocale(LC_ALL, "rus");
    int summa = 0; bool flag = false;
    string stroka="";
    int a1, a2, a3, a4, a5, a6, a7, a8;
    while (flag!=true) {
        cout << "Введите дату рождения(XX.YY.ZZZZ): ";
        cin >> stroka;
        a1 = stroka[0] - '0';
        a2 = stroka[1] - '0';
        a3 = stroka[3] - '0';
        a4 = stroka[4] - '0';
        a5 = stroka[6] - '0';
        a6 = stroka[7] - '0';
        a7 = stroka[8] - '0';
        a8 = stroka[9] - '0';
        if ((a1 == 3 && a2 >= 2) || a1 > 3 || (a3 == 1 && a4 > 2) || a3 > 1) {
            cout << "Вы указали неверную ДАТУ! Попробуйте ещё раз." << endl;
        }
        else {
            flag = true;
        }
    }
    summa = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8;
    cout<<endl;
    if (summa <= 22 && summa > 0) {
        test(summa);
    }
    else {
        summa = summa - 22;
        test(summa);
    }
    return 0;
}