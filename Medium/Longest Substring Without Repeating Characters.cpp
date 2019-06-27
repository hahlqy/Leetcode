#include<iostream>
#include<string>
using namespace std; 

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        int length = s.length();
        int i=0,len=0;
        string exam = "";
        while(i<length){
        	if(find(exam,s[i])){
        		max = max>len?max:len;
        		for(int j=i-1;j>=0;j--)
        			if(s[j]==s[i]){
        				i = j+1;
        				break;
					}
				exam = "";
				exam.append(1,s[i++]);
				len = 1;
			}
			else{
				len++;
				exam.append(1,s[i++]);
			}
		}
		return max>len?max:len;
    }
    bool find(string s,char ch){
    	for(int i=0;i<s.length();i++){
    		if(ch==s[i]){
    			return true;
			}
		}
		return false;
	}
};

int main(){
	string s = "abcshaka";
	Solution su = Solution();
	cout<<su.lengthOfLongestSubstring(s)<<endl;
	return 0;
}
