#include "Controler.h"
#include "string"

Controler::Controler(Led *led)
{
light = led ;
lightState=LIGHT_OFF;
}

Controler::~Controler()
{

}

void Controler::updateEvent(std::string strBtn)
{
    switch(lightState)
    {
        case LIGHT_OFF:
        if(strBtn=="powerButton")
        {
            lightState=LIGHT_ON;
            light->On();
        }
        break;

        case LIGHT_ON:
        if(strBtn=="powerButton")
        {
            lightState=LIGHT_OFF;
            light->Off();
        }
        break;
    }
}