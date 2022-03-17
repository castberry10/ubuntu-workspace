#include <iostream>

using namespace std;

int main(){
    bool x = true;
    bool y = false;

    cout << "default x " << x << endl;
    cout << "default y " << y << endl;

    cout << "boolalpha" << boolalpha << x << endl;
    cout << "bootalpha" << y << endl;
    
    int x1 = 1237;

    cout << endl << "x 10 << " << x1 << endl;
    cout << "x 8  << " << oct << x1 << endl;
    cout << "x 16 << " << hex << x1 << endl << endl; 
    
    cout << "x 10 showbase" << showbase << dec << x1 << endl;
    cout << "x  8 showbase" << showbase << oct << x1 << endl;
    cout << "x 16 showbase" << showbase << hex << x1 << endl << endl;

    double x2 = 1237;
    double y1 = 12376745.5623;

    cout << "x2의 고정 소수점 형식" << x2 << endl; 
    cout << "x2의 고정 소수점 형식 showpoint" << x2 << endl; 
    cout << "y의 과학 표기법 형식 " << y1 << scientific; 

    return 0;
    

}
