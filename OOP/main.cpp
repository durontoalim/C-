#include <iostream>

using std::string;
class structure {
public:
    string name;
    string details;
    int id;
    
    void details_name(){
       std::cout<< "name - "<<name<<std::endl;
       std::cout<< "datails - "<<name<<std::endl;
       
    }
};

int main(){

    structure hello;

    hello.name = "Utin";
    hello.details = "SWE";
    hello.id = 55;
} 