#include <iostream>
using namespace std ;
int count =0;
class A    {
    
  public :
//Constructor :
  A(){
      cout<<"object "<<++count<<" created"<<endl;
  }
//Destructor : 
  ~A(){
      cout<<"object "<<count--<<" deleted"<<endl;
  }
};

int main() {
 
 
 A obj,obj2,obj3;
    return 0;
}
