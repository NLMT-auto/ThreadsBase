#ifndef CONTROL_H
#define CONTROL_H

#include <iostream>
#include "../../Utils/ThreadBase/ThreadBase.h"
#include "../../Files/DefinePin.h"

using namespace std;

class Control : public ThreadBase
{
private:

    void startActivity() override;
    void stopActivity() override;
    int run() override;

public:
    Control();
    ~Control();
};

#endif