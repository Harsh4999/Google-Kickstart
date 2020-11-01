/*Problem
Li has planned a bike tour through the mountains of Switzerland. His tour consists of N checkpoints, numbered from 1 to N in the order he will visit them. The i-th checkpoint has a height of Hi.

A checkpoint is a peak if:
It is not the 1st checkpoint or the N-th checkpoint, and
The height of the checkpoint is strictly greater than the checkpoint immediately before it and the checkpoint immediately after it.

Please help Li find out the number of peaks.

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Hi.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of peaks in Li's bike tour.

Limits
Time limit: 10 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
1 ≤ Hi ≤ 100.

Test set 1
3 ≤ N ≤ 5.

Test set 2
3 ≤ N ≤ 100.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt", "r+",stdin);
		freopen("output.txt", "w+",stdout);
	#endif
		int t,i,j,k,n,z=0;
		cin>>t;
		for(i=0;i<t;i++)
		{

			cin>>n;
			int *a = new int[n];
			for(k=0;k<n;k++)
			{
				cin>>a[k];
			}
			for(j=0;j<n;j++)
			{
				if(j==0)
				{
				    continue;
				}
				if(j==n-1)
				{
				    break;
				}
				else
				{
					if(a[j]>a[j+1] && a[j]>a[j-1])
					{
					    z++;
						
					}
				}
			}
			cout<<"Case #"<<i+1<<": "<<z<<"\n";
			z=0;
		}
		return 0;
}
