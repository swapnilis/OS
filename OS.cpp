#include<iostream>
using namespace std;
int main()
{
	
	int process;
	cout<<"Enter the total no of the Process you wanted to run.";
	cin>>process;
	string p1[process];
	int BurstTime;
	int arrivalTime;
	int  waitingTime;
	int priority;
	for(int i=0;i<process;i++)
	{
		cout<<"Enter the processes you wanted to run: \n"<<endl;
		cin>>p1[i];
		
		cout<<"Enter the burst for their process: \n"<<endl;
		cin>>BurstTime;
		cout<<"Enter the arrival time for the process: \n"<<endl;
		cin>>arrivalTime;
	}
	cout<<"\n Processes "<<" Burst Time "<<" Waiting Time "<<" Arrival Time "<<" Turn Around Time "<<endl;
	for(int j=0;j<process;j++)
	{
		cout<<p1[j]<<"\t\t"<<BurstTime<<"\t\t"<<"\t\t"<<arrivalTime<<endl;
	}
}

//now I am left with calculation of the waiting time , and setting up the priorities.....
