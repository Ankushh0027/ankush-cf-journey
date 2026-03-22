#include<iostream>
using namespace std;
 int main(){
int n ;
cout<<"Enter number of words:";

cin>>n;
while(n--){

string word;
cin>>word;

if(word.length()<=10){
cout<<word<<endl;
}
else{
    cout<<word[0];
    cout<<word.length()-2;
    cout<<word[word.length()-1];
    cout<<endl;

}
}
return 0;

 }