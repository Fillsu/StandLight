#ifndef LISTENER_H
#define LISTENER_H
#include "Listener.h"
#include "Controler.h"
#pragma once

class Listener
{
    
  private:
  Button *powerButton;
  Controler *cont;
  
  public :
  Listener(Button *button, Controler *led);
  ~Listener();
  void checkEvent();

};

#endif