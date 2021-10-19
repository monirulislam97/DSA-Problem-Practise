/*Group Battle
Mohammad Shafayet Hossain A19EC4016
Md Monirul Islim Molla A19EC4013
*/


#include<iostream>
#include<iomanip>

using namespace std;


bool check_number(string str) {
   for (int i = 0; i < str.length(); i++)
   if ((isdigit(str[i]) == false )||(str[i]!="-") )
      return false;
      return true;
}

int main()
{
string n;
int num[10], m=0;
cout<<" Enter the 10 digits : " << endl;

cin>> n;


if(check_number(n)==false)
{
cout<< n <<" is incorrect. "<<endl;
return 0; }

  for (int i = 0; i < n.length(); i++)
  {


    if (n[i] !="-" )
    {
        num[m]=n;
        m++;
    }
  }
    for (int i = 0; i < n.length(); i++)
  {



    return 0;
}
