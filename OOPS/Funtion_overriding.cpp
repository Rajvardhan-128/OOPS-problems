
#include <iostream>
using namespace std ;

class A{
    
    public :
     void person(){// by adding virtual void person (){
        cout<<"good morning"<<endl;
        
    }
};
class B : public A {
    
    public:
    void person(){
        cout<<"good night"<<endl;
    }
};


int main() {
A *p;
B obj;
p=&obj;
p->person();//by pointer 

obj.person();
// obj.A::person();
    return 0;
}