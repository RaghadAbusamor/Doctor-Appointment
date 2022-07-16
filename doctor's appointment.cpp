#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
struct p
{
	string name;
	int id;
};
p sw[4][3];
p th[4];

class peatint
{
private:
public:
	peatint()
	{
	}
	~peatint()
	{
	}
	void  reservation()
	{
		int x, time;
		cin >> x;

		switch (x)
		{
		case 1:
		case 2:
		case 3:
		case 4:
			cout << " you have time  at ";

			check(x - 1);

			cout << "please enter the time: ";
			cin >> time;
			if (check_time(time, x - 1))
			{
				cout << "please enter your name: ";
				if (time == 10)
				{
					cin >> sw[x - 1][0].name;
					sw[x - 1][0].id = rand()+1;

					cout << "Thank you for making the reservation. your id is    " << sw[x - 1][0].id << endl;
				}
				if (time == 11)
				{
					cin >> sw[x - 1][1].name;
					sw[x - 1][1].id = rand()+1;

					cout << "Thank you for making the reservation. your id is " << sw[x - 1][1].id << endl;
				}
				if (time == 12)
				{
					cin >> sw[x - 1][2].name;
					sw[x - 1][2].id = rand()+1;

					cout << "Thank you for making the reservation. your id is " << sw[x - 1][2].id << endl;
				}
			}
			else
			{
				cout << "Sorry, this is not available" << endl;

				cout << "please select a day (1-Sun, 2-Mon, 3-Tue, 4-Wed, 5-Thu): ";
				reservation();
			}
			break;
		case 5:
			cout << "you have time  at ";
			case5();
			break;
		default:cout<<"wrong  number "<<endl;

		}

	};
	void check(int i)
	{
		if (sw[i][0].id == 0)
			cout << " 10," << " ";
		if (sw[i][1].id == 0)
			cout << ", 11, " << " ";
		if (sw[i][2].id == 0)
			cout << ", 12, " << " ";
		else
			cout << "this day is not availabel";
		cout << endl;
	}
	
	bool check_time(int time, int i)
	{
		if (time == 10)
		{
			if (sw[i][0].id == 0)
			{
				return true;
			}
		}
		if (time == 11)
		{
			if (sw[i][1].id == 0)
			{
				return true;
			}
		}
		if (time == 12)
		{
			if (sw[i][2].id == 0)
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}

	void search(int c)
	{
		int x = 0;

		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (sw[i][j].id == c)
				{
					x += 1;
					cout << "Hello " << sw[i][j].name << endl;
					if (i == 0)
					{
						cout << "Your reservation is on Sun ";	
					}
					if (i == 1)
					{
						cout << "Your reservation is on Mon ";	
					}
					if (i == 2)
					{
						cout << "Your reservation is on Tue ";
					}
					if (i == 3)
					{
						cout << "your reservauion is on  Wed ";
					}
					if (j == 0)
					{
						cout << " at 10:00 am " << endl;
					}
					if (j == 1)
					{
						cout << " at 11:00 am  " << endl;
					}
					if (j == 2)
					{
						cout << "at 12:00 am    " << endl;
					}
				}
				else
				{ }	
			}
			
		}
		for(int i=0;i<4;i++)
		{
			if(th[i].id==c)
		     { x++;
		     cout<<"Hello "<<th[i].name<<endl<<"Your reservation is on Thur ";
		     if(i==0)
		     cout<<"at 4:00 pm  "<<endl;
		     if(i==1)
		     cout<<"at 5:00 pm  "<<endl;
		     if(i==2)
		     cout<<"at 6:00 pm  "<<endl;
		     if(i==3)
		     cout<<"at 7:00 pm  "<<endl;
			 }
			
		}
		if (x < 1)
			cout << "this is wrong number\n";
	}
	
bool test_c(int c)
	{
		int x = 0;
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (sw[i][j].id == c)
				{
					x++;
				}
				else
					;
			}
		}
		for(int i=0;i<4;++i)
		{
			if(th[i].id==c)
			x++;
		}
			if (x < 1)
				return false;
			else
			{
				return true;
			}

	}
	void cancel(int c)
	{
		string y;
		cin >> y;
		if (y == "no" || y == "No" || y == "NO")
			return;
		else
		{
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (sw[i][j].id == c)
					{
						sw[i][j].name = "no one ";
						sw[i][j].id = 0;
						cout << "Your reservation is cancelled" << endl;
					}
				}
			}
			for(int i=0;i<4;i++)
			{
				if (th[i].id == c)
					{
						th[i].name = "no one";
						th[i].id = 0;
						cout << "Your reservation is cancelled" << endl;
					}
			}
		}
	}	
void case5()
{
if(th[0].id==0)
 cout<<" 4 ,";	
if(th[1].id==0)
 cout<<" 5 ,";	
 if(th[2].id==0)
 cout<<" 6 ,";	
 if(th[3].id==0)
 cout<<" 7 ,"<<endl;		
 
check_timeCas5();	
}
void check_timeCas5()
	{	int time,x=0;
	cout<<"please enter the time: ";
    cin>>time;
		if (time == 4)
		{
			if (th[0].id == 0)
			{
				cout<<"pleas enter your name ";
                cin>>th[0].name;
                th[0].id=rand()+1;
                cout<<"Thank you for making the reservation. your id is    "<<th[0].id<<endl;
                x++;
			}
		}
		if (time == 5)
		{
			if (th[1].id == 0)
			{
			cout<<"pleas enter your name ";
                cin>>th[1].name;
                th[1].id=rand()+1;
                cout<<"Thank you for making the reservation. your id is    "<<th[1].id<<endl;
                x++;		
			}
		}
		if (time == 6)
		{
			if (th[2].id == 0)
			{
			cout<<"pleas enter your name ";
                cin>>th[2].name;
                th[2].id=rand()+1;
                cout<<"Thank you for making the reservation. your id is    "<<th[2].id<<endl;
                x++;
			}
		}
		if (time == 7)
		{
			if (th[3].id == 0)
			{
				cout<<"pleas enter your name ";
                cin>>th[3].name;
                th[3].id=rand()+1;
                cout<<"Thank you for making the reservation. your id is    "<<th[3].id<<endl;
                x++;
			}
	}
	 
	if(x<1)	
	{
			cout << "Sorry, this is not available" << endl; 
			cout << "please select a day (1-Sun, 2-Mon, 3-Tue, 4-Wed, 5-Thu): ";
		     reservation();
	}
}
};

int main()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sw[i][j].name = " ";
			sw[i][j].id = 0;
		}
	}
	  for(int i=0;i<4;i++)
        {th[i].id= 0;
        th[i].name = "  ";
		}
	peatint p;
	int x;
	while (true)
	{

		cout << "Hello if you wish to make a reservation, please press 1.if you wish to ask about your reservation, please press 2: ";
		cin >> x;
		switch (x)
		{
		case 1:cout << "please select a day (1-Sun, 2-Mon, 3-Tue, 4-Wed, 5-Thu): ";
			p.reservation();
			break;
		case 2:cout << "please enter your reservation number:";
			int c;
			cin >> c;
			p.search(c);
			
			if(!p.test_c(c))
			{
				cout<<"Thank you \n";
				break;
			}
			else
			{ 
cout << "Do you want to cancel it? (Yes/No):  ";
			p.cancel(c);
			cout<<"Thank you \n";}
			break;
		default:
			cout<<"wrong  number "<<endl;
			break;
		}

	}
	system("pause");
	return 0;
}
