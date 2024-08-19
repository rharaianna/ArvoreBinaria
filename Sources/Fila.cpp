#include "../Headers/Fila.h"
#include <iostream>
using namespace std;

Fila::Fila()
{
    inicio = fim = NULL;
}

Fila::~Fila()
{
    NoFila *p = inicio;
    while(inicio!=NULL){
        inicio = p->getProx();
        delete p;
        p = inicio;
    }
}

NoArv * Fila::getInicio(){
    if(inicio!=NULL){
        return inicio->getInfo();
    }
    else{
        cout << "Fila Vazia"<<endl;
        exit(1);
    }
}

void Fila::enfileira(NoArv * val){
    NoFila *p = new NoFila;
    p->setInfo(val);
    p->setProx(NULL);
    if (inicio==NULL){
        inicio = p;
    }
    else{
        fim ->setProx(p);
    }
    fim = p;
} 

NoArv* Fila::desenfileira(){
    if (inicio != NULL){
        NoFila *p = inicio;
        inicio = p->getProx();
        if(fim == NULL){ //Não entendi
            fim=NULL;
        }
        NoArv* val = p->getInfo();
        delete p;
        return val;
    }
    else{
        cout<<"Fila vazia"<<endl;
        exit(1);
    }
}

bool Fila::vazia(){
 return inicio==NULL;
}

void Fila::imprime(){
    cout<<"Fila: ";
    for(NoFila *p = inicio; p!= NULL; p=p->getProx()){
        cout << p->getInfo() << " ";
    }
    cout << endl;
}