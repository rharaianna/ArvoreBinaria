#ifndef NOARV_H
#define NOARV_H

#pragma once

class NoArv
{
public:
    NoArv();
    ~NoArv();
    int getInfo();
    NoArv* getDir();
    NoArv* getEsq();
    void setInfo(int val);
    void setDir (NoArv *p);
    void setEsq (NoArv *p);

private:
    int info;
    NoArv *esq;
    NoArv *dir;
};

#endif