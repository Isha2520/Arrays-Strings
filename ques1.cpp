#include <iostream>
using namespace std;

void remvDupli(char* s)
{
    if (s[0] == '0')
        return;
 
    if (s[0] == s[1])
	{
        int i = 0;
        while (s[i] != '0') {
            s[i] = s[i + 1];
            i++;
        }
 
        remvDupli(s);
    }
    remvDupli(s + 1);
} 
int main()
{
    char s1[] = "aabccba";
    remvDupli(s1);
    cout << s1 << endl;
 
    return 0;
}
