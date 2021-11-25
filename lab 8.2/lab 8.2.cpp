#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


char* InsertAfter(char* s, int i)
{
		if ((s[i] == '.') && (s[i + 1] == ' '))
			if (s[i + 2] >= 'a' && s[i + 2] <= 'z')
				s[i + 2] -= 32;

		if (s[i] != '\0')
			return InsertAfter(s, i + 1);
		else
			return s;

	
}
void main()
{
	char s[30];
	cout << "Enter string: " << endl;
	cin.getline(s, 30);

	cout <<endl << InsertAfter(s, 0) << endl;
	
}