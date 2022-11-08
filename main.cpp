#include <iostream>

using namespace std;

int a,b,c;

int main()
{
    cout << "Podaj 3 liczby rozdzielone spacja: ";
    cin>>a>>b>>c;

    if ((a>b) && (a>c))
        cout<<"Najwieksza liczba to "<<a;
    if ((b>a) && (b>c))
        cout<<"Najwieksza liczba to "<<b;
    return 0;
}
