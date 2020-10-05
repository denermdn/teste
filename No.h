#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

class No
{
private:
    int info;
    No *prox;
public:
    No();
    ~No();
    int getInfo();
    void setInfo(int val);
    No* getProx();
    void setProx(No *p);
};

#endif // NO_H_INCLUDED
