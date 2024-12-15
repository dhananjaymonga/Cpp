#include <iostream>
using namespace std;
int main() {
int prev0=0;
int prev1=1;
for(int i=0;i<18;i++){
    int newprev=prev0+prev1;
    cout<<newprev<<endl;
    prev1=prev0;
    prev0=newprev;
}
    return 0;
}