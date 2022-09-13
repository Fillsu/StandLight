#include <iostream>
#include <wiringPi.h>
#include "Button.h"
#include "Led.h"
#include "Listener.h"


int main()
{
std::cout << "Hellow World" <<std::endl;

Button Button1(27);
Led led1(25);
Listener listener(&Button1,&led1);

    while(1)
    {
        listener.checkEvent();
        delay(50);

    }

return 0;
}