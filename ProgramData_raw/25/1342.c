//********************************
//*?????2?N??   **
//*?????? 1300012957 **
//*???2013.11.19  **
//********************************
int main ( )
{
	int n ;
	cin >> n ;
	double n1[101] = {0} ;
	int i,j ;
	if( n == 0 )
	{
		cout << 1 ;
	}                               //?????0????1
	else if( n != 0 )               //????0?
	{
		n1[0] = 2 ;                 //????2
		for( i = 1 ; i <= n - 1 ; i++ )
			                        //i????????????
		{
			for( j = 0 ; j <= 100 ; j++ )
				                    //j???????
						            //?????????2?????
			{
				n1[j] = n1[j] * 2 ; //???*2
				if( n1[j] >= 10 )   //??*2???10
				{
					n1[j+1] += 0.5 ;//??????*2?????0.5
					                //?*2???1
					n1[j] -= 10 ;   //?????????10
				}
			}
		}
		for( i = 100 ; i >= 0 ; i-- )
		{
			if( n1[i] != 0 )
				break ;             //???????????????i
		}
		for( j = i ; j >= 0 ; j-- ) //???????????????
			                        //??i???0??
		{
			cout << n1[j] ;         //??????
		}
	}
	return 0 ;
}