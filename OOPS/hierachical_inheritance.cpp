#include <iostream>
using namespace std ;
//   int a,b,c;
class animal {
   public:
   void eat (){
       cout<<"Animal Eating..."<<endl;
   }
};
class  cat : public animal{
    public:
    void voice(){
        cout<<"meow meow..."<<endl;
    }
};
class dog :public animal{
    public:
    void bark(){
        cout<<"woof woof..."<<endl;
    }
};



int main() {
cat c ;
dog d ;

c.eat(); c.voice();
d.eat(); d.bark();

    return 0;
}