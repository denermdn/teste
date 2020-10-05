#ifndef HASHE_H_INCLUDED
#define HASHE_H_INCLUDED
#include "No.h"
class hashe{

public:
    int colisoes=0;
    hashe();
    ~hashe();
    void create(int n,hashe a);
    No* insertdivi(int key,int data);
    No* insertmult(int key,int data);
    No* insertminha(int key,int data);
    void destroy();
    void imprime(int key);
    No* lookup(int key,int data);
    int somatorio(int dd,int data,int c);
    int getColisao();
private:
    int m;
    No *lista;
};

#endif // HASHE_H_INCLUDED
