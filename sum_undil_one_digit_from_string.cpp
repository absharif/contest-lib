#include<bits/stdc++.h>
using namespace std;

int sum_undil_one_digit(string s)
{
	
		int sum = 0;
		int l = s.size();
#include<bits/stdc++.h>
using namespace std;

int sum_undil_one_digit(string s)
{
	
		int sum = 0;
		int l = s.size();

		for(int i= 0; i<l; i++)
		{
			if(s[i] >= 'a' && s[i] <= 'z')
			{
				//printf("%d", s[i]-96);
				sum += s[i]-96;
			}
			else if(s[i] >= 'A' && s[i] <= 'Z')
			{
				//printf("%d", (s[i]-64));
				sum += s[i]-64;
			}
		}
		
		while(sum>9)
		{
			int t=0;
			while(sum != 0)
			{
				t += sum% 10;
				sum /= 10;
			}
			sum = t;
		}
		
		return sum;
}

int main()
{
	string s;
	
	while(getline(cin, s))
	{	

		int x;
		x = sum_undil_one_digit(s);
		cout<<x<<endl;

	return 0;
}
