#include <bits/stdc++.h>

using namespace std;

vector<pair<string,int>> newspapers= {{"TOI",26},{"Hindu",20.5},{"ET",34},{"BM",10.5},{"HT",18}};
int budget;
void recursive(int start,int end){
    if(start==end)return;
    for(int i=start+1;i<end;i++){
        if(newspapers[start].second+newspapers[i].second<=budget){
            cout<<newspapers[start].first<<","<<newspapers[i].first<<endl;
        }
    }
    recursive(start+1,end);
}

int main() {
    cout<<"budget:";
    cin>>budget;
    recursive(0,newspapers.size());
    return 0;
}
