#include <iostream>

int main()
{
using std::cout;
using std::cin;
int chislo,a,b,c,d,e,z;
cout <<"Введите шестизначное натуральное число: \n";
cin >> chislo;
if (chislo<=0)
{
cout<<"Число должно быть натуральным!!!";
return -1;
}
a =  chislo % 10;
b =  (chislo % 100 - a)/10;
c =  (chislo % 1000 -a - b*10)/100;
d = (chislo % 10000-a* -b*10 -c*100)/1000;
e = (chislo % 100000-a* -b*10 -c*100-d*1000)/10000;
z = (chislo % 1000000-a* -b*10 -c*100-d*1000-e*10000)/100000;
cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<z<<" ";

    if(a+b+c==d+e+z)
    {
        cout<<"Это число является счастливым\n";
    }
    else
    {
        cout<<"Это число НЕ является счастливым\n";
    }
    return 0;
}