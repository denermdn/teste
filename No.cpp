#include <iostream>
#include "No.h"
using namespace std;


No::No()
{
    info=-1;
    prox=NULL;
}
No::~No()
{

}
int No::getInfo()
{
    return info;
}
void No::setInfo(int val)
{
    info=val;
}
No* No::getProx()
{
    return prox;
}
void No::setProx(No *p)
{
    prox=p;
}
