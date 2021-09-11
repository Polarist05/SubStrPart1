#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main() {
	string s;
	vector<int> v;
	v.push_back(0);
	 cin >> s;
	 int size = s.size();
	 s = s + s;
	 printf(" ");
	for (int i = 1,j = 0; i < s.size(); i++, j++) {
		while (s[i] != s[j]) {
			if (j - 1 < 0) {
				j = -1;
				break;
			}
			j = v[j - 1];
		}
		if (j + 1 == size) {
			printf("\n%d",i-size+1);
			return 0;
		}
	}
}