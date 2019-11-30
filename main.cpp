#include <iostream>

using std::endl;
using std::cout;


class Base{
public:
    virtual void printType(){
        subfunction();
        cout<<"I am Inherited"<<endl<<endl;
    }

    virtual void subfunction(){

    }
};

class SubFirst : public Base{
     void subfunction() override {
        cout<<"I am the first subtype!"<<endl<<endl;
    }
};

class SubSecond : public Base{
     void subfunction() override {
        cout<<"I am the second Sub Class"<<endl;
    }
};

int main() {
    SubFirst first;
    first.printType();

    SubSecond second;
    second.printType();



    return 0;
}