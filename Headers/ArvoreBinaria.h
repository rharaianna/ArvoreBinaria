#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H
#include "NoArv.h"
#pragma once

class ArvoreBinaria
{
public:
    ArvoreBinaria();
    ~ArvoreBinaria();
    int getRaiz();
    void cria(int val, ArvoreBinaria* sae, ArvoreBinaria* sad); //da raiz para as folhas
    bool vazia();
    void imprime();
    bool busca(int val);
    void montaArvore();
    void insere(int val);
    int altura();

private:
    NoArv* raiz;
    void auxImprimePreOrd(NoArv *p);
    bool auxBuscaPreOrd(NoArv *p, int val);
    NoArv* auxMontaArvorePreO ();
    NoArv* auxInsere(NoArv*p, int val);
    void libera(NoArv *p);
    int auxAltura(NoArv*p);
};

#endif