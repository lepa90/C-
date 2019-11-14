#include <iostream>
#include <string>
using namespace std;
class zywaKomorka{
protected:
 int stoRoz;
 int masa;
 int wiek;
 
  public:
  int getStoRoz(){
    return stoRoz;
  };
  int getMasa(){
    return masa;
  };
  int getWiek(){
    return wiek;
  };
 
  void setStoRoz(int _stoRoz){
    stoRoz=_stoRoz;
  };
  void setMasa(int _masa){
    masa=_masa;
  };
  void setWiek(int _wiek){
    wiek=_wiek;
  };
  zywaKomorka(int _stoRoz, int _masa, int _wiek){
    stoRoz=_stoRoz;
    masa=_masa;
    wiek=_wiek;
  }
};
class istotaZywa:public zywaKomorka{
  int stoRoz;
  int masa;
  int wiek;
  private:
  int iq;
  int hobby;
 

  public:
    int getIq(){
      return iq;
    };
    int getHobby(){
      return hobby;
    };
    void setIq(int _iq){
      iq=_iq;
    };
    void setHobby(int _hobby){
      hobby=_hobby;
    }

};
class czlowiek:public istotaZywa{
  int wzrost;
  string dajglos;

  public:
  int getWzrost(){
    return wzrost;
  };
 

  void setWzrost(int _wzrost){
    wzrost=_wzrost;
  };


};
class obcaCzastka{
   int ksztalt;
   int waga;
  public:
  int getKsztalt(){
    return ksztalt;
  };
  int getWaga(){
    return waga;
  };
  void setWaga(int _waga){
    waga=_waga;
  };
  void setKsztalt(int _ksztalt){
    ksztalt=_ksztalt;
  };

};
class alien:public istotaZywa,private obcaCzastka{
int planeta;
public:
int getPlaneta(){
  return planeta;
};
void setPlaneta(int _planeta){
  planeta=_planeta;

};
};

