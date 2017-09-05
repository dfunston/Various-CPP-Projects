#include <iostream>

using namespace std;

bool isPalindrome(string str){
	string skipNow = " .,";
	string bank = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890";
	string repl = "qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbnm1234567890";
	string workingStr = "";
	string reverseStr = "";
	for(int a = 0; a < str.length(); a++){
		for(int b = 0; b < bank.length(); b++){
			if(str.at(a) == bank.at(b)){
				workingStr += repl.at(b);
				b = bank.length();
			}
		}

	}
	for(int c = workingStr.length() - 1; c >= 0; c--){
		reverseStr += workingStr.at(c);
	}
	for(int d = 0; d < workingStr.length(); d++){
		if(workingStr.at(d) != reverseStr.at(d)){
			return false;
		}
	}
	return true;
}

int main(){
	string str;
	bool isPal;
	//Send a few messages to set the mood
	cout << "Please enter text to be tested.\n";
	//Get the text
	getline(cin, str);
	//Run the code
	isPal = isPalindrome(str);
	//Return result
	if(isPal){
		cout << "This is a palindrome.\n";
	}else{
		cout << "This is not a palindrome.\n";
	}

	return 0;
}
