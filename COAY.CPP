#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
clrscr();                       //piyush calendar of any year
int mon,year,lf,dl,c;
cout<<endl<<"\t \t \t"<<"C A L E N D A R   O F   ANY   YEAR"<<endl;
cout<<"\n enter the month code: \n \n";
cin>>mon;
if(mon>=13||mon<=0)
{ cout<<"error in month";
exit(0); }
cout<<"\n enter the year (yyyy): \n \n";
cin>>year;
if(year>=10000||year<=0)
{ cout<<"error in year";
exit(0); }
lf=(year-(year%4));
dl=year%4;
if(mon==1)
c=0;
else if(mon==2)
c=1;
else if(mon==3)
c=-1;
else if(mon==4)
c=0;
else if(mon==5)
c=0;
else if(mon==6)
c=1;
else if(mon==7)
c=1;
else if(mon==8)
c=2;
else if(mon==9)
c=3;
else if(mon==10)
c=3;
else if(mon==11)
c=4;
else
c=4;
int day[32];
int l2=lf/100;
if(year>=2000)
{
if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
{
for(int i=1;i<=31;i++)
{ day[i]=(6+(dl-l2+20+(30*(mon-1))+i+c-(lf/2)+1000)%7)%7; } }
else if(mon==4||mon==6||mon==9||mon==11)
{
for(int i=1;i<=30;i++)
{ day[i]=(6+(dl-l2+20+(30*(mon-1))+i+c-(lf/2)+1000)%7)%7; } }
else if(mon==2&&(year%4==0))
{
for(int i=1;i<=29;i++)
{ day[i]=(6+(dl-l2+20+(30*(mon-1))+i+c-(lf/2)+1000)%7)%7; } }
else
{
for(int i=1;i<=28;i++)
{ day[i]=(6+(dl-l2+20+(30*(mon-1))+i+c-(lf/2)+1000)%7)%7; } } }
else
{
if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
{
for(int i=1;i<=31;i++)
{ day[i]=(6+(dl-l2+19+(30*(mon-1))+i+c-(lf/2)+1000)%7)%7; } }
else if(mon==4||mon==6||mon==9||mon==11)
{
for(int i=1;i<=30;i++)
{ day[i]=(6+(dl-l2+19+(30*(mon-1))+i+c-(lf/2)+1000)%7)%7; } }
else if(mon==2&&(year%4==0))
{
for(int i=1;i<=29;i++)
{ day[i]=(6+(dl-l2+19+(30*(mon-1))+i+c-(lf/2)+1000)%7)%7; } }
else
{
for(int i=1;i<=28;i++)
{ day[i]=(6+(dl-l2+19+(30*(mon-1))+i+c-(lf/2)+1000)%7)%7; } } }

char dys[7];
dys[0]='S';
dys[1]='M';
dys[2]='T';
dys[3]='W';
dys[4]='T';
dys[5]='F';
dys[6]='S';
cout<<endl<<endl;
for(int x=0;x<=6;x++)
{ cout<<"\t"<<dys[x]; }
cout<<endl<<endl;
if(mon==2&&(year%4==0))
{ for(int j=0;j<(day[1]-1);j++)
{ cout<<"\t"<<' '; } }
else
{ for(int j=0;j<day[1];j++)
{cout<<"\t"<<' '; } }
if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
{
for(int f=1;f<=31;f++)
{ cout<<"\t"<<f;
  if(day[f]==6)
  cout<<endl<<endl;  } }
else if(mon==4||mon==6||mon==9||mon==11)
{
for(int f=1;f<=30;f++)
{ cout<<"\t"<<f;
if(day[f]==6)
cout<<endl<<endl;  } }
else if(mon==2&&(year%4==0))
{
for(int f=1;f<=29;f++)
{ cout<<"\t"<<f;
if(day[f]==0)
cout<<endl<<endl;  } }
else
{
for(int f=1;f<=28;f++)
{ cout<<"\t"<<f;
if(day[f]==6)
cout<<endl<<endl;  } }
getch();
}




