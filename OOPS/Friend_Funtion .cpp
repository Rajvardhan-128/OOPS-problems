// EXAMPLE 1 : 
// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std ;

// class raj    {
//     private:
//     string tv;
    
//     public:
//         void show()
//         {
//             tv="IPL Final 2023";
//         }
//        friend void ankush(raj r);
  
// };
// void ankush(raj r)
// {
//         cout<<"i am ankush now i Watching "<<r.tv;
// }
// int main() {
 
//  raj a;
//  a.show();
//  ankush(a);
 
 
 
//     return 0;
// }

EXAMPLE 2 :

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
class jatin;
class raj    {
    private:
   int a ;
    
    public:
        void ihave()
        {
           a=10;
        }
       friend void ankush(raj p1,jatin p2);
};
class jatin{
    private :
    int b;
    public:
            void ihave()
        {
           b=10;
        }
       friend void ankush(raj p1 , jatin p2);
    
};
void ankush(raj p1 , jatin p2)
{
      int c ;
      c = p1.a + p2.b;
      cout<<c;
}

int main() {
 
 raj a;
 a.ihave();
 jatin a2;
 a2.ihave();
 ankush(a,a2);
 
 
    return 0;
}