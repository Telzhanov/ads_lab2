#include <iostream>
int a[100][100];
int n;
int m;
bool used[100];
using namespace std;
void dfs(int v){
	used[v]=true;
	for (int i=1; i<=n; i++){
		if (a[v][i]==1 && used[i]==false){
			dfs(i);
		}
	}
}
int main()
{
	cin>>n>>m;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			a[i][j]=0;
		}
	}
	for (int i=1; i<=m; i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=1;
	}
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	dfs(1);
	for (int i=1; i<=n; i++)
	{
		if (used[i]!=true){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
