#include <iostream>
using namespace std ;
  int a,b,c;
class A {
    // int a,b;
    public:
    void input();
    void add();
    
};
void A :: input(){
    cout<<"Enter the two numbers:";
        cin>>a>>b;
}
void A :: add(){
    // int c;
    c=a+b;
    cout<<"Addition:"<<c<<endl;
}
class B{
    // int a,b;
    public:
    void sub ();
};
void B::sub(){
    c=a-b;
    cout<<"substraction :"<<c<<endl;
}

class C :public A , public B{
    public:
    void multi();
    void div();
    
};
void C :: multi(){
    c=a*b;
    cout<<"Multiplication:"<<c<<endl;
}
void C :: div(){
    c=a/b;
    cout<<"Division:"<<c<<endl;
}

int main() {

C o;
o.input();
o.add();
o.sub();
o.multi();
o.div();

    return 0;
}