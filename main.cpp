#include <iostream>

using namespace std;

int a,b,c,m;

int main()
{
    cout << "Podaj 3 liczby rozdzielone spacja: ";
    cin>>a>>b>>c;

    m=a;
    if(b>m) m=b;

/*
   if ((a>=b) && (a>c))
        cout<<"Najwieksza liczba to "<<a;

   else if ((b>=a) && (b>=c))
        cout<<"Najwieksza liczba to "<<b;

   else  if ((c>=a) && (c>=b))
        cout<<"Najwieksza liczba to "<<c;
*/
    return 0;
}
