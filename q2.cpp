//MuhammadMaaz_i253066_assignment03
	
	#include<iostream>
	#include<string>
	#include<iomanip>
	using namespace std;
	int main()
	{
		int month;
		int year;
		int weekday= 0 ;
		
		//getting the input from the user
		cout<<"Enter a month (1-12) : ";
		cin>>month;
		
		//check for validation
		if(month<1 or month>12)
		{
		cout<<"invalid input!"<<endl;
		return 0;
		}
		
		//getting the year from the user
		cout<< "Enter a year  : ";
		cin>>year;
		cout<<endl;
		
		//adding check for the year
		if(year<1 or year >9999)
		{
		cout<<"inavlid input!"<<endl;
		return 0;
		}
		
		//conditions for the month
		int monthdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		
		if(month==1)
		{
			cout<< "\tJanuary";	
		}
		if(month==2)
		{
			cout<< "\tFebuary";	
		}
		if(month==3)
		{
			cout<< "\tMarch";	
		}
		if(month==4)
		{
			cout<< "\tApril";	
		}
		if(month==5)
		{
			cout<< "\tMay";	
		}
		if(month==6)
		{
			cout<< "\tJune";	
		}
		if(month==7)
		{
			cout<< "\tJuly";	
		}
		if(month==8)
		{
			cout<< "\tAugust";	
		}
		if(month==9)
		{
			cout<< "\tSeptember";	
		}
		if(month==10)
		{
			cout<< "\tOctober";	
		}
		if(month==11)
		{
			cout<< "\tNovember";	
		}
		if(month==12)
		{
			cout<< "\tDecember" ;	
		}
		
		//leap year condition
		if((year%4==0 && year%100!=0) || year%400==0)
		{
			monthdays[1] = 29;
		}
		else
		{
			monthdays[1] = 28;
		}
		
		 int totaldays=0;
		 
		 //condtion for the rest of the years
		 if(year!=2025)
		 {
		 for(int i=0; i<year; i++)
		 {
		   if((i%4==0 && i%100!=0) || i%400==0)
		{
			totaldays+=366;
		}
		else
		{
		  	totaldays+=365;	
		}
		 
		 }
		 for (int j = 1; j < month; j++)
		 {
		 	totaldays+=monthdays[j-1];
		 }
		 int startday= (totaldays%7) ;
		 
		cout<<"  "<<year<<endl;
		cout<< " ---------------------------------" << endl;
		cout<< " SUN   MON   TUE   WED   THU   FRI   SAT" << endl;
		for(int i=1; i<startday; i++)
		{
			cout<<"      ";
		}
		for (int j= 1; j<= monthdays[month - 1]; j++)
		{
	    cout << setw(4) << j << "  ";
	    if ((j + startday  - 1) % 7 == 0)
	    {
	        cout << endl;
	    }
	}
	}
		//condtion for the year 2025
		 if(year==2025)
		 {
		 for(int i=1; i<=year; i++)
		 {
		   if((i%4==0 && i%100!=0) || i%400==0)
		{
			totaldays+=366;
		}
		else
		{
		  	totaldays+=365;	
		 }
		 
		 }
		 for (int j = 1; j < month; j++)
		 {
		 	totaldays+=monthdays[j-1];
		 }
		 int startday= totaldays%7;
		 
		cout<<"  "<<year<<endl;
		cout<< " -----------------------------------" << endl;
		cout<< " SUN  MON  TUE  WED  THU  FRI  SAT" << endl;
		for(int i=0; i<startday; i++)
		{
			cout<<"     ";
		}
			for (int j= 1; j<= monthdays[month - 1]; j++)
		{
	    cout << setw(4) << j << " ";
	    if ((j + startday) % 7 == 0)
	    {
	        cout << endl;
	    }
	}
	}
	return 0;
	}
