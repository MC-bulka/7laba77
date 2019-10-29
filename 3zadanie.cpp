#include <stdio.h>//библиотека
#include <iostream>//библиотека
using namespace std;//стандртное пространство имен

int main()//начало
{
    int a;//объявление
    cout <<"Введите a:"<<endl;//вывод команды
    cin>>a;//ввод
    if (a>0 && a<100 && a%2==0){//цикл
        cout<<"Справедливо"<<endl;//вывод
    }
    else{
        cout<<"Не справедливо"<<endl;
    }
    return 0;//конец
}
