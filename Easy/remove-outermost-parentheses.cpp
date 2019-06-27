#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string S) {
        string result = "";
        int left,right;
        left = right = 0;
        for(int i=0;i<S.length();i++){
            if(S[i]=='('){
            	if(left++ != 0)
            		result.append(1,S[i]);
			}
            if(S[i]==')'){
            	if(++right!=left)
            		result.append(1,S[i]);
            	else
            		left = right = 0;
			}
        }
        return result;
    }
};

int main(){
	Solution s;
	cout<<s.removeOuterParentheses("(()())(())(()(()))");
	return 0;
} 


