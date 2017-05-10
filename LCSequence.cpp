#include <iostream>
#include <string>
#include <vector>

using namespace std;

int LCSequence(const string& word_a, const string& word_b)
{
	if(word_a.empty() || word_b.empty()){
		return 0;
	}
	int ceil[word_a.size() + 1][word_b.size() + 1];
	for(int i = 0; i <= word_a.size(); ++i){
		ceil[i][0] = 0;
	}
	for(int j = 0; j <= word_b.size(); ++j){
		ceil[0][j] = 0;
	}
	
	for(int i = 1; i <= word_a.size(); ++i){
		for(int j = 1; j <= word_b.size(); ++j){
			if(word_a[i] == word_b[j]){
				ceil[i][j] = ceil[i - 1][j - 1] + 1;
			}
			else{
				ceil[i][j] = max(ceil[i - 1][j], ceil[i][j - 1]);
			}
		}
	}
	
	return ceil[word_a.size()][word_b.size()];
}

int main()
{
	string a, b;
	while(cin >> a >> b){
		cout << LCSequence(a, b) << endl;;
	}
	
	return 0;
}
