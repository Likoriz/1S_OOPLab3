#include "Array.h"
using namespace std;

#define SIZE 10

int main()
{
    srand(time(NULL));

    IIterable* objects = new Array(SIZE);
    objects = ((Array*)objects)->append(objects);

    for (auto i = objects->begin(); i != objects->end(); i->next())
        cout << i << " " << objects->end() << " " << i->get() << endl;

    cout << endl;

    for (auto i = objects->end(); i != objects->begin(); i->prev())
        cout << objects->get() << endl;

   cout << endl << objects->get();

   for (auto i = objects->begin(); i != objects->end(); i->next())
        cout << endl << (i->get() == (i+1)->get());

}