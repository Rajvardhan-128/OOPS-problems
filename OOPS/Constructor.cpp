// Default constructor 
#include <iostream>
using namespace std ;

class A    {
    
    int a , b ;
    public :
    A(){
        a=10 , b=20;
        cout<<a <<ends<<b;
    }
};

int main() {
 
 A o;
    return 0;
}













// parameterised Constructor  
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;

class A    {
    
    int a , b ;
    public :
    A(int a , int b){
        
        cout<<a <<ends<<b;
    }
};

int main() {
 
 A o(10,200);
    return 0;
}

// COPY Constructor

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;

class A    {//parameterised
    int x, y;
    public :
    A(int a, int b ){
        x=a , y=b;
      cout<<x<<ends<<y<<endl;
    }
    A(A &ref){ //copy
       x= ref.x;
       y= ref.y;
       cout<<x<<ends<<y<<endl;
    }
};

int main() {
 
 A obj(12,2);
 A obj2=obj;
    return 0;
}