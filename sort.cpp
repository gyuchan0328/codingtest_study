#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(string a, string b){
	if(a.length() == b.length()){
		return a < b;
	}
	else{
		return a.length() < b.length();
	}
}

void print(vector<string> &w, int number){
	for(int j;j<number;j++){
		cout << w[j] << endl;
	}
}

int main(){
    vector<string> w;
	int number;
	cin >> number;
	for(int i;i<number;i++){
		string word_t;
		cin >> word_t;
		w.push_back(word_t);
	}
	sort(w.begin(), w.end(), compare);
	w.erase(unique(w.begin(),w.end()),w.end());
	print(w,w.size());
	return 0;
}
