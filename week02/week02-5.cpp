#include <iostream>
using namespace std;
int main()
{
	long long int a,b;

	while(cin >> a >> b){
	//while (scanf("%lld%lld",&a,&b)==2){
		long long int ans=a - b ;
		if(ans<0)ans= b - a ;
		//if(a>b)ans=a-b;
		//if(b>a)ans=b-a;
		//printf("%lld\n",ans);
		cout << ans <<endl;
	}
}
