#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    cout<< "Введите кол-во первых чисел фибоначчи(n):\n";
    int i,c,f1,f0,f3;
    f0=0;
    f1=1;
    cin>>c;
    if (c>0)
{

    cout<<f0<<" "<<f1<<" ";
    for (i = 0;i<c;i += 1)

   {

    f3 = f1 + f0;
    f0 = f1;
    f1 = f3;
    cout<<f3<<" ";
 
   }
   cout<<"\n";
}
 
    else 
{
        cout<< "n должно быть больше нуля\n";
        return -1;
}
return 0;

}