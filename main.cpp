#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "fun.h"
#include <algorithm>
using namespace std;



int main()
{
//vector <string> v;
string tekstw;
ifstream plik;
plik.open("a.txt");
string tekst;
enum STATES {initial,inside,outside};
STATES state;
int i=0;
int j=0;

while(plik.good()){

    getline(plik, tekst);
tekst.erase (std::remove(tekst.begin(), tekst.end(), '\r\n'), tekst.end());
tekst.erase (std::remove(tekst.begin(), tekst.end(), '\n'), tekst.end());
tekst.erase (std::remove(tekst.begin(), tekst.end(), '\t'), tekst.end());
tekst.erase (std::remove(tekst.begin(), tekst.end(), '\r'), tekst.end());


 vector<string> v = parse_book(tekst);

   for(int i = 0; i<v.size(); ++i)
        cout << i+1 << ". " << v.at(i) << endl;


   /* for(int i = 1; i<v.size(); ++i)
        if(i%4==0 && i<6)
        cout << i+1 << ". " << v.at(i) << endl;
        else cout<<"";
*/
cout<<"******************"<<endl;
/*
vector<Pair> par;
    for(unsigned int i = 0; i<v.size(); ++i)
     add_word(par, v.at(i));

    cout << par.size() << endl;
    for(uint32_t i = 0; i < par.size(); ++i)
        cout << par.at(i).word << " " <<par.at(i).cnt << " razy. " << endl;*/
}


plik.close();









    return 0;
}

