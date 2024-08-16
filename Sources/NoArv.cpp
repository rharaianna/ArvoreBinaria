#include "../Headers/NoArv.h"

NoArv::NoArv()
{

}

NoArv::~NoArv()
{

}

int NoArv::getInfo(){
    return info;
}
NoArv* NoArv::getDir(){
    return dir;
}
NoArv* NoArv::getEsq(){
    return esq;
}
void NoArv::setInfo(int val){
    info=val;
}
void NoArv::setDir (NoArv *p){
    dir=p;
}
void NoArv::setEsq (NoArv *p){
    esq=p;
}