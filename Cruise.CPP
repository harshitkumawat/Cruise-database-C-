// Project on Cruise management .......................
///***************************************///
//             Header Files               //
///**************************************///

#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
///*************************************///
//     Global Function Declaration      //
///************************************///
void modify();
void deletee();
void exist();
void write();
void readfamily();
void read();
void front();
void history();
void box(int, int ,int , int);
///************************************///
//  Main  Class For Input and Output   //
///************************************///
class cds
     {
     private:
	char board_place[30],dest_place[30];
	char deck[20],pool[30],spa[50],theatre[50],casino[50];
	long dest_bill,pool_bill,deck_bill,casino_bill,spa_bill,theatre_bill,gross,vat;
	int  tr_choice,dest_choice,dd,mm,yy;
	int  pool_choice,deck_choice,spa_choice,theatre_choice,casino_choice;
	int  age;
	int passno,hpassno;
	char fn[50],mn[50],add[50],sex,conno[20];
	int  mno;   //mno for no. of members
     public:
	int pass_choice;
	void input();
	void output();
	void member();
	void travel_detail();
	void computebill();
	int gethpassno();
	void family();
	cds();
	};
	cds::cds()    // Constructor to initialize Legal Values
	  {
	  strcpy(deck,"Non Air Conditioned");
	  strcpy(pool,"Swimming pool is not Alloted");
	  strcpy(spa,"Spa Facility is not Alloted");
	  strcpy(theatre,"Movies Are Not Available");
	  strcpy(casino,"Casino Facility not Alloted");
	  dest_bill=pool_bill=deck_bill=casino_bill=spa_bill=theatre_bill=gross=vat=0;
	  }
void cds::travel_detail()   /// for initializing Travel Details Values
	      {
	      textcolor(5);
	      clrscr();
	      gotoxy(8,3);
	      cout<<"°°°°°°°°°°°°°°°°°°°° Travel Details °°°°°°°°°°°°°°°°°°°°\n\n";
	      gotoxy(12,5);
	      cout<<"Please Enter The following Details For Your Journey ¯¯";
	      gotoxy(11,6);
	      cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	      box(10,8,35,20);
	      gotoxy(11,9);
	      cout<<"1. Boarding Point ";
	      gotoxy(11,10);
	      cout<<"2. Destination Point ";
	      gotoxy(11,11);
	      cout<<"3. Date of Journey ";
	      gotoxy(11,12);
	      cout<<"4. Deck ";
	      gotoxy(11,13);
	      cout<<"5. Swimming pool ";
	      gotoxy(11,14);
	      cout<<"6. Casino ";
	      gotoxy(11,15);
	      cout<<"7. Spa ";
	      gotoxy(11,16);
	      cout<<"8. Theatre ";
	      gotoxy(11,17);
	      cout<<"9. Back ";
	      gotoxy(11,19);
	      cout<<" Enter Your Choice ¯¯ ";
	      cin>>tr_choice;
	      int board_ch;
	      switch(tr_choice)           //switch for choosing Boarding point
		     {
		     case 1:
		     {
		     gotoxy(34,9);
		     cout<<"û";
		     gotoxy(50,11);
		     cout<<"1. Mumbai";
		     gotoxy(50,13);
		     cout<<"2. Chennai";
		     gotoxy(50,15);
		     cout<<"3. Goa";
		     gotoxy(48,17);
		     cout<<"Enter Your choice ¯¯  ";cin>>board_ch;
			  if(board_ch==1)
			    {
			    gotoxy(45,19);
			    cout<<"Thanks For Chooseing Mumbai";
			    strcpy(board_place,"Mumbai");
			    getch();
			    travel_detail();
			    }
			  if(board_ch==2)
			    {
			    gotoxy(45,19);
			    cout<<"Thanks For Chooseing chennai";
			    strcpy(board_place,"Chennai");
			    getch();
			    travel_detail();
			    }
			  if(board_ch==3)
			    {
			    gotoxy(45,19);
			    cout<<"Thanks For Chooseing Goa";
			    strcpy(board_place,"Goa");
			    getch();
			    travel_detail();
			    }
		       break;
		       }
		       case 2:
			    {
			    gotoxy(34,10);
			    cout<<"û";
			    gotoxy(43,10);
			    cout<<"1. New York";
			    gotoxy(43,11);
			    cout<<"2. Miami";
			    gotoxy(43,12);
			    cout<<"3. colombo";
			    gotoxy(43,13);
			    cout<<"4. Hong Kong";
			    gotoxy(43,14);
			    cout<<"5. Dubai";
			    gotoxy(43,15);
			    cout<<"6. Lisbon";
			    gotoxy(60,10);
			    cout<<"7. London";
			    gotoxy(60,11);
			    cout<<"8. Cape Town";
			    gotoxy(60,12);
			    cout<<"9. Cairo";
			    gotoxy(60,13);
			    cout<<"10.Perth";
			    gotoxy(60,14);
			    cout<<"11.Sydney";
			    gotoxy(60,15);
			    cout<<"12.Wellington";
			    gotoxy(45,18);
			    cout<<"Enter Your Destination ¯¯";
			    gotoxy(73,18);
			    cin>>dest_choice;
			    if(dest_choice==1)
			      {
			      gotoxy(46,20);
			      cout<<"You Have Select New York";
			      strcpy(dest_place,"New York");
			      dest_bill=50000;
			      getch();
			      travel_detail();
			      }
			    if(dest_choice==2)
			      {
			      gotoxy(46,20);
			      cout<<"You Have Select Miami";
			      strcpy(dest_place,"Miami");
			      dest_bill=48000;
			      getch();
			      travel_detail();
			      }
			    if(dest_choice==3)
			      {
			      gotoxy(46,20);
			      cout<<"You Have Select Colombo";
			      strcpy(dest_place,"Colombo");
			      dest_bill=46000;
			      getch();
			      travel_detail();
			      }
			    if(dest_choice==4)
			      {
			      gotoxy(46,20);
			      cout<<"You Have Select Hong Kong";
			      strcpy(dest_place,"Hong Kong");
			      dest_bill=44000;
			      getch();
			      travel_detail();
			      }
			    if(dest_choice==5)
			      {
			      gotoxy(46,20);
			      cout<<"You Have Select Dubai";
			      strcpy(dest_place,"Dubai");
			      dest_bill=42000;
			      getch();
			      travel_detail();
			      }
			    if(dest_choice==6)
			      {
			      gotoxy(46,20);
			      cout<<"You Have Select Lisbon";
			      strcpy(dest_place,"Lisbon");
			      dest_bill=40000;
			      getch();
			      travel_detail();
			      }
			    if(dest_choice==7)
			      {
			      gotoxy(46,20);
			      cout<<"You Have Select London";
			      strcpy(dest_place,"London");
			      dest_bill=38000;
			      getch();
			      travel_detail();
			      }
			    if(dest_choice==8)
			      {
			      gotoxy(46,20);
			      cout<<"You Have Select Cape Town";
			      dest_bill=36000;
			      strcpy(dest_place,"Cape Town");
			      getch();
			      travel_detail();
			      }
			    if(dest_choice==9)
			      {
			      gotoxy(46,20);
			      cout<<"You Have Select Cairo";
			      strcpy(dest_place,"Cairo");
			      dest_bill=34000;
			      getch();
			      travel_detail();
			      }
			    if(dest_choice==10)
			      {
			      gotoxy(46,20);
			      cout<<"You Have Select Perth ";
			      strcpy(dest_place,"Perth");
			      dest_bill=32000;
			      getch();
			      travel_detail();
			      }
			    if(dest_choice==11)
			      {
			      gotoxy(46,20);
			      cout<<"You Have Select Sydney";
			      strcpy(dest_place,"Sydney");
			      dest_bill=30000;
			      getch();
			      travel_detail();
			      }
			    if(dest_choice==12)
			     {
			     gotoxy(46,20);
			     cout<<"You Have Select Wellington";
			     strcpy(dest_place,"Wellington");
			     dest_bill=28000;
			     getch();
			     travel_detail();
			     }
			     break;
			    }
			 case 3:
			    {
			     gotoxy(34,11);
			     cout<<"û";
			     gotoxy(45,10);
			     cout<<"Want to Move on From  ¯¯ ";
			     gotoxy(46,13);
			     box(47,12,65,14);
			     gotoxy(49,13);
			     cin>>dd;
			     gotoxy(52,13);
			     cout<<"/";
			     gotoxy(55,13);
			     cin>>mm;
			     gotoxy(58,13);
			     cout<<"/";
			     gotoxy(60,13);
			     cin>>yy;
			     travel_detail();
			     break;
			     }
			   case 4:
			     {
			     gotoxy(34,12);
			     cout<<"û";
			     gotoxy(44,12);
			     cout<<"1. Top Deck...";
			     gotoxy(44,14);
			     cout<<"2. Middle Deck...";
			     gotoxy(44,16);
			     cout<<"3. Bottom Deck...";
			     gotoxy(46,18);
			     cout<<"Your Choice ¯¯ ";
			     gotoxy(61,18);
			     cin>>deck_choice;
			     if(deck_choice==1)
			       {
			       deck_bill=10000;
			       strcpy(deck,"Top Deck");
			       travel_detail();
			       }
			     if(deck_choice==2)
			       {
			       deck_bill=8000;
			       strcpy(deck,"Middle Deck");
			       travel_detail();
			       }
			     if(deck_choice==3)
			       {
			       deck_bill=5000;
			       strcpy(deck,"Bottom Deck");
			       travel_detail();
			       }
			     break;
			     }
			   case 5:
			     {
			     gotoxy(34,13);
			     cout<<"û";
			     gotoxy(45,12);
			     cout<<"Want Swimming Pool Facility..";
			     gotoxy(48,14);
			     cout<<"1. Yes";
			     gotoxy(48,16);
			     cout<<"2. No";
			     gotoxy(45,18);
			     cout<<"Your Choice ¯¯ ";
			     gotoxy(65,18);
			     cin>>pool_choice;
			     if(pool_choice==1)
			       {
			       pool_bill=8000;
			       strcpy(pool,"50 X 20 X 10 Swimming pool");
			       travel_detail();
			       }
			       else
				{
				pool_bill=0;
				strcpy(pool,"Swimming Pool Not Allowed");
				travel_detail();
				}
				break;
			     }
			   case 6:
			     {
			     gotoxy(34,14);
			     cout<<"û";
			     gotoxy(45,12);
			     cout<<"Want Casino Facility..";
			     gotoxy(48,14);
			     cout<<"1. Yes";
			     gotoxy(48,16);
			     cout<<"2. No";
			     gotoxy(45,18);
			     cout<<"Your Choice ¯¯ ";
			     gotoxy(65,18);
			     cin>>casino_choice;
			     if(casino_choice==1)
			       {
			       casino_bill=16000;
			       strcpy(casino,"Casino Gameplex and snooker");
			       travel_detail();
			       }
			       else
				{
				casino_bill=0;
				strcpy(casino,"Casino Not Allowed");
				travel_detail();
				}
				break;
			    }
			   case 7:
			     {
			     gotoxy(34,15);
			     cout<<"û";
			     gotoxy(45,12);
			     cout<<"Want Spa Facility..";
			     gotoxy(48,14);
			     cout<<"1. Yes";
			     gotoxy(48,16);
			     cout<<"2. No";
			     gotoxy(45,18);
			     cout<<"Your Choice ¯¯ ";
			     gotoxy(65,18);
			     cin>>spa_choice;
			     if(spa_choice==1)
			       {
			       spa_bill=5000;
			       strcpy(spa,"Spa with Massage And Parlour");
			       travel_detail();
			       }
			       else
				{
				spa_bill=0;
				strcpy(spa,"Spa Facilities Not Allowed");
				travel_detail();
				}
				break;
			     }
			    case 8:
			      {
			      gotoxy(34,16);
			      cout<<"û";
			      gotoxy(45,12);
			      cout<<"Want to Enjoy Movies..";
			      gotoxy(48,14);
			      cout<<"1. Yes";
			      gotoxy(48,16);
			      cout<<"2. No";
			      gotoxy(45,18);
			      cout<<"Your Choice ¯¯ ";
			      gotoxy(65,18);
			      cin>>theatre_choice;
			      if(theatre_choice==1)
				 {
				 theatre_bill=10000;
				 strcpy(theatre,"Latest Movies With Snacks");
				 travel_detail();
				 }
			      else
				 {
				 theatre_bill=0;
				 strcpy(theatre,"Theatre Not Allowed");
				 travel_detail();
				 }
				 break;
			     }
			    case 9:
			       {
			       break;
			       }
			    default :
			      travel_detail();
		     }
		}

void cds::member()   // For Initialize Individual Information
     {
	  textcolor(BLACK);
	  clrscr();
	  gotoxy(8,3);
	  cout<<"°°°°°°°°°°°°°°°°°°°° Personal Details °°°°°°°°°°°°°°°°°°°°\n\n";
	  gotoxy(28,4);
	  cout<<endl<<"                        ~~~~~~~~~~~~~~~~~~~~~~";
	  cout<<endl<<"                          Name of Member    ¯¯ ";gets(mn);
	  cout<<endl<<"                          Age of Member     ¯¯ ";cin>>age;
	  cout<<endl<<"                          sex  (M/F)        ¯¯ ";cin>>sex;
	  cout<<endl<<"                          Passport Number   ¯¯ ";cin>>passno;
       }

void cds::input()   // for Initialize Personal Details
	     {
	      int i,l;
	      char con;
	      textcolor(GREEN);
	      clrscr();
	      gotoxy(8,3);
	      cout<<"°°°°°°°°°°°°°°°°°°°° Personal Details °°°°°°°°°°°°°°°°°°°°";
	      gotoxy(28,4);
	      cout<<"~~~~~~~~~~~~~~~~~~";
	      gotoxy(13,6);
	      cout<<"Enter your Name                    ¯¯ ";
	      gotoxy(51,6);
	      gets(fn);
	      gotoxy(13,9);
	      cout<<"Enter Address                      ¯¯ ";
	      gotoxy(51,9);
	      gets(add);
	      gotoxy(13,12);
	      cout<<"Enter 10 digit Contact Number      ¯¯ ";
	      gotoxy(51,12);
	      cin>>conno;
	      con :
	      l=strlen(conno);
	      for(i=0;conno[i]!='\0';i++)
		 {
		 if(l<10 || l>10 || conno[i]>='a'&& conno[i]<='z'||conno[i]>='A'&& conno[i]<='Z')
		   {
		   gotoxy(51,12);
		   cout<<"Invalid Contact Number.....";
		   getch();
		   gotoxy(51,12);
		   cout<<"                           ";
		   gotoxy(51,12);
		   cin>>conno;
		   goto con;
		   }
		 else
		  {
		  continue;
		  }
		 }
	      gotoxy(13,15);
	      cout<<"Enter Your passport Number         ¯¯ ";
	      gotoxy(51,15);
	      cin>>hpassno;
	      gotoxy(13,18);
	      cout<<"Enter Number of people Travelling  ¯¯ ";
	      gotoxy(51,18);
	      cin>>mno;
	      if(mno>5)
		mno=4;
	      for(i=0;i<mno;i++)
	      member();
	      travel_detail();
	  }
int cds::gethpassno()  // to get Passport number from Data file
    {
    return hpassno;
    }
void cds::computebill()
     {
     textcolor(BROWN);
     clrscr();
     box(2,2,79,24);
     gotoxy(14,2);
     clrscr();
     box(2,2,79,24);
     gotoxy(14,2);
     cout<<"°°°°°°°°°°° ®® Royal Carribean International ¯¯ °°°°°°°°°°°";
     gotoxy(25,4);
     cout<<"Boarding Station  ¯¯ "<<board_place;
     gotoxy(25,5);
     cout<<"Destination       ¯¯ "<<dest_place;
     gotoxy(25,6);
     cout<<"Mobile Number     ¯¯ "<<conno;
     gotoxy(25,7);
     cout<<"Date of Departure ¯¯ "<<dd<<"/"<<mm<<"/"<<yy;
     gotoxy(5,10);
     cout<<"Subject..";
     gotoxy(20,10);
     cout<<"Cost(For 1 Person)..";
     gotoxy(45,10);
     cout<<"No. of Memb.";
     gotoxy(62,10);
     cout<<"Total Cost..";
     gotoxy(3,11);
     cout<<"___________________________________________________________________________";
     gotoxy(3,12);
     cout<<"¯ Travel Charge      "<<dest_bill;
     gotoxy(48,12);
     cout<<mno;gotoxy(62,12);cout<<mno*dest_bill;
     gotoxy(3,13);
     cout<<"¯ Deck               "<<deck_bill;
     gotoxy(48,13);
     cout<<mno;gotoxy(62,13);cout<<mno*deck_bill;
     gotoxy(3,14);
     cout<<"¯ Swimming pool      "<<pool_bill;
     gotoxy(48,14);
     cout<<mno;gotoxy(62,14);cout<<mno*pool_bill;
     gotoxy(3,15);
     cout<<"¯ spa                "<<spa_bill;
     gotoxy(48,15);
     cout<<mno;gotoxy(62,15);cout<<mno*spa_bill;
     gotoxy(3,16);
     cout<<"¯ Casino             "<<casino_bill;
     gotoxy(48,16);
     cout<<mno;gotoxy(62,16);cout<<mno*casino_bill;
     gotoxy(3,17);
     cout<<"¯ Theatre            "<<theatre_bill;
     gotoxy(48,17);
     cout<<mno;gotoxy(62,17);cout<<mno*theatre_bill;
     gross=(mno*dest_bill)+(mno*deck_bill)+(mno*pool_bill)+(mno*spa_bill)+(mno*casino_bill)+(mno*theatre_bill);
     vat=gross*.015;
     gross=gross+vat;
     gotoxy(30,19);
     cout<<"VAT           ¯¯ "<<vat;
     gotoxy(30,21);
     cout<<"Grand Total   ¯¯ "<<gross;
     getch();
     gotoxy(15,23);
     cout<<"Thanks For visiting to our Royal Carribean international";
     }
void cds::output()   // to Show Family Information
    {
    textcolor(BROWN);
    clrscr();
    box(2,2,79,24);
    gotoxy(14,2);
    clrscr();
    box(2,2,79,24);
    gotoxy(14,2);
    cout<<"°°°°°°°°°°° ®® Royal Carribean International ¯¯ °°°°°°°°°°°";
    gotoxy(5,4);
    cout<<"Family Name  ¯¯ "<<fn;
    gotoxy(53,4);
    cout<<"Contact     ¯¯ "<<conno;
    gotoxy(5,6);
    cout<<"Address      ¯¯ "<<add;
    gotoxy(53,6);
    cout<<"Members     ¯¯ "<<mno;
    box(25,8,50,10);
    gotoxy(27,9);
    cout<<"Your Travel Details ¯";
    gotoxy(17,12);
    cout<<"1. Date Of Journey            ¯¯ "<<dd<<" / "<<mm<<" / "<<yy;
    gotoxy(17,14);
    cout<<"2. Boarding Station           ¯¯ "<<board_place;
    gotoxy(17,16);
    cout<<"3. Destination                ¯¯ "<<dest_place;
    gotoxy(17,18);
    cout<<"4. Deck                       ¯¯ "<<deck;
    box(17,19,59,21);
    gotoxy(19,20);
    cout<<"Facilities for passengers in Cruisse ¯¯";
    gotoxy(25,23);
    cout<<"Press Enter to Move Ahead ";
    getch();
    clrscr();
    box(2,2,79,24);
    gotoxy(14,2);
    cout<<"°°°°°°°°°°° ®® Royal Carribean International ¯¯ °°°°°°°°°°°";
    gotoxy(17,4);
    cout<<"1. Date Of Journey            ¯¯ "<<dd<<" "<<mm<<" "<<yy;
    gotoxy(17,5);
    cout<<"2. Boarding Station           ¯¯ "<<board_place;
    gotoxy(17,6);
    cout<<"3. Destination                ¯¯ "<<dest_place;
    gotoxy(17,7);
    cout<<"4. Deck                       ¯¯ "<<deck;
    gotoxy(17,8);
    cout<<"5. Passport Number            ¯¯ "<<hpassno;
    box(28,9,49,11);
    gotoxy(29,10);
    cout<<"Available Facilities";
    box(14,12,43,14);
    gotoxy(15,13);
    cout<<pool;
    box(32,15,61,17);
    gotoxy(33,16);
    cout<<casino;
    box(14,18,43,20);
    gotoxy(15,19);
    cout<<spa;
    box(32,21,61,23);
    gotoxy(33,22);
    cout<<theatre;
    getch();
    computebill();
    }
void cds::family()    // Overview Of Family Details
    {
    textcolor(BLUE);
    clrscr();
    int q=1;
    box(2,2,79,24);
    gotoxy(14,2);
    cout<<"°°°°°°°°°°° ®® Royal Carribean International  ¯¯ °°°°°°°°°°°";
    gotoxy(30,5);
    cout<<"Family ¯¯ "<<q;
    gotoxy(25,8);
    cout<<"Family Name        ¯¯ "<<fn;
    gotoxy(25,10);
    cout<<"Address            ¯¯ "<<add;
    gotoxy(25,12);
    cout<<"Mobile Number      ¯¯ "<<conno;
    gotoxy(25,14);
    cout<<"Members            ¯¯ "<<mno;
    gotoxy(25,16);
    cout<<"Date of Departure  ¯¯ "<<dd<<"/"<<mm<<"/"<<yy;
    gotoxy(25,18);
    cout<<"Boarding Station   ¯¯ "<<board_place;
    gotoxy(25,20);
    cout<<"Destination        ¯¯ "<<dest_place;
    q++;
    }

fstream f;    // Datafile Created
cds y;

void write() // to Write data into file
    {
       cds t;
       f.open("new1.dat",ios::app|ios::binary);
       t.input();
       f.write((char *)&t,sizeof(t));
       f.close();
     }
void read() // to Read data into file
     {
     cds t1;
     clrscr();
     int passchoice,i;
     box(2,2,79,24);
     gotoxy(14,2);
     cout<<"°°°°°°°°°°° ®® Royal Carribean International ¯¯ °°°°°°°°°°°";
     gotoxy(20,12);
     cout<<"Enter Your Passport Number ¯¯ ";
     gotoxy(52,12);
     cin>>passchoice;
     f.open("new1.dat",ios::in|ios::binary);
     if(f)
       {
	while(!f.eof())
	  {
	  f.read((char*)&t1,sizeof(t1));
	   if(passchoice==t1.gethpassno())
		{
		 t1.output(); getch();
		break;
		}
	   }
       if(f.eof())
	  {
	   cout<<"\n\n º\t\t\t INVALID PASSPORT NUMBER";
	   getch();
	  }
	f.close();
     }
    else
     {
     cout<<endl<<"file open error";
     }
  }
void modify()  // to modify Data from file
     {
     clrscr();
     char fam[20];
     int pass,found=0,i;
     clrscr();
     gotoxy(30,2);
     cprintf("\n¯¯ To Modify ®® \n\n");
     box(18,6,58,12);
     gotoxy(20,8);
     cprintf("\nEnter Family Name         ¯¯ ");
     gets(fam);
     gotoxy(20,10);
     cprintf("\nEnter the passport Number ¯¯ ");
     cin>>pass;
     f.open("new1.dat",ios::in|ios::out);
     while(!f.eof())
	   {
	    f.read((char*)&y,sizeof(y));
	    if(pass==y.gethpassno())
		   {
		    gotoxy(5,9);
		    y.output();
		    getch();
		    clrscr();
		    gotoxy(20,7);
		    cprintf("\nFill up The Changes  ¯¯ press Enter\n");
		    getch();
		    clrscr();
		    y.input();
		    int pos=-1*sizeof(y);
		    f.seekp(pos,ios::cur);
		    f.write((char*)&y,sizeof(y));
		    gotoxy(5,17);
		    cprintf("\nRecord Updated");
		    found=1;
		    clrscr();
		    break;
		   }
	     }
    f.close();
    if(found==0)
    {
    gotoxy(3,9);
    cprintf("\nRecord Not Found ");
    clrscr();
    }
  }
void deletee() // to delete data from file
    {
    clrscr();
    int i,b=0;
    int pass,n2;
    clrscr();
    box(6,5,70,16);
    gotoxy(35,4);
    cprintf("\nDelete Record");
    gotoxy(7,7);
    cprintf("\n\nEnter The passport number of the customer Want To Delete ");
    cin>>pass;
    gotoxy(7,10);
    cds x;
    f.open("new1.dat",ios::in|ios::binary);
    fstream f1;
    f1.open("Temp.dat",ios::out|ios::binary);
     while(!f.eof())
	 {
	  f.read((char*)&x,sizeof(x));
	  if(pass!=x.gethpassno())
		{
		 f1.write((char*)&x,sizeof(x));

		 }
	  if(pass==x.gethpassno())
	      {b++;}
	  }

	  if(f.eof() && b==0)
	  {
	   gotoxy(7,12);
	   cprintf("\nINVALID PASSPORT NUMBER");
	  }
    f1.close();
    f.close();
    remove("new1.dat");
    rename("Temp.dat","new1.dat");
    if(b!=0)
    {
    gotoxy(7,12);
    cprintf("\nRecord Deleted ");
    }
    getch();
   }
void readfamily() //  to read  Family Details
     {
     f.open("new1.dat",ios::in);
     while(!f.eof())
	  {
	  f.read((char*)&y,sizeof(y));
	     if(f.eof())break;
	     y.family();
	     delay(1100);
	     }
      f.close();
     }
void exist()
    {
    int ch1;
    char na;
    na:
    do
    {
    textcolor(LIGHTRED);
    clrscr();
    box(31,4,45,6);
    gotoxy(32,5);
    cout<<"Existing User";
    gotoxy(25,8);
    cout<<"1. View Personal Details...";
    gotoxy(25,10);
    cout<<"2. Modify Previous Details...";
    gotoxy(25,12);
    cout<<"3. Delete Records...";
    gotoxy(25,14);
    cout<<"4. View Family Details...";
    gotoxy(25,16);
    cout<<"5. Back...";
    gotoxy(21,19);
    cout<<"Enter Your Choice ¯¯ ";
    gotoxy(44,19);
    cin>>ch1;
    switch(ch1)
       {
       case 1:
	  read();
	  break;
       case 2:
	  modify();
	  break;
       case 3:
	  deletee();
	  break;
       case 4:
	  readfamily();
	  break;
       case 5:
	  front();
	  break;
       default :
	  goto na;
       }
     getch();
      }
      while(ch1!=5);
    }
void main ()
  {
  void namepage();
  void topic();
  textbackground(WHITE);
  clrscr();
  namepage();
  getch();
  clrscr();
  topic();
  getch();
  front();
  getch();
  }

void front()
     {
      char st;
      st:
      int front_ch;
      do
	{
	char name[40]={"Royal Carribean International "};
	int ch1;
	textcolor(BLACK);
	clrscr();
	box(1,1,80,24);
	box(24,2,56,4);
	gotoxy(26,3);
	cout<<name;
	box(22,6,58,8);
	gotoxy(24,7);  cout<<"Welcome to Cruise Database System";
	box(28,10,53,23);
	gotoxy(28,12); cout<<"ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶";
	gotoxy(37,11); cout<<"Main Menu ";
	gotoxy(30,13); cout<<"1) New User .....";
	gotoxy(30,15); cout<<"2) Existing User  ...";
	gotoxy(30,17); cout<<"3) Royal Carribean ";
	gotoxy(30,18); cout<<"   International...";
	gotoxy(30,20); cout<<"4) Exit .....";
	gotoxy(29,22); cout<<"Enter Your Choice ÍÍ¯ ";
	cin>>front_ch;
	clrscr();
	switch(front_ch)
	{
	case 1:
	     write();
	     break;
	case 2:
	     exist();
	     break;
	case 3:
	     history();
	     break;
	case 4:
	   exit(0);
	default :
	      goto st;
	}
	}
	while(front_ch!=3);
	}
void history()
     {
     textcolor(LIGHTGREEN);
     clrscr();
     int i,l,m;
     char tn[200]={"Royal Carribean International"},fc[30]={"Royal Cruise Line"};
     char type[40]={"Dual Listed Public Company"};
     char isin[20]={"PA1436583006"},industry[25]={"Hospitality / Tourism "},founded[5]={"1972"};
     char headquarter[50]={"India , US , UK , Miami"},area[10]={"Worldwide"};
     char services[20]={"Cruise Line"}, employes[20]={"91000 persons "};
     char website[30]={"www.royalcarribean.org.com"};
     box(2,2,79,24);
     gotoxy(14,2);
     clrscr();
     box(2,2,79,24);
     gotoxy(12,2);
     cout<<"°°°°°°°°°°° ®® Royal Carribean International ¯¯ °°°°°°°°°°°";
     gotoxy(21,4);
     cout<<"¯ Trading Name     ¯¯ ";
     gotoxy(21,5);
     cout<<"¯ formally called  ¯¯ ";
     gotoxy(21,6);
     cout<<"¯ Type             ¯¯ ";
     gotoxy(21,7);
     cout<<"¯ Traded as        ¯¯ ";
     gotoxy(21,12);
     cout<<"¯ ISIN             ¯¯ ";
     gotoxy(21,13);
     cout<<"¯ Industry         ¯¯ ";
     gotoxy(21,14);
     cout<<"¯ Founded          ¯¯ ";
     gotoxy(21,15);
     cout<<"¯ Headquarter      ¯¯ ";
     gotoxy(21,16);
     cout<<"¯ Area Served      ¯¯ ";
     gotoxy(21,17);
     cout<<"¯ Brands           ¯¯ ";
     gotoxy(21,21);
     cout<<"¯ Services         ¯¯ ";
     gotoxy(21,22);
     cout<<"¯ No. of Employees ¯¯ ";
     gotoxy(21,23);
     cout<<"¯ Website          ¯¯ ";
     gotoxy(44,4);
     delay(100);
     cout<<tn;
     gotoxy(44,5);
     delay(100);
     cout<<fc;
     gotoxy(44,6);
     delay(100);
     cout<<type;
     gotoxy(44,7);
     cout<<"NYSE : CCL\n º\t\t\t\t\t   NYSE : CUK\n º\t\t\t\t\t   LSE  : CCL";
     gotoxy(44,12);
     delay(100);
     cout<<isin;
     gotoxy(44,13);
     delay(100);
     cout<<industry;
     gotoxy(44,14);
     delay(100);
     cout<<founded;
     gotoxy(44,15);
     delay(100);
     cout<<headquarter;
     gotoxy(44,16);
     delay(100);
     cout<<area;
     gotoxy(44,17);
     delay(100);
     cout<<"AIDA Cruises\n º\t\t\t\t\t   Costa Cruises Fathom\n º\t\t\t\t\t   P&O Cruises ";
     gotoxy(44,21);
     delay(100);
     cout<<services;
     gotoxy(44,22);
     delay(100);
     cout<<employes;
     gotoxy(44,23);
     delay(100);
     cout<<website;
     getch();
     front();
     }
void box(int x1, int y1, int x2, int y2)
		{
		int a,b,c,d;
		gotoxy(x1,y1);
		cout<<char(201);
		for(a=x1+1;a<=x2;a++)
		   {
		   gotoxy(a,y1);
		   cout<<char(205);
		   }
		   gotoxy(x2,y1);
		   cout<<char(187);
		for(b=y1+1;b<=y2;b++)
		   {
		   gotoxy(x1,b);
		   cout<<char(186);
		   }
		   gotoxy(x1,y2);
		   cout<<char(200);
		for(c=y1+1;c<=y2;c++)
		   {
		   gotoxy(x2,c);
		   cout<<char(186);
		   }
		   gotoxy(x2,y2);
		   cout<<char(188);
		for(d=x1+1;d<x2;d++)
		   {
		   gotoxy(d,y2);
		   cout<<char(205);
		   }
	       }
void namepage()
     {
     while(!kbhit())
     {
     textcolor(BLUE);
     clrscr();
     for(int i=1;i<80;i++)
	{
	if(kbhit())
	   break;
	gotoxy(i,5);
	cout<<"                                                )  (   ";
	gotoxy(i,6);
	cout<<"                                                (  )   ";
	gotoxy(i,7);
	cout<<"                                                 )(   ";
	gotoxy(i,8);
	cout<<"                                               ÈÍËËÍ¼     ";
	gotoxy(i,9);
	cout<<"                                         ____    ºº       ";
	gotoxy(i,10);
	cout<<"             ÉÍÍÍ»                       °  °   _ºº_      ";
	gotoxy(i,11);
	cout<<"             °   °                       °  °   °  °      ";
	gotoxy(i,12);
	cout<<"           __°___°__                     °  °   °  °      ";
	gotoxy(i,13);
	cout<<"          /__°___°__°                    °  °   °  °      ";
	gotoxy(i,14);
	cout<<"         /___°___°___°                   °  °   °  °      ";
	gotoxy(i,15);
	cout<<"      °_/___°_____°___°__________________°__°___°__°______/";
	gotoxy(i,16);
	cout<<"    °°°___°___°__¯¯    Harshit Kumawat   ®®___°__°___°___/";
	gotoxy(i,17);
	cout<<"   °° °__°__°__°___°__°__°__°__°__°__°__°__°__°__°___°_/";
	gotoxy(i,18);
	cout<<"    °°°°__°__°__°__°__°__°__°__°__°__°__°__°__°__°___/";
	gotoxy(i,19);
	cout<<"      °°__°__°__°__°__°__°__°__°__°__°__°__°__°__°_/";
	gotoxy(i,20);
	cout<<"       °__°__°__°__°__°__°__°__°__°__°__°__°__°__/";
	gotoxy(i,21);
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	gotoxy(i,22);
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	delay(100);
       }}
       }
void topic()
    {
    textcolor(5);
    clrscr();
    cout<<"\n\n\n\n\n";
    cout<<"                      ÉÍÍÍ  ÉÍÍÍ»  Ë   Ë  ÍÍËÍÍ  ÉÍÍÍ  ÉÍÍÍ  \n";
    cout<<"                      º     º   º  º   º    º    º     º     \n";
    cout<<"                      º     ÌÍËÍ¼  º   º    º    ÈÍÍ»  ÌÍÍÍ  \n";
    cout<<"                      º     º º    º   º    º       º  º     \n";
    cout<<"                      ÈÍÍÍ  Ê Ð    ÈÍÍÍ¼  ÍÍÊÍÍ  ÍÍÍ¼  ÈÍÍÍ  \n";
    cout<<"          ÉÍ»ÉÍ» ÉÍÍÍ» ÉÍ» Ë ÉÍÍÍ» ÉÍÍÍ» ÉÍÍÍ ÉÍ»ÉÍ» ÉÍÍÍ ÉÍ» Ë ÍÍËÍÍ	       \n";
    cout<<"          º ºº º º   º º º º º   º º     º    º ºº º º    º º º   º	       \n";
    cout<<"          º È¼ º ÌÍÍÍ¹ º º º ÌÍÍÍ¹ º  É» ÌÍÍÍ º È¼ º ÌÍÍÍ º º º   º	       \n";
    cout<<"          º    º º   º º º º º   º º  ºº º    º    º º    º º º   º              ";
    cout<<"         Ê    Ê Ê   Ê Ê ÈÍ¼ Ê   Ê ÈÍÍ¼Ê ÈÍÍÍ Ê    Ê ÈÍÍÍ Ê ÈÍ¼   Ê	       \n";
    }

