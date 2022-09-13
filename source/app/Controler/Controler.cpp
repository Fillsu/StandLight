#include "Controler.h"


Controler::Controler(View *viewer)
{
view= viewer ;
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
            //lightState=LIGHT_ON;
            view->UpdateView("StateOn");
        }
        break;

        // case LIGHT_ON:
        // if(strBtn=="powerButton")
        // {
        //     lightState=LIGHT_OFF;
        //     view->UpdateView("StateOff");
        // }
        break;
    }
}