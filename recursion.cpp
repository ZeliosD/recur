#include <string>
#include <iostream>

using namespace std;

bool isPalindrome(string s) {
	int size = s.size();
	
	if (size == 1)
		return true;
	if (size==2)
		return s[0]==s[1];
	
	char ch1 = s[0];
	char ch2 = s[size-1];
	if (ch1==ch2){
		string s2 = s.substr(1, size-2);
		return isPalindrome(s2);
	}
	return false;
}

int main() {
	string word;
	cout << "Enter word to see if it is a palindrome: " <<endl;
	cin >> word;
	if(isPalindrome(word))
		cout << word << " is a palindrome." << endl;
	else
		cout << word << " is not a palindrome." << endl;
	return 0;
	
}
