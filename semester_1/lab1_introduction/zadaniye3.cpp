#include <iostream>

int main()
{
using std::cout;
using std::cin;
int chislo,a,b,c,d;
cout <<"Введите четырехзначное число: \n";
if ((chislo>9999) && (chislo<0))
{
    cout<<"Введите ЧЕТЫРЕХЗНАЧНОЕ ПОЛОЖИТЕЛЬНОЕ число!!!";
return -1;
}
cin >> chislo;
a =  chislo % 10;
b =  (chislo % 100 - a)/10;
c =  (chislo % 1000 -a - b*10)/100;
d = (chislo -a* -b*10 -c*100)/1000;
    if((a==d) && (b==c))
    {
        cout<<"Это число является палиндромом\n";
    }
    else
    {
        cout<<"Это число НЕ является палиндромом\n";
    }
    return 0;
}