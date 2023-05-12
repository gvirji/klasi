
#include "stdafx.h"

#include "iostream"

using namespace std;

class samkutxedi

{

private:

int gverdi1;

int gverdi2;

int gverdi3;

public:

void minicheba(int x, int y, int z);

int Perimetri() {

return gverdi1+gverdi2 + gverdi3;

};

};

void samkutxedi::minicheba(int x, int y, int z)

{

gverdi1 = x;

gverdi2 = y;

gverdi3=z;

};

int main(){

samkutxedi samk;

samk.minicheba(47, 54, 62);

int perim=samk.Perimetri();

cout << "samkutxedis perimetri=" << perim << endl;

system("pause");

return 0;

}
