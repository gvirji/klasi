#include <iostream>

using namespace std;
 class gamyofi{
         private:
         int a;
         int b;
         
         public:
         void miniweba(int x,int y){
                 a=x;b=y;
         }
         void arisgamyofi(){
                 if(a%b==0) cout <<"b aris a-s gamyofi"<<endl;
                 else  cout <<"b  ar  aris a-s gamyofi"<<endl;
         }
         
         
           
         
         
         
 };
int main()
{ int x, y;
   cout<<"shemoitanet ori ricxvi"<<endl;
   cin>>x>>y;
   gamyofi gamyofi1;
   gamyofi1.miniweba(x,y);
   gamyofi1.arisgamyofi();
  

    return 0;
};
