#include "Control.h"

Control::Control()
{   
    //Realizar inicializações necessária do objeto
    this->startActivity();
}

void Control::startActivity()
{
    cout << "Start the thread control" << endl;
    ThreadBase::startActivity();
}

Control::~Control()
{
    this->stopActivity();
    //desalocar ponteiros
}

void Control::stopActivity()
{
    ThreadBase::stopActivity(); 
    cout << "Stopped Thread Control" << endl;
}

int Control::run()
{

    this->is_running = 1;
    this->is_alive = 1;

    this->tim1.tv_sec = 0;
    this->tim1.tv_nsec = 10000000L;

    
    while (this->is_alive)
    {
        
        //código que será executado enquanto a thread estiver viva
        nanosleep(&this->tim1, &this->tim2);
    }

    this->is_running = 0;
    pthread_exit(NULL);

    return 1;
}
