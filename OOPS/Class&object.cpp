// EXAMPLE 1 :
// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std ;

// class print {
//     public:
//     void show(){
//         cout<<"learning OOPS concept";  
//     }
  
// };

// int main() {
 
//  print obj;
//  obj.show();
 
//     return 0;
// }
//-------------------------------------------------------------------------------------------------------------
// EXAMPLE 2 :
#include <iostream>
using namespace std ;

class person {
private :
int run;
string msg;
public :
    void play(){
    run = 50 ;
    cout<<"Today i scored "<<run<<"runs"<<endl;
    }
     void walk(){
     msg="Today i walked 3 kilometers";
     cout<<msg;
    }


};

int main() {
 
 person obj ;
 obj.play();
 obj.walk();
 
    return 0;
}