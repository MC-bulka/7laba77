#include <stdio.h>//библиотека
#include <iostream>//библиотека
using namespace std;//стандартное пространство имен

int main()//начало
{
    int a, b, c;//объявление
    cout <<"Введите a ,b,c:"<<endl;//вывод команды
    cin>>a>>b>>c;//ввод
    if (a<b && b<c){//цикл
        cout<<"Справедливо"<<endl;//вывод
    }
    else{
        cout<<"Не справедливо"<<endl;//вывод
    }
    return 0;//конец
}
