#include "../Headers/NoFila.h"

NoFila::NoFila()
{
  
}

NoFila::~NoFila()
{

}

NoArv* NoFila::getInfo() { return info; }
NoFila* NoFila::getProx() { return prox; }
void NoFila::setInfo(NoArv*p) { info = p; };
void NoFila::setProx(NoFila *p) { prox = p; }