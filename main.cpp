#include<iostream>
using namespace std;
#include<string>

int main()
{
    int i;//this step is totally useless
    string num;// lol good idea
    cin>>num;
    
    for (i=0;i<num.length();i++)
        if (i!=num.length()-1)
            cout<<num[i]<<",";
        else
            cout<<num[i];
    
    return 0;
}

/*
alt method
#include<iostream>
using namespace std;

int main()
{
	int num = 10000;
	int integer;
	cin >> integer;
	for (int i = 4; i >= 0; i--)
	{
		int temp = integer / num;
		if (i != 0)
		{
			cout << temp << ",";//dont change line
		}
		else
		{
			cout << temp << endl;
		}
		integer -= temp * num;//renew this
		num /= 10;//renew this
	}

	return 0;
}
*/
