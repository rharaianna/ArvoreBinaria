#include "../Headers/ArvoreBinaria.h"
#include "Headers/Fila.h"
#include <iostream>
#include <sstream>
using namespace std;

ArvoreBinaria::ArvoreBinaria()
{
    raiz = NULL;
}

ArvoreBinaria::~ArvoreBinaria()
{
    libera(raiz);
}

void ArvoreBinaria::libera(NoArv *p){
    if(p!=NULL){
        libera(p->getEsq());
        libera(p->getDir());
        delete p;
    }
}

int ArvoreBinaria::getRaiz(){
    if(!vazia()){
        return raiz->getInfo();
    }
    cout<<"Arvore vazia";
    exit(1);
}

void ArvoreBinaria::cria(int val, ArvoreBinaria* sae, ArvoreBinaria* sad){
    NoArv *p = new NoArv();
    p->setInfo(val);
    p->setEsq(sae->raiz);
    p->setDir(sad->raiz);
    raiz=p;
}

void ArvoreBinaria::montaArvore(){
    if(!vazia()){
        cout<<"arvore já montada"<<endl;
    }
    else{
        raiz = auxMontaArvorePreO();
    }
}

NoArv* ArvoreBinaria::auxMontaArvorePreO(){
    string linha;
    cin >> linha;
    if(linha!= "NULL" && linha!="null"){
        istringstream ent(linha);
        int val;
        ent>> val;
        NoArv *p = new NoArv();
        p->setInfo(val);
        p->setEsq(auxMontaArvorePreO());
        p->setDir(auxMontaArvorePreO());
        return p;
    }
    else
        return NULL;
}


void ArvoreBinaria::insere(int val){
    raiz = auxInsere(raiz, val);
}

NoArv* ArvoreBinaria::auxInsere(NoArv*p, int val){
    if(p==NULL){
        p=new NoArv();
        p->setInfo(val);
        p->setEsq(NULL);
        p->setDir(NULL);
    }
    else{
        char direcao;
        cin>> direcao;
        if(direcao == 'e' || direcao=='E'){
            p->setEsq(auxInsere(p->getEsq(),val));
        }
        else
            p->setDir(auxInsere(p->getDir(),val));
        }
    return p;
}

bool ArvoreBinaria::vazia(){
    return raiz==NULL;
}
void ArvoreBinaria::imprime(){

}

void ArvoreBinaria::auxImprimePreOrd(NoArv *p){
    if(p != NULL){
        cout<< p->getInfo() << " ";
        auxImprimePreOrd(p->getEsq());
        auxImprimePreOrd(p->getDir());
    }
}

bool ArvoreBinaria::busca(int val){
    return auxBuscaPreOrd(raiz,val);
}

bool ArvoreBinaria::auxBuscaPreOrd(NoArv *p, int val){
    if(p==NULL)
        return false;
    else if (p->getInfo() == val)
        return true;
    else if (auxBuscaPreOrd(p->getEsq(),val))
        return true;
    else
        return auxBuscaPreOrd(p->getDir(),val);
}

int ArvoreBinaria::altura(){
    return auxAltura(raiz);
}

int ArvoreBinaria::auxAltura(NoArv*p){
    if (p==NULL)
        return -1;
    else{
        int he = auxAltura(p->getEsq());
        int hd = auxAltura(p->getDir());
        if(he>hd)
            return 1+ he;
        else
            return 1 + hd;
    }
}

void ArvoreBinaria::percursoLargura(){
    if(raiz!=NULL){
        NoArv *p;
        Fila f;
        f.enfileira(raiz);
        while (!f.vazia())
        {
            p = f.desenfileira();
            cout<< p->getInfo()<<endl;
            if(p->getEsq()!=NULL)
                f.enfileira(p->getEsq());
            if(p->getDir() !=NULL )
                f.enfileira(p->getDir());
        }
        
    }
}