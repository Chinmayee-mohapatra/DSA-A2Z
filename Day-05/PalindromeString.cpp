#include<bits/stdc++.h>
using namespace std;

string reverseStr(string& str, int index, int len){
    if(index>=len/2)
        return "";
    
    swap(str[index], str[len-index-1]);
    reverseStr(str, index+1, len);
    return str;
}

bool checkPalindrome(string& str, int i, int len){
    if(i>= len/2)
        return true;
    
    if(str[i] != str[len-i-1])
        return false;
    
    return checkPalindrome(str, i+1, len);
}

bool isPalindrome(string& str) {
    string s = str;
    int len = str.length();

    reverseStr(str, 0, len);
    if(s == str)
        return true;
    return false;
}

int main() {
    string str;
    getline(cin, str);

    if(isPalindrome(str))
        cout<<"true";
    else 
        cout<<"false";

    if(checkPalindrome(str,0, str.length())){
        return true;
    } else {
        return false;
    }

    return 0;
    
}