#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    double skv,skr,stor,diag,diam;
    cout<<"Площа квадрата: ";
    cin>>skv;
    while(skv<0)
    {if(skv<0){cout<<"error"<<endl;
    cout<<"ploscha kvadrata: ";
    cin>>skv;}
     };
    cout<<"ploscha kruga: ";
    cin>>skr;
    while(skr<0)
    {if(skr<0){cout<<"error"<<endl;
    cout<<"ploscha kruga: ";
    cin>>skr;}
     };
    stor=sqrt(skv);
    diag=stor*sqrt(2);
    diam=2*sqrt(skr/M_PI);
    if(diam>=stor){cout<<"krug ne vlize v kvadrat"<<endl;}
    else{cout<<"krug vlize v kvadrat"<<endl;}
    if(diam>=diag){cout<<"kvadrat vlize v krug";}
    else{cout<<"kvadrat ne vlize v krug";}
    return 0;
}
