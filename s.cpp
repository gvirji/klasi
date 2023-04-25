#include <iostream>

using namespace std;

class martkutxedi {
        public:

 
 int sigane=3;
 int sigrdze=4;
 void perimetri(); 
        
 
}martkutxedi2 ;
 void martkutxedi:: perimetri() {
         int p=sigane+sigrdze;
         cout<<"perimetri "<<p<<endl;}
int main(){
        
martkutxedi martkutxedi1;
cout<<"shemoiyvanet pirveli martkutxedis monacemebi\n";
cin>>martkutxedi1.sigrdze>>martkutxedi1.sigane;



 cout<<"martkutxedis sigrdze "<<martkutxedi1.sigrdze <<endl;
  cout<<"martkutxedis sigane "<<martkutxedi1.sigane <<endl;

martkutxedi1.perimetri();
cout<<"shemoiyvanet meore martkutxedis monacemebi\n";
cin>>martkutxedi2.sigrdze>>martkutxedi2.sigane;



 cout<<"martkutxedis sigrdze "<<martkutxedi2.sigrdze <<endl;
  cout<<"martkutxedis sigane "<<martkutxedi2.sigane <<endl;

martkutxedi2.perimetri();

    return 0;
}
