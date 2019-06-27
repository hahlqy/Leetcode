#include<iostream>
#include<vector>
using namespace std; 
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
    	cout<<"A.size:"<<A.size()<<endl;
        int length = A.size();
        for(int i=0;i<length;i++){
            bool tag = true;
            for(int j=0;j+1<length-i;j++){
                if(A[j]%2&&A[j+1]%2==0){
                	cout<<A[j]<<A[j+1]<<endl;
                    int k = A[j];
                    A[j] = A[j+1];
                    A[j+1] = k;
                    tag =false;
                }
            }
            if (tag) break;
        }
        return A;
    }
};
int main(){
	vector<int> s;
	int a[] = {3,1,2,4};
	for(int i=0;i<4;i++)
		s.push_back(a[i]);
	Solution x;
	s = x.sortArrayByParity(s);
	for(int i=0;i<s.size();i++)
		cout<<s[i]<<"\t";
	cout<<endl;
	return 0;
}
