#include <iostream>
#include <queue>
#include <utility>
using namespace std;
int n;
int x1,x2,y1,y2;
bool used[300][300];
queue <pair <int, int> > q;
int level[300][300];
void jump(int x1,int y1){
	used[x1][y1]=true;
	level[x1][y1]=0;
	if (used[x1+1][y1+2]==false && (x1+1>0 && x1+1<=n) && (y1+2>0 && y1+2<=n)){
		q.push(make_pair(x1+1,y1+2));
		level[x1+1][y1+2]=level[x1][y1]+1;
		if (x1+1==x2 && y1+2==y2){
			cout<<level[x2][y2];
			return;
		}
	}
	if (used[x1-1][y1+2]==false && (x1-1>0 && x1-1<=n) && (y1+2>0 && y1+2<=n)){
		q.push(make_pair(x1-1,y1+2));
		level[x1-1][y1+2]=level[x1][y1]+1;
		if (x1-1==x2 && y1+2==y2){
			cout<<level[x2][y2];
			return;
		}
	}
	if (used[x1+1][y1-2]==false && (x1+1>0 && x1+1<=n) && (y1-2>0 && y1-2<=n)){
		q.push(make_pair(x1+1,y1-2));
		level[x1+1][y1-2]=level[x1][y1]+1;
		if (x1+1==x2 && y1-2==y2){
			cout<<level[x2][y2];
			return;
		}
	}
	if (used[x1-1][y1-2]==false && (x1-1>0 && x1-1<=n) && (y1-2>0 && y1-2<=n)){
		q.push(make_pair(x1-1,y1-2));
		level[x1-1][y1-2]=level[x1][y1]+1;
		if (x1-1==x2 && y1-2==y2){
			cout<<level[x2][y2];
			return;
		}
	}
	if (used[x1+2][y1+1]==false && (x1+2>0 && x1+2<=n) && (y1+1>0 && y1+1<=n)){
		q.push(make_pair(x1+2,y1+1));
		level[x1+2][y1+1]=level[x1][y1]+1;
		if (x1+2==x2 && y1+1==y2){
			cout<<level[x2][y2];
			return;
		}
	}
	if (used[x1-2][y1+1]==false && (x1-2>0 && x1-2<=n) && (y1+1>0 && y1+1<=n)){
		q.push(make_pair(x1-2,y1+1));
		level[x1-2][y1+1]=level[x1][y1]+1;
		if (x1-2==x2 && y1+1==y2){
			cout<<level[x2][y2];
			return;
		}
	}
	if (used[x1+2][y1-1]==false && (x1+2>0 && x1+2<=n) && (y1-1>0 && y1-1<=n)){
		q.push(make_pair(x1+2,y1-1));
		level[x1+2][y1-1]=level[x1][y1]+1;
		if (x1+2==x2 && y1-1==y2){
			cout<<level[x2][y2];
			return;
		}
	}
	if (used[x1-2][y1-1]==false && (x1-2>0 && x1-2<=n) && (y1-1>0 && y1-1<=n)){
		q.push(make_pair(x1-2,y1-1));
		level[x1-2][y1-1]=level[x1][y1]+1;
		if (x1-2==x2 && y1-1==y2){
			cout<<level[x2][y2];
			return;
		}
	}
	while (!q.empty()){
		used[q.front().first][q.front().second]=true;
	if (used[q.front().first+1][q.front().second+2]==false && (q.front().first+1>0 && q.front().first+1<=n) && (q.front().second+2>0 && q.front().second+2<=n)){
		q.push(make_pair(q.front().first+1,q.front().second+2));
		level[q.front().first+1][q.front().second+2]=level[q.front().first][q.front().second]+1;
		if (q.front().first+1==x2 && q.front().second+2==y2){
			cout<<level[x2][y2];
			return;
			break;
		}
	}
	if (used[q.front().first-1][q.front().second+2]==false && (q.front().first-1>0 && q.front().first-1<=n) && (q.front().second+2>0 && q.front().second+2<=n)){
		q.push(make_pair(q.front().first-1,q.front().second+2));
		level[q.front().first-1][q.front().second+2]=level[q.front().first][q.front().second]+1;
		if (q.front().first-1==x2 && q.front().second+2==y2){
			cout<<level[x2][y2];
			return;
			break;
		}
	}
	if (used[q.front().first+1][q.front().second-2]==false && (q.front().first+1>0 && q.front().first+1<=n) && (q.front().second-2>0 && q.front().second-2<=n)){
		q.push(make_pair(q.front().first+1,q.front().second-2));
		level[q.front().first+1][q.front().second-2]=level[q.front().first][q.front().second]+1;
		if (q.front().first+1==x2 && q.front().second-2==y2){
			cout<<level[x2][y2];
			return;
			break;
		}
	}
	if (used[q.front().first-1][q.front().second-2]==false && (q.front().first-1>0 && q.front().first-1<=n) && (q.front().second-2>0 && q.front().second-2<=n)){
		q.push(make_pair(q.front().first-1,q.front().second-2));
		level[q.front().first-1][q.front().second-2]=level[q.front().first][q.front().second]+1;
		if (q.front().first-1==x2 && q.front().second-2==y2){
			cout<<level[x2][y2];
			return;
			break;
		}
	}
	if (used[q.front().first+2][q.front().second+1]==false && (q.front().first+2>0 && q.front().first+2<=n) && (q.front().second+1>0 && q.front().second+1<=n)){
		q.push(make_pair(q.front().first+2,q.front().second+1));
		level[q.front().first+2][q.front().second+1]=level[q.front().first][q.front().second]+1;
		if (q.front().first+2==x2 && q.front().second+1==y2){
			cout<<level[x2][y2];
			return;
			break;
		}
	}
	if (used[q.front().first-2][q.front().second+1]==false && (q.front().first-2>0 && q.front().first-2<=n) && (q.front().second+1>0 && q.front().second+1<=n)){
		q.push(make_pair(q.front().first-2,q.front().second+1));
		level[q.front().first-2][q.front().second+1]=level[q.front().first][q.front().second]+1;
		if (q.front().first-2==x2 && q.front().second+1==y2){
			cout<<level[x2][y2];
			return;
			break;
		}
	}
	if (used[q.front().first+2][q.front().second-1]==false && (q.front().first+2>0 && q.front().first+2<=n) && (q.front().second-1>0 && q.front().second-1<=n)){
		q.push(make_pair(q.front().first+2,q.front().second-1));
		level[q.front().first+2][q.front().second-1]=level[q.front().first][q.front().second]+1;
		if (q.front().first+2==x2 && q.front().second-1==y2){
			cout<<level[x2][y2];
			return;
			break;
		}
	}
	if (used[q.front().first-2][q.front().second-1]==false && (q.front().first-2>0 && q.front().first-2<=n) && (q.front().second-1>0 && q.front().second-1<=n)){
		q.push(make_pair(q.front().first-2,q.front().second-1));
		level[q.front().first-2][q.front().second-1]=level[q.front().first][q.front().second]+1;
		if (q.front().first-2==x2 && q.front().second-1==y2){
			cout<<level[x2][y2];
			return;
			break;
		}
	}						
	q.pop();	
	}
}
int main()
{
	cin>>n;
	cin>>x1>>y1;
	cin>>x2>>y2;
	jump(x1,y1);
	return 0;
}
