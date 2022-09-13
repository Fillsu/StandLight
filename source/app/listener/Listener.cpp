#include "Button.h"
#include "Led.h"
#include "Listener.h"

void Listener::checkEvent()
{
        if(powerButton->getState()==RELEASE_ACTIVE)
    {
        
            light->Toggle();

    }
}

Listener::Listener(Button *button, Led *led)
{
 powerButton=button;
 light = led;
}

Listener::~Listener()
{

}