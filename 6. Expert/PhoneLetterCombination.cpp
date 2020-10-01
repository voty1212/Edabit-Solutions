// Problem statement: Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
// Probelm Link: https://edabit.com/challenge/npLurjMJofmFRCJwx
#include <bits/stdc++.h> 
using namespace std; 
vector<string> plc(const int num[], int n, const string table[]) 
{
	vector<string> list; 
	queue<string> qu; 
	qu.push(""); 
	while (!qu.empty()) { 
		string s = qu.front(); 
		qu.pop(); 
		if (s.length() == n) 
			list.push_back(s); 
		else
			for (auto letter : table[num[s.length()]]) 
				qu.push(s + letter); 
	} 
	return list; 
} 
void letterCombinations(const int num[], int a) 
{ 
	string table[10] 
		= { "", "", "abc", "def", "ghi", "jkl", 
			"mno", "pqrs", "tuv", "wxyz" }; 
	vector<string> list = plc(num, a, table); 
	for (auto word : list) 
		cout << word << " "; 

	return; 
} 
int main() 
{ 
	int num[] = { 2, 3, 4 }; 
	int a = sizeof(num) / sizeof(num[0]); 
	letterCombinations(num, n); 
	return 0; 
} 
