#include "Array.h"
#include "IIterator.h"
#include <iostream>
using namespace std;

#define SIZE 10

int main()
{
    Array a; //Queue b;
    a.push(1.2); a.push(2.3); a.push(13.7); a.push(0.5);
    //b.push(1.2); b.push(2.3); b.push(13.7); b.push(0.5);
    for (IIterator* i = a.begin(); !i->isEqual(a.end()); i->next())
        cout << *(double*)i->get() << " ";
    cout << endl;

    //// for (I_Iterator* i = b.begin(); !i->isEqual(b.end()); i->next())
    ////     cout << *(double*)i->get() << “ “;
    ////cout << endl;
}