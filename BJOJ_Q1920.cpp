#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> ARR;

bool compare(int i, int j) { return (i < j); }

int main() {

	int i, j, N, M, QUESTION, ANS;
	
	for (cin>>N, i = 0; i < N; i++) {
		cin >> M;
		ARR.push_back(M);
	}

	sort(ARR.begin(), ARR.end());

	for (cin>>M; M--;) {
		
		cin >> QUESTION;

		ANS = (binary_search(ARR.begin(), ARR.end(), QUESTION, compare)) ? 1 : 0;

		printf("%d\n", ANS);
	}

	return 0;
}