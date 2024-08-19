#ifndef FILA_H
#define FILA_H
#include "NoFila.h"
#pragma once
class Fila
{
public:
    Fila();
    ~Fila();
    NoArv* getInicio(); // retorna No do inicio
    void enfileira(NoArv*val); // insere No no fim
    NoArv* desenfileira(); // elimina No do inicio
    bool vazia(); // verifica se esta vazia
    void imprime();

private:
    NoFila *inicio;
    NoFila *fim;
};
#endif