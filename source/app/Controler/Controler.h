#ifndef CONTROLER_H
#define CONTROLER_H
#include "Led.h"
#include "string"
#pragma once

enum {LIGHT_OFF,LIGHT_ON};

class Controler
{
public:
    Controler(Led *led);
    virtual ~Controler();
    void updateEvent(std::string strBtn);


private:
    int lightState;
    Led *light;
};

#endif