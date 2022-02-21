
#include<iostream>
#include<string.h>
 #include<conio.h>
#include<fstream>
#include<unistd.h>
 #include<windows.h>
//#include<bits/stdc++.h>
using namespace std;
class one
{
	
public:
	void menu1();
	
};
void one::menu1()
{
	
		cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO FOOD ORDERING SYSTEM =========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Ham Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tempura (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
 cout<<"\n\t======================================================================================================================================="<<endl;
}
	class two:public one
	{
	protected:
		 int  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,ss=0;
     string y,ye;
     public:
     
void menu2()
{    
//fstream write;
    fstream write("ayushorder.txt",ios::in | ios::out | ios::app);
//write.open("order.txt",ios::app | ios::out);
//    ofstream owrite("order.txt", ios::out | ios::app);
//write<<"i am writing in ayushorder.txt file\n";
if(write.is_open())
{
	cout<<"file can not open"<<endl;
//	exit (-1);
}

   a:
   	b:
   		c:
   	 cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
      cin>>ch;
    
      
  cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
  cin>>ye;
 
  if(ye=="y"|| ye=="Y")
  {
  	goto b;
  }
  else
  {
   switch(ch)
   {
   	case 1:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		a=480;
   		ss=ss+a*pizza;
   		write<<"YOU ORDER  Veggie Supreme : 480";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		ss= ss+b*pizza;
   		write<<"\nYOU ORDER  Exotica : 440";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Exotica "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		ss=ss+c*pizza;
   			write<<"\nYOU ORDER  Chicken Sizzler : 580";
   			write<<" \n";
   				write<<"NUMBER OF Chicken Sizzler IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Sizzler "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		ss=ss+d*pizza;
   		write<<"\nYOU ORDER  Chrispy Chicken : 520";
   	write<<" \n";
   		write<<"NUMBER OF Chrispy Chicken IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW MANY SPAGHETTI YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		ss=ss+e*pizza;
   		write<<"\nYOU ORDER  Spaghetti : 350";
   		write<<" \n";
   			write<<"NUMBER OF Spaghetti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Spaghetti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		ss=ss+f*pizza;
   		write<<"\nYOU ORDER Country Feast : 400";
   		write<<"\n ";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Country Feast "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY TETRAZZINI YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		ss=ss+g*pizza;
   		write<<"\nYOU ORDER Tetrazzini : 420";
   		write<<"\n ";
   			write<<"NUMBER OF Tetrazzini IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tetrazzini "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		ss=ss+h*pizza;
   		write<<"\nYOU ORDER Double Cheese : 540";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Double Cheese "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		ss=ss+i*pizza;
		write<<"\nYOU ORDER Makizushi : 548";
		write<<" \n";
			write<<"NUMBER OF Makizushi IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Makizushi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 10:
   		cout<<"\n\n\tHOW MANY HAM BURGER YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		ss=ss+j*pizza;
   		write<<"\nYOU ORDER Ham Burger : 390";
   		write<<" \n";
   			write<<"NUMBER OF Ham Burger IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Ham Burger "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		ss=ss+k*pizza;
   		write<<"\nYOU ORDER Margherita : 525";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Margherita "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		ss=ss+l*pizza;
   		write<<"\nYOU ORDER Fish 'n' Chips : 425";
   		write<<" \n";
   			write<<"NUMBER OF Fish 'n' Chips IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Fish 'n' Chips "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 13:
   		cout<<"\n\n\tHOW MANY FAJITAS YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		ss=ss+m*pizza;
   		write<<"\nYOU ORDER  Fajitas  : 335";
   		write<<" \n";
   			write<<"NUMBER OF Fajitas IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Fajitas "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY TEMPURA YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		ss=ss+n*pizza;
   		write<<"\nYOU ORDER Tempura : 324";
   		write<<" \n";
   			write<<"NUMBER OF Tempura IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tempura "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY HOT DOG YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		ss=ss+o*pizza; //fn1353
   		write<<"\nYOU ORDER  Hot Dog : 360";
   		write<<"\n ";
   			write<<"NUMBER OF Hot Dog IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Hot Dog "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By code-projects.org";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(int a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		sleep(1);//this will suspend the program execution temporiraly for a period of time
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");//this will pause or stop the program and wait for the program termination
   }
}
system("cls");//this command will clear the screen of console window
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
			   			cout << "\t\t\t\t\t\t\t  Cashier :  Ayush"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<ss<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<ss;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   
//  write.close();
//  fin.close();
  }
void show1()
  {
  	menu1();
  	menu2();
  }  
  
};


      	//***********************************************************************************************************
class details:public one, public two {
	public:
    char uname[100];
    int age;
    char password[100];
    char email[100];
    char mobile[10];
    void login(void);
};

  
// Function to get the
// input for new account.
void signup();
  
// Function to check whether
// the account is already
// existed or not
void account_check();
  
// Function to validate
// all the input fields.
int validate();
void login();
void cart();
void search_by_hotels();
void search_by_food();
void food_order(int food);
  
// Function to initialize the
// hotels and food
// structure dynamically
void hotel_initialize();
void hotels(int hotel_choice);
int flag = 1, i, j = 0, count = 0, caps = 0;
int small = 0, special = 0, numbers = 0;
int success = 0, x, choice;
char temp_name[100], temp_password1[100];
char temp_password2[100], temp_email[100];
char temp_mobile[100];
int temp_age, total = 0, food_choice, n;
int hotel_choice, search_choice, confirm;
int ch, food, hotel_id;









int main()
{   
   details s[100];
   
 while(1) {
        cout<<""
               "\n\n\t\t\t\t\t<------******  Welcome to Food ";
    cout<<"Ordering System  ******------>\n\n\t\t\t\t\t1)SIGNUP as a new user\n";
        cout<<"\t\t\t\t\t2)LOGIN as an old user\n\t\t\t\t\t\3)EXIT\n\n";
        cout<<"\t\t\t\t\tEnter your choice\t";
        cin>>choice;
        switch (choice) {
        case 1: {
            signup();
            break;
        }
        case 2: {
            s[1].login();
            break;
        }
        case 3: {
             exit(1);
            
        }
        default: {
            cout<<"\nPlease Enter the ";

            cout<<"valid choice\n";
            break;
        }
        }
    }

    getch();
}





void signup()
{
    cout<<"Enter Your name\t";
    cin>>temp_name;
  
    cout<<"Enter Your Age\t";
    cin>>temp_age;
  
    cout<<"Enter Your Email\t";
    cin>>temp_email;
  
    cout<<"Enter Password\t";
    cin>>temp_password1;
  
    cout<<"Confirm Password\t";
    cin>>temp_password2;
  
    cout<<"Enter Your Mobile Number\t";
    cin>>temp_mobile;
  
    // Function Call to validate
    // the user creation
    x = validate();
    if (x == 1)
        account_check();
}


int validate()
{
    // Validate the name
    for (i = 0; temp_name[i] != '\0'; i++) {
        if (!((temp_name[i] >= 'a' && temp_name[i] <= 'z')
              || (temp_name[i] >= 'A'
                  && temp_name[i] <= 'Z'))) {
            cout<<"\nPlease Enter the";
            cout<<"valid Name\n";
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        count = 0;
  
        // Validate the Email ID
        for (i = 0;
             temp_email[i] != '\0'; i++) {
            if (temp_email[i] == '@'
                || temp_email[i] == '.')
                count++;
        }
        if (count >= 2
            && strlen(temp_email) >= 5) {
            // Validating the Password and
            // Check whether it matches
            // with Conform Password
            if (!strcmp(temp_password1,
                        temp_password2)) {
                if (strlen(temp_password1) >= 8
                    && strlen(temp_password1) <= 12) {
                    caps = 0;
                    small = 0;
                    numbers = 0;
                    special = 0;
                    for (i = 0; temp_password1[i] != '\0';
                         i++) {
                        if (temp_password1[i] >= 'A'
                            && temp_password1[i] <= 'Z')
                            caps++;
                        else if (temp_password1[i] >= 'a'
                                 && temp_password1[i]
                                        <= 'z')
                            small++;
                        else if (temp_password1[i] >= '0'
                                 && temp_password1[i]
                                        <= '9')
                            numbers++;
                        else if (temp_password1[i] == '@'
                                 || temp_password1[i] == '&'
                                 || temp_password1[i] == '#'
                                 || temp_password1[i]
                                        == '*')
                            special++;
                    }
                    if (caps >= 1 && small >= 1
                        && numbers >= 1 && special >= 1) {
                        // Validating the Input age
                        if (temp_age != 0 && temp_age > 0) {
                            // Validating the Input mobile
                            // number
                            if (strlen(temp_mobile) == 10) {
                                for (i = 0; i < 10; i++) {
                                    if (temp_mobile[i]
                                            >= '0'
                                        && temp_mobile[i]
                                               <= '9') {
                                        success = 1;
                                    }
                                    else {
                                        cout<<"\n\nPlease";
                                        cout<<"Enter Valid ";
                                        cout<<"Mobile "
                                               "Number\n\n";
                                        return 0;
                                        break;
                                    }
                                }
  
                                // Success is assigned with
                                // value 1, Once every
                                // inputs are correct.
                                if (success == 1)
                                    return 1;
                            }
                            else {
                                cout<<"\n\nPlease Enter the";
                                cout<<"10 digit mobile";
                                cout<<"number\n\n";
                                return 0;
                            }
                        }
                        else {
                            cout<<"\n\nPlease Enter the valid age\n\n";
                            return 0;
                        }
                    }
                    else {
                        cout<<"\n\nPlease Enter the strong password, Your password must contain atleast one uppercase, Lowercase, Number and special character\n\n";
                        return 0;
                    }
                }
                else {
                    cout<<"\nYour Password is very short\nLength must between 8 to 12\n\n";
                    return 0;
                }
            }
            else {
                cout<<"\nPassword Mismatch\n\n";
                return 0;
            }
        }
        else {
            cout<<"\nPlease Enter"
                   " Valid E-Mail\n\n";
            return 0;
        }
    }
}

details s[100];

void account_check()
{
    for (i = 0; i < 100; i++) {
        // Check whether the email
        // and password are already
        // matched with existed account
        if (!(strcmp(temp_email, s[i].email)
              && strcmp(temp_password1,
                        s[i].password))) {
           cout<<"\n\nAccount Already Existed. Please Login !!\n\n";
            main();
            break;
        }
    }
    // if account does not already
    // existed, it creates a new
    // one with new inputs
    if (i == 100) {
        strcpy(s[j].uname, temp_name);
        s[j].age = temp_age;
        strcpy(s[j].password, temp_password1);
        strcpy(s[j].email, temp_email);
        strcpy(s[j].mobile, temp_mobile);
        j++;
        cout<<"\n\n\nAccount Successfully Created!!\n\n";
    }
}

void details::login()
{
    cout<<"\n\nLOGIN\n\n\nEnter Your Email\t";
    cin>>temp_email;
   cout<<"Enter Your Password\t";
    cin>>temp_password1;
    for (i = 0; i < 100; i++) {
        // Check whether the input
        // email is already existed or not
        if (!strcmp(s[i].email, temp_email)) {
            // Check whether the password
            // is matched with the email or not
            if (!strcmp(s[i].password, temp_password1)) {
                 cout<<"\n\nWelcome  "<< s[i].uname;
                cout<<"Your are successfully logged in\n\n ";
                
                show1();
  
  }
}
}

}





