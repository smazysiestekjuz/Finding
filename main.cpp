#include <iostream>

using namespace std;

int a,b,c;

int main()
{
    cout << "Podaj 3 liczby rozdzielone spacja: ";
    cin>>a>>b>>c;

    if ((a>b) && (a>c))
        cout<<"Najwieksza liczba to "<<a;


    return 0;
}
