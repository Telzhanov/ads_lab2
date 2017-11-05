#include <iostream>
using namespace std;
int a[100][100];
int used[100][100];
int n;
int m;
int x,y,x2,y2;
void go(int x1,int y1){
	used[x1][y1]=true;
	if (a[x1+1][y1]==0 && used[x1+1][y1]==false && (x1+1>0 && x1+1<=n)){
		used[x1+1][y1]==true;
		go(x1+1,y1);
	}
	if (a[x1-1][y1]==0 && used[x1-1][y1]==false && (x1-1>0 && x1-1<=n)){
		used[x1-1][y1]==true;
		go(x1-1,y1);
	}
	if (a[x1][y1+1]==0 && used[x1][y1+1]==false && (y1+1>0 && y1+1<=m)){
		used[x1][y1+1]==true;
		go(x1,y1+1);
	}
	if (a[x1][y1-1]==0 && used[x1][y1-1]==false && (y1-1>0 && y1-1<=m)){
		used[x1][y1-1]==true;
		go(x1,y1-1);
	}
}
int main()
{
	cin>>n;
	cin>>m;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			cin>>a[i][j];
		}
	}
	cin>>x>>y;
	cin>>x2>>y2;
	go(x,y);
	if (used[x2][y2]==true){
		cout<<"yes";
	}
	else {
		cout<<"NO";
	}
	return 0;
}
