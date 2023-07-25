#include<iostream>
#include<vector>

using namespace std;

class student{
    string name;
    public:
   
   int age;
   bool gender;

   student(){
    cout<<"Default constructor"<<endl;
   }

   student(string s,int a,int g){
    cout<<"parameterised constructor"<<endl;
     name=s;
     age=a;
     gender=g;
   }//parameterised constructor

    student(student &a){
        cout<<"Copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    ~student(){
        cout<<"Destructor called"<<endl;
    }

   void setName(string s){
     name=s;
   }

   void getName(){
     cout<<name<<endl;
   }

   void printInfo(){
    cout<<"Name= ";
    cout<<name<<endl;
    cout<<"Age= ";
    cout<<age<<endl;
    cout<<"Gender= ";
    cout<<gender<<endl;
   }

   bool operator==(student &a){
    if(name==a.name && age==a.age && gender==a.gender){
        return true;
    }
    return false;
   }
};

int main(){
   
//    student arr[3];
//    for(int i=0;i<3;i++){
//         string s;
//         cout<<"Name= ";
//         cin>>s;
//         arr[i].setName(s);
//         cout<<"Age= ";
//         cin>>arr[i].age;
//         cout<<"Gender= ";
//         cin>>arr[i].gender;
//    }

//    for(int i=0;i<3;i++){
//     arr[i].printInfo();
//    }

   student a("Atul",17,1);
   //a.printInfo();
   student b;
   student c=a;
  
  if(c==a){
    cout<<"Same"<<endl;
  }
  else{
    cout<<"Not Same"<<endl;
  }
 
 return 0;
 }


