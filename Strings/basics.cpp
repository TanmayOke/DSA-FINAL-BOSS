#include <iostream>
using namespace std;


string defangIPaddr(string address) {
        string ans;
        int index=0;
        int end=address.size();
        while(index<end){
            if(address[index]=='.'){
                ans=ans+"[.]";
            }
            else{
                ans=ans+address[index];
            }
            index++;
        }
        return ans;
    }

  //Valid Palindrome
    bool isAlphaNum(char ch){
        if((ch>='0' && ch<='9') || 
            tolower(ch)>='a' && tolower(ch)<='z'){
            return true;
            }
        return false;
     }
    bool isPalindrome(string s) {
       

     int st=0,end=s.length()-1;
     while(st<end){
        if(!isAlphaNum(s[st])){
            st++;
            continue;
        }
        if(!isAlphaNum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }
        st++,end--;
     }  
     return true; 
    }  


  //remove all occurences from substring
  
  string removeOccurrences(string s, string part) {
        while(s.length()>0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());

        }
        return s;
    }

    //longest palindrome
    int longestPalindrome(string s) {
        vector<int> lower(26,0);
        vector<int> upper(26,0);

        for(int i=0;i<s.length();i++){
            if(s[i]>='a'){
                lower[s[i]-'a']++;
            }
            else{
                upper[s[i]-'A']++;
            }
        }
        int count=0;
        int odd=0;
        for(int i=0;i<26;i++){
            if(lower[i]%2==0){
                count+=lower[i];
            }
            else
            {
                count+=lower[i]-1;
                odd=1;
            }
            if(upper[i]%2==0){
                count+=upper[i];
            }
            else{
                count+=upper[i]-1;
                odd=1;
            }
        }
        int ans=count +odd;
    return ans;
    }
int main(){
    string str="Tanmay";
    cout << str << endl;
    cout<<str.size()<<endl;
    return 0;
}