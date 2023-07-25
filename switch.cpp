//multiple languages robot
#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"Input a character:  ";

    // if (button=='a')
    // {
    //    cout<<"Hello"<<endl;
    // }
    // else if (button=='b')
    // {
    //     cout<<"Namaste"<<endl;
    // }
    // else if (button=='c')
    // {
    //     cout<<"Salute"<<endl;
    // }
    // else if (button=='d')
    // {
    //     cout<<"Ciao"<<endl;
    // }
    // else if (button=='e')
    // {
    //     cout<<"Hola"<<endl;
    // }
    // else{
    //     cout<<"I am still learning more"<<endl;
    // }

    switch (button)
    {
      case 'a':
      cout<<"Hello"<<endl;
      break;
      case 'b':
      cout<<"Namaste"<<endl;
      break;
      case 'c':
      cout<<"Salute"<<endl;
      break;
      case 'd':
      cout<<"Ciao"<<endl;
      break;
      case 'e':
      cout<<"Hola"<<endl;
      break;

    default :
    cout<<"I am still learning more!"<<endl;
      break;
    }

  return 0;
 }