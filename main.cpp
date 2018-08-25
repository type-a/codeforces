#include <iostream>
#include <vector>
#include <utility>

using namespace std;

pair<int, pair<int, int>> findBiggestPlus(const vector<vector<bool>>& field)
{
    pair<int, pair<int, int>> result(-1, pair<int, int>(-1, -1));
    int m = field.size();
    if(m == 0) return result;
    int n = field[0].size();
    if(n == 0) return result;
    vector<vector<int>> right(m, vector<int>(n));
    vector<vector<int>> up(m, vector<int>(n));

    for(int y = 0; y < m; y++)
    {

        right[y][n - 1] = field[y][n - 1] ? 1 : 0;
        for(int x = n - 2; x >= 0; x--) right[y][x] = field[y][x] ? right[y][x + 1] + 1 : 0;
    }

    for(int x = 0; x < n; x++)
    {
        up[0][x] = field[0][x] ? 1 : 0;
        for(int y = 1; y < m; y++) up[y][x] = field[y][x] ? up[y - 1][x] + 1 : 0;

    }

    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < m; y++)
        {
            int s = (right[y][x] + up[y][x]);
            if(s > result.first) result = pair<int, pair<int,int>>(s, pair<int, int>(x, y));
        }
    }
    return result;
}
int main()
{
    int n,m;char temp;
    cin>>n>>m;
    vector<vector<bool>>v(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>temp;
            if(temp == '.') v[i].push_back(1);
            else v[i].push_back(0);
        }
    }

    auto result = findBiggestPlus(v);
    if(result.first == 0 ) cout << "NO";
    else cout <<"YES" << endl <<  result.first-1;
}