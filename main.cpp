#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    setlocale(0, "");

    Point p(1.0, 1.0);
    print(p);
   /* try {
        cout << "Введите координаты точки: " << endl;
        Point p = get_point();
        print(p);
    }
    catch (domain_error e) {
        cout << e.what() << endl;
    }*/

    return 0;
}

