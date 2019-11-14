#include <iostream>
#include <string>
using namespace std;

class Macierz{
private:
int x;
int y;
int z;
int var;
int **tab;




public:

void setKomórka(int _x, int _y, int _var){
_x=x;
_y=y;
_var=var;
var=tab[x][y];
};
int getKomórka(int x, int y){
  return var;
};
void wypiszKomórka(){
  cout<<var;
}
Macierz(int x=3,int y=4){


  tab = new int *[x];
for(int i = 0;i<x;i++)
{
  tab[i]=new int[y];
}
for(int i = 0;i<x;i++)
        {
            delete [] tab[i];
        }
    delete []tab;
    tab=NULL;
  
}
Macierz(const Macierz &kopMacierz){
 
x=kopMacierz.x;
y=kopMacierz.y;
tab = new int *[x];
for(int i = 0;i<x;i++)
{
  tab[i]=new int[y];
}
for(int i = 0;i<x;i++)
        {
            delete [] tab[i];
        }
    delete []tab;
    tab=NULL;
  

}
Macierz()
{

  
  for ( int i = 0; i < x; i ++ ) 
      { 
    
          for (int j=0; j<y; j++)  
              tab[i][j]=0.0;
      }
}
Macierz & operator=(const Macierz &M){
    int x=M.x;
    int y=M.y;
 
    tab = new int *[x];
    for ( int i = 0; i < x; i ++ ) 
      { 
        tab[i]=new int[y];
      
      for (int j=0; j<y; j++) 
      { 
          tab[i][j]=tab[z][z];
      }

}
}
~Macierz(){

}

};

