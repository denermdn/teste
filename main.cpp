#include <iostream>
#include "hashe.h"
#include <stdlib.h>
#include <time.h>
#include "No.h"
using namespace std;

int main()
{
    int n1,n2,n3,aux1,aux2;
    hashe a,b,c;
    No *r,*s,*t;
    cout << "Numero de elemento da hashe:" << endl;
    cin >> n1;
    srand (time(NULL));

    a.create(n1,a);
    b.create(n1,b);
    c.create(n1,c);
    for(int i=0;i<n1;i++)
    {
        aux1=rand() % n1;
        aux2=rand() % n1;
//        cout << aux1 << " " << aux2 << endl;
        a.insertdivi(aux1,aux2);
        b.insertmult(aux1,aux2);
        c.insertminha(aux1,aux2);
//        cin >>aux1 >>aux2;
//        a.insertdivi(aux1,aux2);
//        b.insertdivi(aux1,aux2);
//        c.insertdivi(aux1,aux2);
    }
    cout << "Numero de colisoes" << endl << "Metodo da divisao: ";
    cout << a.getColisao() << endl;
    cout << "Metodo da multiplicacao: ";
    cout << b.getColisao() << endl;
    cout << "Metodo do enlacamento deslocado: ";
    cout << c.getColisao() << endl;
//    r=a.insertdivi(2,3);
//    s=a.insertdivi(7,3);
//    r=a.insertdivi(2,3);
//    s=a.insertdivi(7,4);
//    r=b.insertdivi(2,3);
//    s=b.insertdivi(7,4);
//    r=c.insertminha(2,124);
//    s=c.insertminha(7,133);
//    a.imprime(2);
//    b.imprime(2);
//    cout << " 1 ";
//    c.imprime(1);
//    cout << endl;
//    cout << " 2 ";
//    c.imprime(2);
//    cout << endl;
//    cout << " 3 ";
//    c.imprime(3);
//    cout << endl;
//    cout << " 4 ";
//    c.imprime(4);
//    cout << endl;
//    cout << " 5 ";
//    c.imprime(5);
//    cout << endl;
//    cout << " 6 ";
//    c.imprime(6);
//    cout << endl;
//    cout << " 0 ";
//    c.imprime(0);
//    cout << endl;

//    cout << endl;
//    if(a.lookup(2,5)!=NULL)
//    {
//        cout<<a.lookup(2,5)->getInfo();
//    }
//    else
//        cout << "NULL" << endl;
    a.destroy();
    b.destroy();
    c.destroy();    return 0;
}
