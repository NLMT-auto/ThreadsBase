#include <iostream>
#include "Containers/Control/Control.h"

using namespace std;

int main(int argc, char *argv[])
{
    Control *control = new Control();
    //Encoder *encoder = new Encoder();
    //Steering *steering = new Steering();
    //Record *registro = new Record();

    int quit = -1;
    do
    {
        cin >> quit;
    } while (quit != 0);

    delete control;

    return EXIT_SUCCESS;
}