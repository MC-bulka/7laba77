#include <stdio.h>//библиотека
#include <iostream>//библиотека
using namespace std;//стандартное простраснтсво имен

int main()//начало
{
    int n, a, b, c, d;//объвление
    cout <<"Введите четырехначное число:"<<endl;//вывод команды
    cin>>n;//ввод
    a = n / 1000; //первая цифра
    b = (n%1000)/100; //вторая цифра
    c = ((n%1000)%100)/10;//3
    d = n % 10;//4
    
    if (a==d && b==c){ //первая цифра равна последней и вторая -- третьей
        cout<<"Справедливо"<<endl;
    }
    else{
        cout<<"Не справедливо"<<endl;
    }
    return 0;//конец
}
