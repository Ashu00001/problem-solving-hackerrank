#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[6][6]={{-9,-9,-9,1,1,1} 
 ,{0,-9,0,4,3,2},
{-9 ,-9 ,-9,1,2,3},
 {0  ,0 , 8 , 6, 6, 0},
 {0  ,0  ,0 ,-2 ,0 ,0},
 {0 , 0 , 1 , 2 ,4, 0}};
	int i,j,count=0,temp=0,sum=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			
		 sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
		}
		temp=std::max(temp,sum);
		}
		cout<<"temp"<<temp<<endl;
}
