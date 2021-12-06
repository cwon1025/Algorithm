#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a,
			pair<string, pair<int, int> > b) {
	if(a.second.first == b.second.first) {
		return a.second.second > b.second.second;
	} else {
		return a.second.first > b.second.first;
	}
}

int main() {
	vector<pair<string, pair<int, int> > > v;
	v.push_back(pair<string, pair<int, int> >("원천표", pair<int, int>(90, 19921025)));
	v.push_back(pair<string, pair<int, int> >("원천하", pair<int, int>(97, 19921025)));
	v.push_back(pair<string, pair<int, int> >("원천배", pair<int, int>(95, 19890327)));
	v.push_back(pair<string, pair<int, int> >("고루비", pair<int, int>(90, 19910930)));
	v.push_back(pair<string, pair<int, int> >("호빵이", pair<int, int>(90, 20220618)));
	
	sort(v.begin(), v.end(), compare);
	for(int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' ';
	}

	return 0;
}
