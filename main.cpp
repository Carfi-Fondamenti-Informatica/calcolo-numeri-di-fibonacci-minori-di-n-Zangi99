#include <iostream>
using namespace std;

int main() {
   int n=0;
   cin>>n;
   if (n==0){
       cout<<"errore, scegli un numero maggiore di 0"<<endl;
   }
   else{
       cout<<"1"<<endl;
       int a=0, b=1, c=0;

       for (int i = 0; i < n; i++){
           c=a+b;
           a=b;
           b=c;
           if(c<=n){
               cout << c << endl;
           }else{break;}
       }
   }
   return 0;
}
