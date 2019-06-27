#include<iostream>
#include<vector>
#include<list> 
using namespace std;
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string words_key[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        list<string> result;
        for (int i=0;i<words.size();i++){
            string s;
            for(int j=0;j<words[i].length();j++){
                s.append(words_key[words[i][j]-'a']);
            }
            result.push_back(s);
        }
        for(list<string>::iterator it=result.begin(); it != result.end();it++){
        	cout<<*it<<endl;
		}
		result.sort();
        result.unique();
        cout<<endl;
        for(list<string>::iterator it=result.begin(); it != result.end();it++){
        	cout<<*it<<endl;
		}
        return result.size();
    }
};
int main(){
	vector<string> words;
	string s[] = {"zocd","gjkl","hzqk","hzgq","gjkl"};
	for(int i=0;i<5;i++)
		words.push_back(s[i]);
	Solution sl;
	cout<<sl.uniqueMorseRepresentations(words)<<endl;
	return 0;
}
