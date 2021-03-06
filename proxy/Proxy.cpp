#include "Proxy.h"
#include <iostream>
using namespace std;

Subject::Subject()
{
}

Subject::~Subject()
{
}

ConcreteSubject::ConcreteSubject()
{
}

ConcreteSubject::~ConcreteSubject()
{
}

void ConcreteSubject::request()
{
    cout << "ConcreteSubject......request...." << endl;
}

Proxy::Proxy(): _sub(NULL)
{
}

Proxy::Proxy(Subject* sub)
{
    _sub = sub;
}

Proxy::~Proxy()
{
    if(!_sub)
    {
        delete _sub;
        _sub = NULL;
    }
}

void Proxy::request()
{
    cout << "Proxy request...." << endl;
    _sub->request();
}