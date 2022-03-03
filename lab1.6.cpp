#include <iostream>
#include "RightAngled.h"

using namespace std;

int main()
{
    RightAngled a, b;

    cout << "Case 1" << endl;
    a.Read();
    cout << "Teorema Pifagora=" << a.teorema() << endl;
    cout << "Square=" << a.square() << endl;
    cout << "First is " << a.getFirst() << " and second is " << a.getSecond() << endl;
    a.setValue1();
    a.Display();
    a.setValue2();
    cout << a.tostring() << endl;
    cout << "Dobutok=" << a.dobutok() << endl;
    cout << "First is " << a.getFirst() << " and second is " << a.getSecond() << endl<<endl;
    b.setPair(a.getPair());

    RightAngled c[1], d[1];

    cout << "Case 2" << endl;
    c[0].Read();
    cout << "Teorema Pifagora=" << c[0].teorema() << endl;
    cout << "Square=" << c[0].square() << endl;
    cout << "First is " << c[0].getFirst() << " and second is " << c[0].getSecond() << endl;
    c[0].setValue1();
    c[0].Display();
    c[0].setValue2();
    cout << c[0].tostring() << endl;
    cout << "Dobutok=" << c[0].dobutok() << endl;
    cout << "First is " << c[0].getFirst() << " and second is " << c[0].getSecond() << endl << endl;
    d[0].setPair(c[0].getPair());

    RightAngled* test1 = new RightAngled();

    cout << "Case 3" << endl;
    test1->Read();
    cout<<"Teorema="<<test1->teorema();

    return 0;
}
