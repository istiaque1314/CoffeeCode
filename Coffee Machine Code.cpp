#include<bits/stdc++.h>
using namespace std;

// check the stock resources value is sufficient or not to the 
int resourseSuffient(int a[], int b[])
{
	int i,j;
	for(i = 0; i<3; i++)
	{
		for(j = i; j<=i; j++)
		{
			if(a[i]<b[j])
			{
				return i;
			}
		}
	}
	return -1;
}

// Print the resources details.
void resoursePrint(int res)
{
	int water = 0;
 	int milk = 1;
 	int coffee = 2;
 	
 	  if(res == water)
 	  {
 	  	cout<<"Sorry there is not enough water."<<endl;
	  }
	  if(res == milk)
	  {
	  	cout<<"Sorry there is not enough milk."<<endl;
	  }
	  if(res == coffee)
	  {
	  	cout<<"Sorry there is not enough coffee."<<endl;
      }
	
}
// Calculate the user input money.
 int processCoins(int q,int d,int n,int p)
 {
 	
 	float quaters = 0.25;
	float dimes = 0.10;
	float nickles = 0.05;
	float pennies = 0.01;
 	
 	float res;
 	res = (quaters*q + dimes*d + nickles*n + pennies*p);
 	return res;
 	
 }
// check the stock resources are less or more than required resources.
 float checkRecourse(int arr[],int n,int num)
 {
 	
 	int Espresso[] = {100,50,70};
 	int latte[]    = {150,40,30};
 	int capa[]      = {30,10,110};
 	
 	int exp = 1;
 	int lat = 2;
 	int cap = 3;
 	
 	if(num == exp)
 	{
 	  int res = resourseSuffient(arr,Espresso);
 	  resoursePrint(res);
    }
    else if(num == lat)
    {
   	  int res = resourseSuffient(arr,latte);
 	  resoursePrint(res);	
	}
	else
	{
	  int res = resourseSuffient(arr,capa);
 	  resoursePrint(res);	
	}

		int quaters,dimes,nickles,pennies;
		cout<<"Insert the coins :                 Example: 3 quaters[$0.25], 1 dimes[$0.10], 2 nickles[$0.05], 4 pennies[$0.01]"<<endl;
		cout<<"                                                 3*0.25 + 1*0.10 + 2*0.05 + 4*0.01 = $0.99"<<endl;         
		cout<<"Quaters, Dimes, Nickles, Pennies"<<endl;
		cin>>quaters>>dimes>>nickles>>pennies;
		
	    return processCoins(quaters,dimes,nickles,pennies);
	}
 // calculate report after purchasing.
 int deductionInGra(int con[],int ram[])
 {
 	int m = 0;
 	for(int i = 0; i<3; i++)
	{
		for(int j = i; j<=i; j++)
		{
		  con[m++] = con[i]-ram[j];
		}
	}
	
	return con[m];
 }
 
 // Print the report value after after ordering drink
  void makeCoffee(int container[], int n,int num)
  {
  	
  	int Espresso[] = {100,50,70};
 	int latte[]    = {150,40,30};
 	int capa[]     = {30,10,110};
 	
 	int exp = 1;
 	int lat = 2;
 	int cap = 3;
  	
  	if(num == exp)
 	{
      deductionInGra(container,Espresso);
      cout<<"Report after purchasing."<<endl;
      cout<<"Water, Milk, Coffee "<<endl;
      for(int i = 0; i<n; i++)
      {
          cout<<container[i]<<" ";
	  }
	   cout<<"\n";
    }
    else if(num == lat)
    {
	 deductionInGra(container,latte);
	 cout<<"Report after purchasing."<<endl;
	 cout<<"Water, Milk, Coffee "<<endl;
      for(int i = 0; i<n; i++)
      {
          cout<<container[i]<<" ";
	  }
	   cout<<"\n";
	}
	else
	{
     deductionInGra(container,capa);
     cout<<"Report after purchasing."<<endl;
     cout<<"Water, Milk, Coffee "<<" "<<endl;
      for(int i = 0; i<n; i++)
      {
          cout<<container[i]<<" ";
	  }
	  cout<<"\n";
	}
  	
  }
  
int main()
{

    int container[] = {1000,500,700};  // water[0],milk[1],coffee[2],
    int n = 3;

	while(1)
	{

	cout<<"Welcome To Istiaque Coffe Dispenser!\n"<<endl;
	int num;
	cout<<"What would you like ?"<<endl;
	cout<<"1: Espresso   : $2.85"<<endl;
	cout<<"2: Latte      : $1.95"<<endl;
	cout<<"3: Cappuccino : $4.20"<<endl;
	cin>>num;
	
	float espresso_cost = 2.50;
	float Latte_cost = 3.50;
	float cappuccino_cost = 1.50;
	float sum1,sum2,sum3;

	switch(num)
	{
		case 1:
			cout<<"you have ordered a Espresso!"<<endl;
		    sum1 = checkRecourse(container,n,num);
			

			if(sum1<espresso_cost)
			{
				cout<<"Sorry,that's not enough money,Money refunded!"<<endl;;
				break;
			}
			else 
			{
				cout<<"Your Espresso is being processed:"<<endl;
			}
			makeCoffee(container,n,num);
			cout<<"Here is your Espresso.Enjoy!"<<endl;
			cout<<endl;
			
			break;
		case 2:
			cout<<"you have ordered a Latte!"<<endl;
			
			sum2 = checkRecourse(container,n,num);

			if(sum2<Latte_cost)
			{
				cout<<"Sorry,that's not enough money,Money refunded!"<<endl;
				break;
			}
			else 
			{
				cout<<"Your Latte is being processed:"<<endl;
			}
			makeCoffee(container,n,num);
			cout<<"Here is your Latte.Enjoy!"<<endl;
		    cout<<endl;
		    
			break;
		case 3:
			cout<<"you have ordered a Cappuccino!"<<endl;

			sum3 = checkRecourse(container,n,num);
	
			if(sum3<cappuccino_cost)
			{
				cout<<"Sorry,that's not enough money,Money refunded!"<<endl;
				break;
			}
			else 
			{
				cout<<"Your Cappuccino is being processed:"<<endl;
			}
            makeCoffee(container,n,num);
			cout<<"Here is your Cappuccino.Enjoy!"<<endl;
			cout<<endl;
			
			break;	
		default:
		    cout<<"Your entry is invalid!\n";	
	}

}

	return 0; //return 0;
}
