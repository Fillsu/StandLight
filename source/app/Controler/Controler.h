#ifndef CONTROLER_H
#define CONTROLER_H


#include <string>
#include "View.h"


class Controler
{
private:
    int lightState;
    View *view;

public:
    
    virtual ~Controler();
    void updateEvent(std::string strBtn);
     Controler(View *viewer);

};

#endif