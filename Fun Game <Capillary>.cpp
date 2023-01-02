#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
  int num;
  long long x;
	cin >> num;
	queue<long long>a;
	stack<long long>b;
	for(int i=0;i<num;i++){
        cin>>x;
        a.push(x);
        b.push(x);
	}
	while(!a.empty()&&!b.empty()){
        if(a.front()>b.top()){
            printf("%d ",1);
            b.pop();
        }
        else if(a.front()<b.top()){
            printf("%d ",2);
            a.pop();
        }
        else{
            printf("%d ",0);
            a.pop();
            b.pop();
        }
	}
    return 0;
}
