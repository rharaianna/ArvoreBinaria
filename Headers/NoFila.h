#ifndef NOFILA_H
#define NOFILA_H
#include "NoArv.h"
#pragma once

class NoFila
{
public:
    NoFila();
    ~NoFila();
    NoArv* getInfo();
    NoFila* getProx();
    void setInfo(NoArv* p);
    void setProx(NoFila *p);

private:
    NoArv * info;
    NoFila *prox;
};

#endif