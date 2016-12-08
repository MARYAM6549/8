#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  char a;
  while(1)
  {
      int flag=0;
cout<<"Choose one part:\na   temperature\nb   weight\nc   time\nd   exit\n\n";
cin >> a ;
cout<<"\n";
switch (a) {
  case 'a':{float farenheite;cout<<"farenheite = "; cin>>farenheite ; cout<<"\ncelsius = "<<((float)5/9)*(farenheite-32)<<"\n";}break;
  case 'b':{float pound ;cout<<"pound = "; cin>>pound ; cout<<"\nKg = "<<(0.45356*pound)<<"\n";}break;
//  case 'c':{int day ;cout<<"number of day = "; cin>>day ; if (day<187) {} }break;  !!!!!!  WHAt???????
  case 'd':flag++; break;
}if (flag) break;
}
  return 0;
}
