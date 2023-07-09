
// #include <iostream>
// // using namespace std ;

// int main() {


// std::cout<<"Learn coding";

//     return 0;
// }

// ------------------------------------------------------------------------------------


#include <iostream>
using namespace std ;

namespace A
{
    int a;
    void print()
    {
        a=10;
        cout<<a<<endl;
    }
};
namespace B
{
    int a;
    void print()
    {
        a=20;
        cout<<a<<endl;
    }
};
int main() {

A::print();
B::print();


    return 0;
}