#include "client.h"
#include <iostream>
using namespace std;

Client::Client(std::string name,long id)
{
    this->id = id;
    this->name = name;
}

Client::Client(std::string name,long id,long m)
{
    this->id = id;
    this->name = name;
    this->monnaire = m;
}

void Client::Affichage()
{
    cout<<this->id<<endl;
    cout<<this->name<<endl;    
    cout<<this->monnaire<<endl;
}

void Client::depot(long m)
{
    this->monnaire +=m;
}

void Client::retirer(long m)
{
    this->monnaire -=m;
}


Client::~Client()
{
    cout<<"bye"<<endl;
}