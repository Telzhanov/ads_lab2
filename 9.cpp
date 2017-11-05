
#include <iostream>

using namespace std;
int n;
int a[100][100];
bool used[100];
bool edgeused[100][100];
void dfs(int v) {
	used[v] = true;
	for (int i = 1; i <= n; i++) {
		if (a[v][i] == 1 && used[i] == false) {
			edgeused[v][i] = true;
			edgeused[i][v] = true;
			dfs(i);
		}
	}
}
int main()
{
	int allcounter = 0;
	int usedcounter = 0;
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	dfs(1);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i][j] == 1) {
				allcounter++;
			}
			if (a[i][j] == edgeused[i][j] && a[i][j]==1) {
				usedcounter++;
			}
		}
	}
	cout << (allcounter - usedcounter)/2;
    return 0;
}
