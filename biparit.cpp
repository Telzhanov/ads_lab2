#include <iostream>
#include <queue>
using namespace std;
int a[100][100];
bool color[100];
bool used[100];
bool usedcheck[100];
int n;
queue <int> q;

void toColor(int v){
	used[v]=true;
	color[v]=false;
	for (int i=1; i<=n; i++){
		if (a[v][i]==1 && used[i]==false){
			used[i]=true;
			color[i]=true;
			q.push(i);
		}
		while (!q.empty()){
			used[q.front()]=true;
			for (int i=1; i<=n; i++){
				if (a[q.front()][i]==1 && used[i]==false){
					q.push(i);
					if (color[q.front()]==true){
						color[i]=false;
					}
					else{
						color[i]=true;
					}
				}
			}
			q.pop();
		}
	}
}
bool check(int v){
	usedcheck[v]=true;
	for (int i=1; i<=n; i++){
		if (a[v][i]==1 && usedcheck[i]==false){
			usedcheck[i]=true;
			if (color[i]==color[v]){
				return false;
			}
			q.push(i);
		}
	}
	while (!q.empty()){
		usedcheck[q.front()]=true;
		for (int i=1; i<=n; i++){
			if (a[q.front()][i]==1 && usedcheck[i]==false){
				usedcheck[i]=true;
				if (color[q.front()]==color[i]){
					return false;
				}
				q.push(i);
			}
		}
		q.pop();
	}
	return true;
}
int main()
{
	cin>>n;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	toColor(1);
	if (check(1)){
		cout<<"Bipartite";
	}
	else{
		cout<<"Not bipartite";
	}
	return 0;
}
