#include<iostream>
#include<string>
#include<utility>
using namespace std;
int main()
{   
pair<string,int> Pair ,Pair1,Pair2;
Pair={"Tushar",10};
Pair1={"Tushar",10};
Pair2={"Tushar",20};


if (Pair==Pair1)
cout<<Pair.first<<"  "<<Pair.second<<endl;
if(Pair<Pair2)
cout<<Pair.first<<"  "<<Pair.second;

}
