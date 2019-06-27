#include<iostream>
using namespace std;
 
class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while(x){
        	int pop = x%10;
            if(result>INT_MAX/10||(result==INT_MAX/10 && (pop)>(INT_MAX%10))) return 0;
            if(result<INT_MIN/10||(result==INT_MIN/10 && (pop)<(INT_MIN%10))) return 0;
            result = result*10 + pop;
            x /= 10;
		}
		return result;
    }
};
int main(){
	Solution su;
	cout<<su.reverse(-1463847412)<<endl;
	return 0;
}
