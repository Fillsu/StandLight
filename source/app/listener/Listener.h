#ifndef LISTENER_H
#define LISTENER_H
#include "Listener.h"

#pragma once

class Listener
{
    
  private:
  Button *powerButton;
  Led *light;
  
  public :
  Listener(Button *button, Led *led);
  ~Listener();
  void checkEvent();

};

#endif