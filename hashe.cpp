#include <iostream>
#include "No.h"#include "hashe.h"
#include "math.h"
using namespace std;

hashe::hashe()
{
}
hashe::~hashe()
{

}
void hashe::create(int n,hashe a)
{
    m=n;
    lista=new No[m];
    colisoes=0;
}
No* hashe::insertdivi(int key,int data)
{
    int chave;
    No *p=new No(),*q;
//    p=new No();
    chave=key%m;
    p=&lista[chave];
    while(p->getProx()!=NULL)
    {
        colisoes++;
        p=p->getProx();
        if(p->getInfo()==data){
//            cout << "ja existente" << endl;
            return p;
        }
    }
//    cout << "Inserindo " << endl;
    q=new No();
    q->setInfo(data);
    q->setProx(NULL);
    p->setProx(q);
    return q;

}
No* hashe::insertmult(int key,int data)
{
    int chave;
    float A=sqrt(5)-1;
    A=A/2;
    No *p=new No(),*q;
//    p=new No();
    A=(key*A);
//    cout << A << endl;
    A=A-((int)A);
    chave=A*m;
//    cout << chave << endl;
    //cout << chave;
    p=&lista[chave];
    while(p->getProx()!=NULL)
    {
        colisoes++;
        p=p->getProx();
        if(p->getInfo()==data){
//            cout << "ja existente" << endl;
            return p;
        }
    }
//    cout << "Inserindo " << endl;
    q=new No();
    q->setInfo(data);
    q->setProx(NULL);
    p->setProx(q);
    return q;

}
int hashe::somatorio(int dd,int data,int c) ///100-123-3
{
    int vet[c],aux=data,d,e,val_1=0,val_2=0,val_3=0;
    for(int i=0;i<c;i++)
    {
        vet[i]=aux/dd;   ///vet[3]={1,2,3}
        aux=data%dd; ///aux 123-23 23-3 3-0
        dd=dd/10; ///dd 100-10 10-1 1-0
    }
    d=c/3; ///d 1
    e=c%3; ///e 0
    for(int i=d;i>0;i--) ///i=1
    val_1=vet[i-1]+val_1;
    for(int i=d*2;i>d;i--) ///i=2
    val_2=vet[i-1]+val_2;
    if(c/3!=0)
    {
        for(int i=d*3+e;i>d*2;i--) ///i=3+0
        val_3=vet[i-1]+val_3;
    }
    else if(e==2)
    {
        val_3=vet[0]+vet[1];
    }
    else
        val_3=vet[0];
    val_1=val_1+val_2+val_3;
    return val_1;
}
No* hashe::insertminha(int key,int data)
{
    int chave,dd=1,c=0,s;
    No *p=new No(),*q;
//    p=new No();
    while(data/dd>10) ///123   dd=1 dd=10 v=1 dd=100 c=2 c=3 100/123/3
    {
        dd=dd*10;
        c++;
    }
    c=c+1;
    s=somatorio(dd,data,c); ///s=6
//    cout << s << endl;
    chave=s%m;
    p=&lista[chave];
    while(p->getProx()!=NULL)
    {
        colisoes++;
        p=p->getProx();
        if(p->getInfo()==data){
//            cout << "ja existente" << endl;
            return p;
        }
    }
//    cout << "Inserindo " << endl;
    q=new No();
    q->setInfo(data);
    q->setProx(NULL);
    p->setProx(q);
    return q;

}
void hashe::destroy()
{
    delete [] lista;
}
No* hashe::lookup(int key,int data)
{
    int chave;
    No *p=new No(),*q;
    chave=key%m;
    p=&lista[chave];
    while(p->getProx()!=NULL)
    {
        p=p->getProx();
        if(p->getInfo()==data){
            return p;
        }
    }
    return NULL;
}
int hashe::getColisao()
{
    return colisoes;
}
void hashe::imprime(int key)
{
    int chave;
    No *p;
//    chave=key%m;
//    p=&lista[chave];
    p=&lista[key]; ///com indice not key
    while(p->getProx()!=NULL)
    {
        p=p->getProx();
        cout << p->getInfo();
    }
    return;
}
