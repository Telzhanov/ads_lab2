#include <iostream>
using namespace std;
char a[300][300];
bool used[300][300];
int n;
int m;
int counter=0;
void check(int x,int y){
	if (a[x][y+1]=='#' && used[x][y+1]==false && (x>0 && x<=n) && (y>0 &&y<=m) ){
		used[x][y+1]=true;
		check(x,y+1);
	}
	if (a[x+1][y]=='#' && used[x+1][y]==false && (x>0 && x<=n) && (y>0 &&y<=m) ){
		used[x+1][y]=true;
		check(x+1,y);
	}
	if (a[x][y-1]=='#' && used[x][y-1]==false && (x>0 && x<=n) && (y>0 &&y<=m) ){
		used[x][y-1]=true;
		check(x,y-1);
	}
	if (a[x-1][y]=='#' && used[x-1][y]==false && (x>0 && x<=n) && (y>0 &&y<=m) ){
		used[x-1][y]=true;
		check(x-1,y);
	}
}
void count(){
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			if (a[i][j]=='#' && used[i][j]==false){
				used[i][j]=true;
				check(i,j);
				counter++;
			}
		}
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
	count();
	cout<<counter;
	return 0;
}
