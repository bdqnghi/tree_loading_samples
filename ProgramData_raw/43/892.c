//****************************************************
//*  ? ? ?: homework.cpp                          *
//*  ?    ?: ???                                *
//*  ????: 2012?10?22?                        *
//*  ????: ??????                          *
//****************************************************


int main()
{
	int a[10001] ,i ,j ,n ;  //??A?????????? 
	cin >> n;
	for (i = 2;i <= n;i++) a[i] = 1; //???A 
	for (i = 2;i <= n/2;i++)
	{
		if (a[i])
		{
			j = i + i; //????????? 
			while (j < n)
			{  //???? 
				a[j] = 0;
				j = j + i;
			}
		}
	}
	for (i = 2;i <= n / 2; i++){
		if (a[i] && a[n - i]) cout << i << ' ' << n - i << endl;  
		//????????? 
	}
	
	return 0;
}