#include <iostream>
using namespace std;

void remvDupli(char* s1)
{
    if (s1[0] == '0')
        return;
 
    if (s1[0] == s1[1])
	{
        int i = 0;
        while (s1[i] != '0') {
            s1[i] = s1[i + 1];
            i++;
        }
 
        remvDupli(s1);
    }
    remvDupli(s1 + 1);
} 
int main()
{
    char s1[] = "aabccba";
    remvDupli(s1);
    cout << s1 << endl;
 
    return 0;
}
