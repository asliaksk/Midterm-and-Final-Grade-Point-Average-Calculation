#include<iostream>
using namespace std;
int main()
{

int ortalama,vize,final;
cout<<"vize notunuzu giriniz" << endl;
cin>>vize;

cout<<"final notunuzu giriniz"<< endl;
cin>>final;

ortalama=((vize)*40/100)+((final)*60/100);

cout<<"ortalamaniz:"<< ortalama <<endl;

if (ortalama>=60)
{
cout<<"gectiniz"<<endl;
}
else
{
cout<<"kaldiniz"<<endl;
}
return 0;
}
