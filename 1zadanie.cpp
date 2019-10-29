#include <stdio.h>//библиотека
#include <iostream>//библиотека
using namespace std;//стандартное пространство имен

int main()//начало
{
    int a, b;//объявление
    cout <<"Введите a b:"<<endl;//вывод команды
    cin >>a>>b;//ввод
    if (a>2&&b<=3){//цикл
        cout<<"Справедливы"<<endl;//вывод
    }
    else{
        cout<<"Несправедливы"<<endl;//вывод
    }
    return 0;//конец
}
