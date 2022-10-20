#include <iostream>
#include <string>
using namespace std;
class Client
{
    private:
        std::string name;
        long id;
        long monnaire;
    public:
        Client(std::string name,long id);
        Client(std::string name,long id,long m);
        void Affichage();
        void depot(long m);
        void retirer(long m);
        ~Client();
};