#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int AN;
	cin >> AN;
	
	if(AN < 1)
	{
		cout << "數值不可小於1" << endl;
		return 0;
	}
	
	if(AN > 9999)
	{
		cout << "數值過大" << endl;
		return 0;
	}
	
	
	while(AN >= 1000)
	{
		
		s = s + 'M';
		AN = AN-1000;
		
	}
	
	while(AN > 0)
	{
		if(AN >= 900)
		{
			s = s + "CM";
			AN = AN-900;
		}
		
		if(AN >= 500)
		{
			s = s + 'D';
			AN = AN-500;
		}
		
		if(AN >= 400)
		{
			s = s + "CD";
			AN = AN-400;
		}
		
		while(AN >= 100)
		{
			s = s + 'C';
			AN = AN-100;
		}
		
		if(AN >= 90)
		{
			s = s + "XC";
			AN = AN-90;
		}
		
		if(AN >= 50)
		{
			s = s + 'L';
			AN = AN-50;
		}
		
		if(AN >= 40)
		{
			s = s + "XL";
			AN = AN-50;
		}
		
		while(AN >= 10)
		{
			s = s + 'X';
			AN = AN-10;
		}
		
		if(AN >= 9)
		{
			s = s + "IX";
			AN = AN-50;
		}
		
		if(AN >= 5)
		{
			s = s + 'V';
			AN = AN-5;
		}
		
		if(AN >= 4)
		{
			s = s + "IV";
			AN = AN-4;
		}
		
		if(AN >= 1)
		{
			s = s + 'I';
			AN = AN-1;
		}
	}
	cout << s << endl;
	return 0;
}
