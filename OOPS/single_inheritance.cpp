#include <iostream>
using namespace std ;

class Dad {
    protected:
    int amount;
    public:
    void input(){
        amount=10000;
    }
};
class Son:public Dad{
    private:
    int money;
    public:
    
    void show(){
        money=3222;
        cout<<"Son Money : "<<money<<endl;
        cout<<" Dad money:"<<amount<<endl;
    }
};

int main() {

 Son s ;
 s.input();
 s.show();
 
    return 0;
}