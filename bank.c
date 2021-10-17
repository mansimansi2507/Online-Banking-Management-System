#include<stdio.h>
#include<conio.h>
#include<string.h>

struct bank
{
char name[30],fname[30],myname[30];
int DOB_dd,DOB_mm,DOB_yyyy,age;
float amount,deposit,withdraw;
char mobile_no[11],aadhar_no[13],pan_no[11],email[30],myaadhar[20];
char district[20],state[20],pin_code[20],address[40];
}bank;
void login();
void mainmenu();
void acc_open();
void details();
void deposit();
void withdraw();

void main()
{
clrscr();
printf("\n\n\t\t\tWelcome to banking management system");
printf("\n\n\t\t\tPress any key to continue");
getch();
login();
}
void login()
{
char user[15],pass[15];
clrscr();
printf("\n\n\n\n\t\t\tEnter username  :");
scanf("%s",user);
printf("\n\n\n\t\t\tEnter password  :");
scanf("%s",pass);
if(strcmp(user,"Bank123")==0)
{
if(strcmp(pass,"Bank@123")==0)
{
printf("\n\n\n\t\t\tLogin Successful");
printf("\n\n\n\t\t\tPress Enter to continue");
getch();
mainmenu();
}
}
else
{
printf("\n\n\n\t\t\tInvalid username or password please try again");
printf("\n\n\n\t\t\tPress Enter");
getch();
return;
}
}
void mainmenu()
{
int choice;
lineno46:
clrscr();
printf("\n\n\t\t\t\xB2\xB2\xB2 Main Menu \xB2\xB2\xB2");
printf("\n\n\t\t\t1.Account opening");
printf("\n\t\t\t2.Details of account");
printf("\n\t\t\t3.Deposit");
printf("\n\t\t\t4.Withdraw");
printf("\n\t\t\t5.Exit");
printf("\n\n\t\t\tEnter the coressponding number");
scanf("%d",&choice);

switch(choice)
{
case 1:
   acc_open();
   goto lineno46;
case 2:
   details();
   goto lineno46;
case 3:
   deposit();
   goto lineno46;
case 4:
   withdraw();
   goto lineno46;
case 5:
printf("\n\t\t\tThanks for visiting");
printf("\n\t\t\tpress any key to exit...");
getch();
exit(0);
default :
printf("\n\n\t\t\tInvalid selection please choose a valid choice");
printf("\n\t\t\tPress any key");
getch();
return;
}
}
void acc_open()
{
clrscr();
printf("\n\n\t\t\t\xB2\xB2\xB2 Account opening form \xB2\xB2\xB2");
printf("\n\n\t\t\tEnter name :");
fflush(stdin);
scanf("%s",&bank.name);
printf("\n\t\t\tEnter father's name :");
fflush(stdin);
scanf("%s",&bank.fname);
printf("\n\t\t\tEnter date of Birth dd :");
fflush(stdin);
scanf("%d",&bank.DOB_dd);
printf("\n\t\t\tEnter date of Birth mm :");
fflush(stdin);
scanf("%d",&bank.DOB_mm);
printf("\n\t\t\tEnter date of Birth yyyy :");
fflush(stdin);
scanf("%d",&bank.DOB_yyyy);
printf("\n\t\t\tEnter your age :");
fflush(stdin);
scanf("%d",&bank.age);
printf("\n\t\t\tEnter Mobile number :");
fflush(stdin);
scanf("%s",&bank.mobile_no);
printf("\n\t\t\tEnter pan number :");
fflush(stdin);
scanf("%s",&bank.pan_no);
printf("\n\t\t\tEnter aadhar number :");
fflush(stdin);
scanf("%s",&bank.aadhar_no);
printf("\n\t\t\tEnter state :");
fflush(stdin);
scanf("%s",&bank.state);
printf("\n\t\t\tEnter district :");
fflush(stdin);
scanf("%s",&bank.district);
printf("\n\t\t\tEnter pincode :");
fflush(stdin);
scanf("%s",&bank.pin_code);
printf("\n\t\t\tEnter address :");
fflush(stdin);
scanf("%s",&bank.address);
printf("\n\t\t\tEnter Email id :");
fflush(stdin);
gets(bank.email);
printf("\n\t\t\tEnter how much amount you want to deposit :");
fflush(stdin);
scanf("%f",&bank.amount);
printf("\n\n\t\t\tAccount created");
printf("\n\t\t\tYour account no : 9876543210");
getch();
mainmenu();
details();
}
void details()
{
clrscr();
printf("\n\n\t\t\t\xB2\xB2\xB2 Details of your account \xB2\xB2\xB2");
printf("\n\n\t\t\tEnter your name :");
fflush(stdin);
scanf("%s",&bank.myname);
printf("\n\t\t\tEnter your aadhar number :");
fflush(stdin);
scanf("%s",&bank.myaadhar);
if(strcmp(bank.name,bank.myname)==0)
{
if(strcmp(bank.aadhar_no,bank.myaadhar)==0)
{
printf("\n\t\t\tName : %s",bank.name);
printf("\n\t\t\tFather's name : %s",bank.fname);
printf("\n\t\t\tDate of Birth : %d/%d/%d",bank.DOB_dd,bank.DOB_mm,bank.DOB_yyyy);
printf("\n\t\t\tAge : %d",bank.age);
printf("\n\t\t\tMobile no : %s",bank.mobile_no);
printf("\n\t\t\tPan Number : %s",bank.pan_no);
printf("\n\t\t\tAadhar Number : %s",bank.aadhar_no);
printf("\n\t\t\tState : %s",bank.state);
printf("\n\t\t\tDistrict : %s",bank.district);
printf("\n\t\t\tPincode : %s",bank.pin_code);
printf("\n\t\t\tAddress : %s",bank.address);
printf("\n\t\t\tEmail id : %s",bank.email);
printf("\n\t\t\tAmount in your account : %f",bank.amount);
}
}
else
{
printf("\n\t\t\tWromg information please enter correct information");
}
getch();
}
void deposit()
{
clrscr();
printf("\n\n\t\t\t\xB2\xB2\xB2 To Deposit \xB2\xB2\xB2");
printf("\n\t\t\tHow much amount you want to deposit :");
scanf("%f",&bank.deposit);
bank.amount=bank.amount+bank.deposit;
printf("\n\t\t\tTotal amount in your account :%f",bank.amount);
getch();
}
void withdraw()
{
clrscr();
printf("\n\n\t\t\t\xB2\xB2\xB2 To Withdraw \xB2\xB2\xB2");
printf("\n\n\t\t\tEnter the amount how much you want to withdraw :");
scanf("%f",&bank.withdraw);
bank.amount=bank.amount-bank.withdraw;
printf("\n\t\t\tTotal amount in your account :%f",bank.amount);
getch();
}



