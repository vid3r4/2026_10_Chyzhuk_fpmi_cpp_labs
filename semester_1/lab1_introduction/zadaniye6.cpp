#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    int b,d,a;
    cin>>a>>b>>d;
    
    
    for (int i = a; i <= b; i += d) 
{
    if (i % 3 == 0) 
    {
        cout << i << " ";
    }
}
    
return 0;
}
