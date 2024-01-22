#include <iostream>
using namespace std;
string str,substring;
int maxch,currlength,currdiffs,maxlength,maxindex,arrlength;
bool isDifferent=true;
char characters[100]={};
void Resetvars(int &currlength,bool &isDifferent);
string Longestsub(string str,int maxch,int &currlength,bool &isDifferent);

int main(){
cout<<"Enter the string you want to manipulate\n";
cin>>str;
cout<<"Enter the maximum character number you want the substring to have\n";
cin>>maxch;
cout<<Longestsub(str,maxch,currlength,isDifferent);
return 0;
}

void Resetvars(int &currlength,bool &isDifferent,char characters[],int &currdifs){
currlength=0;
currdiffs=0;
isDifferent=true;
for(int i=0;i<100;i++){characters[i]='\0';}
}

string Longestsub(string str,int maxch,int &currlength,bool &isDifferent){
for(int i=0;i<str.length();i++){
    for(int j=i;j<str.length();j++){
        for(int check=0;check<arrlength;check++){if(characters[check]==str[j]){isDifferent=false;} }//checking if the in-loop character is different
    
    if(isDifferent==true){
        currdiffs++;
        if(currdiffs<=maxch){
        currlength++;
        characters[arrlength]=str[j];
        arrlength++;
        }
        else{
         if(currlength>maxlength){maxlength=currlength;maxindex=i;} Resetvars(currlength,isDifferent,characters,currdiffs);j+=100;
        }
    }
   else{
    currlength++;if(j==str.length()-1){if(currlength>maxlength){maxlength=currlength;maxindex=i; j++;}}
   }
   
    isDifferent=true;
    }
    Resetvars(currlength,isDifferent,characters,currdiffs);
}
//preparing the substring to return
substring.resize(100);
int substrindex=0;
for(int i=maxindex;i<maxindex+maxlength;i++){
substring[substrindex]=str[i];  substrindex++;
}

return substring;
}
