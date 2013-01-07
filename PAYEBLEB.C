#include<stdio.h>
#include<conio.h>
int round(float);
int basicsal(int,int,int,int,int);
void salary(int,int,int,int,char name[],long int);
int gea(int ,int ,int ,int ) ;
int c1ea(int ,int ,int ,int );
int ca2ea(int ,int ,int ,int );


void main()
{
int a,b,c,num,s,sp;
char name[50];



clrscr();
printf("ENTER EMPLOYEE NAME=");
gets(name);
printf("\nENTER EMPLOYEE NUMBER=");
scanf("%ld",&num);
printf("\n\n\nENTER YOUR JOINING MONTH=");
scanf("%d",&c);
printf("\nENTER YOUR JOINING YEAR=");
scanf("%d",&b);
printf("\n\n\nIF YOU HAVE TAKEN SP THEN PRESS 1 OTERWISE 2\n");
scanf("%d",&s);
switch(s)
{
	case 1:
	printf("\nENTER YOUR SPECIAL ALLOUNCE=");
	scanf("%d",&sp);
	break;
	case 2:
	sp=0;
	break;
	}
printf("\n\nIF YOU ARE GRADUATE PRESS 1\nIF YOU ARE CAIIB-1  PRESS 2");
printf("\nIF YOU ARE CAIIB-2  PRESS 3\n");
scanf("%d",&a);
switch(a)
{
case 1:
salary(1,sp,c,b,name,num);
break;
case 2:
salary(2,sp,c,b,name,num);
break;
case 3:
salary(3,sp,c,b,name,num);
}
getch();
}


void salary(int o,int sp,int c,int b,char name[],long int num)
{
int a,month,year,basic,hra,cca,ppa=0,ea,ta=225;
int pf,ro,w,e,r,nb=0,nb1,nb2;
int qw,q,m,u,y,n_sp=sp,kl=0;
int a2,a3,a4,a5,a6,a7,a8,asa,cv;
int f[30],g[30],asap[30];
float a1,b1,b2,b3,b4,b5,b6,b7,b8;
int g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
long int gs,sg,net,g_gs=0,g_net=0,g_da=0,g_basic=0;
long int t_basic=0,t_gs=0,t_net=0,t_da=0,da;
long int  t_ppa=0,t_cca=0,t_ea=0,t_ta=0,t_sp=0,t_hra=0,t_pf=0;
float i,j,k,l;

FILE *p;
clrscr();
p=fopen("PAYABLE.txt","w");
if(o==1)
{
if(b>=1994 )
{
qw=0;}
else if(b==1993)
{
if(c>=1)
{qw=0; }

else
{
nb1= basicsal(b,c,1,1993,o);
nb2=basicsal(b,c,1,1994,o) ;
qw=nb2-nb1;
if(qw==0)
{qw=800;}
if(qw==1300)
{qw=800;}
}
}
else if(b<1993 && b>=1976)
{
nb1= basicsal(b,c,1,1993,o);
nb2=basicsal(b,c,1,1994,o) ;
qw=nb2-nb1;
if(qw==1300)
{qw=800;}
if(qw==1600) qw=800;
if(qw==2100) qw=800;
if(qw==2000) qw=700;
}
else

{qw=800;    }
}
if(o==2)
{
if(b>=1994 )
{
qw=0;}
else if(b==1993)
{
if(c>=1)
{qw=0; }
else
{
nb1= basicsal(b,c,1,1993,o);
nb2=basicsal(b,c,1,1994,o) ;
qw=nb2-nb1;
if(qw==0)
{qw=800;}
if(qw==1300)
{qw=800;}
}
}
else if(b<1993 && b>=1977)
{
nb1= basicsal(b,c,1,1993,o);
nb2=basicsal(b,c,1,1994,o) ;
qw=nb2-nb1;
if(qw==1300)
{qw=800;}
if(qw==1600) qw=800;
if(qw==2100) qw=800;
if(qw==2000) qw=700;
}
else

{qw=800;    }


}

if(o==3)
{
if(b>=1994 )
{
qw=0;}
else if(b==1993)
{
if(c>=1)
{qw=0; }
else
{
nb1= basicsal(b,c,1,1993,o);
nb2=basicsal(b,c,1,1994,o) ;
qw=nb2-nb1;
if(qw==0)
{qw=800;}
if(qw==1300)
{qw=800;}
}
}
else if(b<1993 && b>=1979)
{
nb1= basicsal(b,c,1,1993,o);
nb2=basicsal(b,c,1,1994,o) ;

qw=nb2-nb1;
if(qw==1300)
{qw=800;}
if(qw==1600) qw=800;
if(qw==2100) qw=800;
if(qw==2000) qw=700;
}
else

{qw=800;    }

}

kl=0;
read:
printf("\n\nIF YOU HAVE TAKEN ADDITIONAL SPECIAL ALLOUNCE THEN PRESS 1 OTHERWISE 2\n");
scanf("%d",&asa);

if(asa==1)
{
printf("ENTER MONTH=");
scanf("%d",&f[kl]);
+printf("ENTER YEAR=");
scanf("%d",&g[kl]);
printf("ENTER VALUE=");
scanf("%d",&asap[kl]);
kl=kl+1;
goto read;
}


fprintf(p,"EMPLOYEE NAME=%s",name);
fprintf(p,"\nEMPLOYEE NO=%d",num);
fprintf(p,"\n\t\t\t\t\t**PAYABLE**");
fprintf(p,"\n\n\t\t\t\t**FINANCIAL YEAR-2007/08**");
fprintf(p,"\n\n YEAR\tBASIC\tSP   \tDA  \tHRA \tPPA \tEA \tTA\tGS  \tPF \tNET");
fprintf(p,"\n");
fprintf(p,"--------------------------------------------------------------------------------------");
sp=n_sp;
if(o==1)
ea=gea(c,b,12,2007);
if(o==2)
ea=c1ea(c,b,12,2007);
if(o==3)
ea=ca2ea(c,b,12,2007);
basic=basicsal(b,c,12,2007,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n11/2007");
for(cv=0;cv<30;cv++)
{
if(f[cv]==11 && g[cv]==2007)
sp=aspa(asap[cv],sp);
}



i=(basic+ea+sp)*0.072;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);

l=qw*(1.172);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;


m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//12/2007
sp=n_sp;
if(o==1)
ea=gea(c,b,1,2008);
if(o==2)
ea=c1ea(c,b,1,2008);
if(o==3)
ea=ca2ea(c,b,1,2008);

basic=basicsal(b,c,1,2008,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n12/2007");
for(cv=0;cv<30;cv++)
{
if(f[cv]==12 && g[cv]==2007)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.072;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);

l=qw*(1.172);

ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;

m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//1/2008
sp=n_sp;
if(o==1)
ea=gea(c,b,2,2008);
if(o==2)
ea=c1ea(c,b,2,2008);
if(o==3)
ea=ca2ea(c,b,2,2008);

basic=basicsal(b,c,2,2008,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n01/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==1 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}


i=(basic+ea+sp)*0.072;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
l=qw*(1.172);
ppa=round(l);    gs=basic+ea+sp+da+hra+ppa+ta;
m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//2/2008
sp=n_sp;
printf("\n\nIF YOU HAVE JOIN STRIKE ON FEB-08 PRESS 1 OTHERWISE 2\n");
scanf("%d",&w);
switch(w)
{
	case 1:
	if(o==1)
ea=gea(c,b,3,2008);
if(o==2)
ea=c1ea(c,b,3,2008);
if(o==3)
ea=ca2ea(c,b,3,2008);

	nb=basicsal(b,c,3,2008,o);
	a1=nb*0.96774;
	basic=round(a1);
		if(basic>=14800)
{ta=275;}
		fprintf(p,"\n02/2008");
	b6=ea*0.96774;a6=round(b6);
	b7=ta*0.96774;a7=round(b7);
	b5=sp*0.96774; a5=round(b5);

for(cv=0;cv<30;cv++)
{
if(f[cv]==2 && g[cv]==2008)
a5=aspa(asap[cv],a5);
}


	i=(basic+a6+a5)*0.0825;

	da=round(i);
	j=(basic+a6+a5)*0.1;
	 hra=round(j);
	l=qw*(1.1825)*0.96774;
	ppa=round(l);
	gs=basic+a6+a5+da+hra+ppa+a7;
	b8=0.96774*qw; a8=round(b8);
	m=(basic+a6+a5+a8)*0.1;
	pf=round(m);
	net=gs-pf;
	g_basic+=basic; g_sp+=a5; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
	g_gs+=gs; g_ppa+=ppa; g_ea+=a6; g_ta+=a7;
	fprintf(p,"\t%d\t%d\t%ld\t%d",basic,a5,da,hra);
	fprintf(p,"\t%d\t%d\t%d",ppa,a6,a7);
	fprintf(p,"\t%ld",gs);
	fprintf(p,"\t%d\t%ld",pf,net);
	break;

case 2:
if(o==1)
ea=gea(c,b,3,2008);
if(o==2)
ea=c1ea(c,b,3,2008);
if(o==3)
ea=ca2ea(c,b,3,2008);

basic=basicsal(b,c,3,2008,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n02/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==2 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}




i=(basic+ea+sp)*0.0825;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);

l=qw*(1.1825);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;
m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
break;

}

//3/2008
sp=n_sp;
if(o==1)
ea=gea(c,b,4,2008);
if(o==2)
ea=c1ea(c,b,4,2008);
if(o==3)
ea=ca2ea(c,b,4,2008);


basic=basicsal(b,c,4,2008,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n03/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==3 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}







i=(basic+ea+sp)*0.0825;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);

l=qw*(1.1825);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
fprintf(p,"\n--------------------------------------------------------------------------------------");

fprintf(p,"\nTOTAL");
fprintf(p,"\t%ld\t%d\t%ld\t%d",g_basic,g_sp,g_da,g_hra);
fprintf(p,"\t%d\t%d\t%d",g_ppa,g_ea,g_ta);
fprintf(p,"\t%ld",g_gs);
fprintf(p,"\t%d\t%ld",g_pf,g_net);
t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;


//4/2008

sp=n_sp;
fprintf(p,"\n\n\t\t\t\t**FINANCIAL YEAR-2008/09**");
fprintf(p,"\n\n YEAR\tBASIC\tSP   \tDA  \tHRA \tPPA \tEA \tTA\tGS  \tPF \tNET");
fprintf(p,"\n");
fprintf(p,"--------------------------------------------------------------------------------------");

g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0,g_net=0,g_da=0,g_basic=0;
if(o==1)
ea=gea(c,b,5,2008);
if(o==2)
ea=c1ea(c,b,5,2008);
if(o==3)
ea=ca2ea(c,b,5,2008);

basic=basicsal(b,c,5,2008,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n04/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==4 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}



i=(basic+ea+sp)*0.0825;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
l=qw*(1.1825);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//5/2008

sp=n_sp;
if(o==1)
ea=gea(c,b,6,2008);
if(o==2)
ea=c1ea(c,b,6,2008);
if(o==3)
ea=ca2ea(c,b,6,2008);

basic=basicsal(b,c,6,2008,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n05/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==5 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}


i=(basic+ea+sp)*0.0945;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
l=qw*(1.1945);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
//6/2008
sp=n_sp;
if(o==1)
ea=gea(c,b,7,2008);
if(o==2)
ea=c1ea(c,b,7,2008);
if(o==3)
ea=ca2ea(c,b,7,2008);

basic=basicsal(b,c,7,2008,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n06/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==6 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}
i=(basic+ea+sp)*0.0945;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);

l=qw*(1.1945);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//7/2008
sp=n_sp;
if(o==1)
ea=gea(c,b,8,2008);
if(o==2)
ea=c1ea(c,b,8,2008);
if(o==3)
ea=ca2ea(c,b,8,2008);
basic=basicsal(b,c,8,2008,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n07/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==7 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.0945;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);

l=qw*(1.1945);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//8/2008
sp=n_sp;
printf("\n\nIF YOU HAVE JOIN STRIKE ON AUG-08 PRESS 1 OTHERWISE 2\n");
scanf("%d",&u);
switch(u)
{
	case 1:
	if(o==1)
ea=gea(c,b,9,2008);
if(o==2)
ea=c1ea(c,b,9,2008);
if(o==3)
ea=ca2ea(c,b,9,2008);

	nb=basicsal(b,c,9,2008,o);
	a1=nb*0.96774;
	basic=round(a1);
	if(basic>=14800)
{ta=275;}	fprintf(p,"\n08/2008");
	b6=ea*0.96774;a6=round(b6);
	b7=ta*0.96774;a7=round(b7);
	b5=sp*0.96774; a5=round(b5);
	for(cv=0;cv<30;cv++)
{
if(f[cv]==8 && g[cv]==2008)
a5=aspa(asap[cv],a5);
}

	i=(basic+a6+a5)*0.126;

	da=round(i);
	j=(basic+a6+a5)*0.1;
	 hra=round(j);

	l=qw*(1.226)*0.96774;
	ppa=round(l);
	gs=basic+a6+a5+da+hra+ppa+a7;
	b8=0.96774*qw; a8=round(b8);
	m=(basic+a6+a5+a8)*0.1;
	pf=round(m);
	net=gs-pf;
	g_basic+=basic; g_sp+=a5; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
	g_gs+=gs; g_ppa+=ppa; g_ea+=a6; g_ta+=a7;
	fprintf(p,"\t%d\t%d\t%ld\t%d",basic,a5,da,hra);
	fprintf(p,"\t%d\t%d\t%d",ppa,a6,a7);
	fprintf(p,"\t%ld",gs);
	fprintf(p,"\t%d\t%ld",pf,net);
	break;

case 2:
if(o==1)
ea=gea(c,b,9,2008);
if(o==2)
ea=c1ea(c,b,9,2008);
if(o==3)
ea=ca2ea(c,b,9,2008);

basic=basicsal(b,c,9,2008,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n08/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==8 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.126;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
l=qw*(1.226);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
}
//9/2008

sp=n_sp;
if(o==1)
ea=gea(c,b,10,2008);
if(o==2)
ea=c1ea(c,b,10,2008);
if(o==3)
ea=ca2ea(c,b,10,2008);
q=375;
basic=basicsal(b,c,10,2008,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n09/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==9 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.126;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);

l=qw*(1.226);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//10/2008
sp=n_sp;
printf("\n\nIF YOU HAVE JOIN STRIKE ON OCT-08 PRESS 1 OTHERWISE 2\n");
scanf("%d",&e);
switch(e)
{
	case 1:
	if(o==1)
ea=gea(c,b,11,2008);
if(o==2)
ea=c1ea(c,b,11,2008);
if(o==3)
ea=ca2ea(c,b,11,2008);

	nb=basicsal(b,c,11,2008,o);
	if(nb>=14800)
{ta=275;}
	a1=nb*0.93333;
	basic=round(a1);
	fprintf(p,"\n10/2008");
	b6=ea*0.93333;a6=round(b6);
	b7=ta*0.93333;a7=round(b7);
	b5=sp*0.93333; a5=round(b5);
	for(cv=0;cv<30;cv++)
{
if(f[cv]==10 && g[cv]==2008)
a5=aspa(asap[cv],a5);
}

	i=(basic+a6+a5)*0.126;

	da=round(i);
	j=(basic+a6+a5)*0.1;
	 hra=round(j);
	l=qw*(1.226)*0.93333;
	ppa=round(l);
		gs=basic+a6+a5+da+hra+ppa+a7;



	b8=qw*0.93333;a8=round(b8);
	m=(basic+a6+a5+a8)*0.1;
	pf=round(m);
	net=gs-pf;
	g_basic+=basic; g_sp+=a5; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
	g_gs+=gs; g_ppa+=ppa; g_ea+=a6; g_ta+=a7;
	fprintf(p,"\t%d\t%d\t%ld\t%d",basic,a5,da,hra);
	fprintf(p,"\t%d\t%d\t%d",ppa,a6,a7);
	fprintf(p,"\t%ld",gs);
	fprintf(p,"\t%d\t%ld",pf,net);
	break;
case 2:
if(o==1)
ea=gea(c,b,11,2008);
if(o==2)
ea=c1ea(c,b,11,2008);
if(o==3)
ea=ca2ea(c,b,11,2008);

basic=basicsal(b,c,11,2008,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n10/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==10 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.126;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
l=qw*(1.226);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
}
//11/2008

sp=n_sp;

if(o==1)
ea=gea(c,b,12,2008);
if(o==2)
ea=c1ea(c,b,12,2008);
if(o==3)
ea=ca2ea(c,b,12,2008);

q=375;
if(basic>=14800)
{ta=275;}
basic=basicsal(b,c,12,2008,o);
fprintf(p,"\n11/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==11 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.174;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
l=qw*(1.274);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//12/2008

sp=n_sp;
if(o==1)
ea=gea(c,b,1,2009);
if(o==2)
ea=c1ea(c,b,1,2009);
if(o==3)
ea=ca2ea(c,b,1,2009);

basic=basicsal(b,c,1,2009,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n12/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==12 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.174;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.274);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//1/2009
sp=n_sp;
if(o==1)
ea=gea(c,b,2,2009);
if(o==2)
ea=c1ea(c,b,2,2009);
if(o==3)
ea=ca2ea(c,b,2,2009);

basic=basicsal(b,c,2,2009,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n01/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==1 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.174;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.274);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//2/2009

sp=n_sp;
if(o==1)
ea=gea(c,b,3,2009);
if(o==2)
ea=c1ea(c,b,3,2009);
if(o==3)
ea=ca2ea(c,b,3,2009);
q=375;
basic=basicsal(b,c,3,2009,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n02/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==2 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.1995;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.2995);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);


//3/2009

sp=n_sp;
if(o==1)
ea=gea(c,b,4,2009);
if(o==2)
ea=c1ea(c,b,4,2009);
if(o==3)
ea=ca2ea(c,b,4,2009);

basic=basicsal(b,c,4,2009,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n03/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==3 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.1995;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.2995);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
fprintf(p,"\n--------------------------------------------------------------------------------------");
fprintf(p,"\nTOTAL");
fprintf(p,"\t%ld\t%d\t%ld\t%d",g_basic,g_sp,g_da,g_hra);
fprintf(p,"\t%d\t%d\t%d",g_ppa,g_ea,g_ta);
fprintf(p,"\t%ld",g_gs);
fprintf(p,"\t%d\t%ld",g_pf,g_net);
t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;

//4/2009
sp=n_sp;
fprintf(p,"\n\n\t\t\t\t**FINANCIAL YEAR-2009/10**");
fprintf(p,"\n\n YEAR\tBASIC\tSP   \tDA  \tHRA \tPPA \tEA \tTA\tGS  \tPF \tNET");
fprintf(p,"\n");
fprintf(p,"--------------------------------------------------------------------------------------");

g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0,g_net=0,g_da=0,g_basic=0;
if(o==1)
ea=gea(c,b,5,2009);
if(o==2)
ea=c1ea(c,b,5,2009);
if(o==3)
ea=ca2ea(c,b,5,2009);

basic=basicsal(b,c,5,2009,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n04/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==4 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.1995;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.2995);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//5/2009
sp=n_sp;
if(o==1)
ea=gea(c,b,6,2009);
if(o==2)
ea=c1ea(c,b,6,2009);
if(o==3)
ea=ca2ea(c,b,6,2009);

basic=basicsal(b,c,6,2009,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n05/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==5 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.2025;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.3025);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//6/2009

sp=n_sp;
if(o==1)
ea=gea(c,b,7,2009);
if(o==2)
ea=c1ea(c,b,7,2009);
if(o==3)
ea=ca2ea(c,b,7,2009);

basic=basicsal(b,c,7,2009,o);

if(basic>=14800)
{ta=275;}fprintf(p,"\n06/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==6 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.2025;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.3025);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//7/2009

sp=n_sp;
if(o==1)
ea=gea(c,b,8,2009);
if(o==2)
ea=c1ea(c,b,8,2009);
if(o==3)
ea=ca2ea(c,b,8,2009);

basic=basicsal(b,c,8,2009,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n07/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==7 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.2025;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.3025);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//8/2009
sp=n_sp;
printf("\n\nIF YOU HAVE JOIN STRIKE ON AUG-09 PRESS 1 OTHERWISE 2\n");
scanf("%d",&r);
switch(r)
{
	case 1:
	if(o==1)
ea=gea(c,b,9,2009);
if(o==2)
ea=c1ea(c,b,9,2009);
if(o==3)
ea=ca2ea(c,b,9,2009);

	nb=basicsal(b,c,9,2009,o);
	if(nb>=14800)
{ta=275;}
	a1=nb*0.93548;
	basic=round(a1);

	fprintf(p,"\n08/2009");
	b6=ea*0.93548;a6=round(b6);
	b7=ta*0.93548;a7=round(b7);
	b5=sp*0.93548; a5=round(b5);
	for(cv=0;cv<30;cv++)
{
if(f[cv]==8 && g[cv]==2009)
a5=aspa(asap[cv],a5);
}

	i=(basic+a6+a5)*0.231;

	da=round(i);
	j=(basic+a6+a5)*0.1;
	 hra=round(j);
	k=(basic+a6+a7)*0.04;
	a4=round(k);
	if(a4<=375)
	{
	cca=a4;
	 b4=cca*0.93548; q=round(b4);
	}
	else
	b4=375*0.93548; q=round(b4);
	l=qw*(1.331)*0.93548;
	ppa=round(l);
	gs=basic+a6+a5+da+hra+ppa+a7;



	b8=qw*0.93548;a8=round(b8);
	m=(basic+a6+a5+a8)*0.1;
	pf=round(m);
	net=gs-pf;
	g_basic+=basic; g_sp+=a5; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
	g_gs+=gs; g_ppa+=ppa; g_ea+=a6; g_ta+=a7;
	fprintf(p,"\t%d\t%d\t%ld\t%d",basic,a5,da,hra);
	fprintf(p,"\t%d\t%d\t%d",ppa,a6,a7);
	fprintf(p,"\t%ld",gs);
	fprintf(p,"\t%d\t%ld",pf,net);
	break;
case 2:
if(o==1)
ea=gea(c,b,9,2009);
if(o==2)
ea=c1ea(c,b,9,2009);
if(o==3)
ea=ca2ea(c,b,9,2009);

basic=basicsal(b,c,9,2009,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n08/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==8 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.231;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.331);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
}
//9/2009
sp=n_sp;
if(o==1)
ea=gea(c,b,10,2009);
if(o==2)
ea=c1ea(c,b,10,2009);
if(o==3)
ea=ca2ea(c,b,10,2009);

q=375;
basic=basicsal(b,c,10,2009,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n09/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==9 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.231;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.331);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//10/2009

sp=n_sp;
if(o==1)
ea=gea(c,b,11,2009);
if(o==2)
ea=c1ea(c,b,11,2009);
if(o==3)
ea=ca2ea(c,b,11,2009);

basic=basicsal(b,c,11,2009,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n10/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==10 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.231;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.331);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//11/2009


sp=n_sp;
if(o==1)
ea=gea(c,b,12,2009);
if(o==2)
ea=c1ea(c,b,12,2009);
if(o==3)
ea=ca2ea(c,b,12,2009);

basic=basicsal(b,c,12,2009,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n11/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==11 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.3195;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.4195);
ppa=round(l);
gs=0;
q=124;

sg=basic+ea+sp+da+hra+ppa+ta;


m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=sg-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_net+=net;
g_gs+=sg; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;




fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);

fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",sg);
fprintf(p,"\t%d\t%ld",pf,net);

//12/2009
sp=n_sp;
if(o==1)
ea=gea(c,b,1,2010);
if(o==2)
ea=c1ea(c,b,1,2010);
if(o==3)
ea=ca2ea(c,b,1,2010);

basic=basicsal(b,c,1,2010,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n12/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==12 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.3195;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.4195);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//1/2010


sp=n_sp;
printf("\n\nIF YOU HAVE JOIN STRIKE ON JAN-10 PRESS 1 OTHERWISE 2\n");
scanf("%d",&y);
switch(y)
{
	case 1:
	if(o==1)
ea=gea(c,b,2,2009);
if(o==2)
ea=c1ea(c,b,2,2009);
if(o==3)
ea=ca2ea(c,b,2,2009);

	nb=basicsal(b,c,2,2009,o);
	if(nb>=14800)
{ta=275;}
	a1=nb*0.96774;
	basic=round(a1);
		fprintf(p,"\n01/2009");
	b6=ea*0.96774;a6=round(b6);
	b7=ta*0.96774;a7=round(b7);
	b5=sp*0.96774; a5=round(b5);
for(cv=0;cv<30;cv++)
{
if(f[cv]==1 && g[cv]==2009)
a5=aspa(asap[cv],a5);
}

	i=(basic+a6+a5)*0.3195;

	da=round(i);
	j=(basic+a6+a5)*0.1;
	 hra=round(j);
	k=(basic+a6+a7)*0.04;
	a4=round(k);
	if(a4<=375)
	{
	cca=a4;
	 b4=cca*0.96774; q=round(b4);
	}
	else
	b4=375*0.96774; q=round(b4);
	l=qw*(1.4195)*0.96774;
	ppa=round(l);
	gs=basic+a6+a5+da+hra+ppa+a7;
	b8=0.96774*qw; a8=round(b8);
	m=(basic+a6+a5+a8)*0.1;
	pf=round(m);
	net=gs-pf;
	g_basic+=basic; g_sp+=a5; g_da+=da; g_pf+=pf;g_hra+=hra;g_net+=net;
	g_gs+=gs; g_ppa+=ppa; g_ea+=a6; g_ta+=a7;



	fprintf(p,"\t%d\t%d\t%ld\t%d",basic,a5,da,hra);
	fprintf(p,"\t%d\t%d\t%d",ppa,a6,a7);
	fprintf(p,"\t%ld",gs);
	fprintf(p,"\t%d\t%ld",pf,net);
	break;


case 2:

if(o==1)
ea=gea(c,b,2,2010);
if(o==2)
ea=c1ea(c,b,2,2010);
if(o==3)
ea=ca2ea(c,b,2,2010);

basic=basicsal(b,c,2,2010,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n01/2010");
for(cv=0;cv<30;cv++)
{
if(f[cv]==1 && g[cv]==2010)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.3195;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.4195);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
}
//2/2010

sp=n_sp;
if(o==1)
ea=gea(c,b,3,2010);
if(o==2)
ea=c1ea(c,b,3,2010);
if(o==3)
ea=ca2ea(c,b,3,2010);

basic=basicsal(b,c,3,2010,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n02/2010");
for(cv=0;cv<30;cv++)
{
if(f[cv]==2 && g[cv]==2010)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.3675;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.4675);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);

//3/2010
sp=n_sp;
if(o==1)
ea=gea(c,b,4,2010);
if(o==2)
ea=c1ea(c,b,4,2010);
if(o==3)
ea=ca2ea(c,b,4,2010);

basic=basicsal(b,c,4,2010,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n03/2010");
for(cv=0;cv<30;cv++)
{
if(f[cv]==3 && g[cv]==2010)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.3675;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.4675);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;

m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
fprintf(p,"\n--------------------------------------------------------------------------------------");
fprintf(p,"\nTOTAL");
fprintf(p,"\t%ld\t%d\t%ld\t%d",g_basic,g_sp,g_da,g_hra);
fprintf(p,"\t%d\t%d\t%d",g_ppa,g_ea,g_ta);
fprintf(p,"\t%ld",g_gs);
fprintf(p,"\t%d\t%ld",g_pf,g_net);
t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;

//4/2010
sp=n_sp;
fprintf(p,"\n\n\t\t\t\t**FINANCIAL YEAR-2010/11**");
fprintf(p,"\n\n YEAR\tBASIC\tSP   \tDA  \tHRA \tPPA \tEA \tTA\tGS  \tPF \tNET");
fprintf(p,"\n");
fprintf(p,"--------------------------------------------------------------------------------------");

g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0;g_net=0;g_da=0,g_basic=0;
if(o==1)
ea=gea(c,b,5,2010);
if(o==2)
ea=c1ea(c,b,5,2010);
if(o==3)
ea=ca2ea(c,b,5,2010);

basic=basicsal(b,c,5,2010,o);
if(basic>=14800)
{ta=275;}
fprintf(p,"\n04/2010");
for(cv=0;cv<30;cv++)
{
if(f[cv]==4 && g[cv]==2010)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.3675;
da=round(i);
j=(basic+ea+sp)*0.1;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.4675);
ppa=round(l);
gs=basic+ea+sp+da+hra+ppa+ta;
m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d",ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
fprintf(p,"\n--------------------------------------------------------------------------------------");
fprintf(p,"\nTOTAL");
fprintf(p,"\t%ld\t%d\t%ld\t%d",g_basic,g_sp,g_da,g_hra);
fprintf(p,"\t%d\t%d\t%d",g_ppa,g_ea,g_ta);
fprintf(p,"\t%ld",g_gs);
fprintf(p,"\t%d\t%ld",g_pf,g_net);
t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;

//grand total
fprintf(p,"\n\n\t\t\t\t\t**GRAND TOTAL**");
fprintf(p,"\n\n YEAR\tBASIC\tSP   \tDA  \tHRA \tPPA \tEA \tTA\tGS  \tPF \tNET");

fprintf(p,"\n---------------------------------------------------------------------------------------");

fprintf(p,"\nGRAND");
fprintf(p,"\t%ld\t%ld\t%ld\t%ld",t_basic,t_sp,t_da,t_hra);
fprintf(p,"\t%ld\t%ld\t%ld",t_ppa,t_ea,t_ta);
fprintf(p,"\t%ld",t_gs);

fprintf(p,"\t%ld\t%ld",t_pf,t_net);

fprintf(p,"\nTOTAL");
fprintf(p,"\n---------------------------------------------------------------------------------------");
fprintf(p,"\n\t\t\t\t\t\tMADE BY\n\t\t\t\t\t\tHARSH RAJNIKANT KOTHARI");
getch();
}

int round(float g)
{
int s,f;
s=(int)(g) ;
if((g-s)>=0.50)
s=s+1;

return (s) ;
}

int basicsal(int b,int a,int p,int s,int o)
{

int i,j,k,l=0;
int q[]={7000,7400,7900,8400,
	8900,9500,10100,10700,
	11300,12000,12700,13400,
	14100,14800,15500,16200,
	17500,18300};

if(o==1)
{
for(i=b;i<s;i++)
{
l+=1;
}

if(l<=16)
{

if(a>=p && a<=12)
l=l-1;
return (q[l]);
}
else if(l>=17 && l<=19)
{
if(a>=p && a<=12)
l=l-1;
return (q[l]);
}
else
{
if(a>=p && a<=12)
l=l-1;
if(l>=37 ) return (23900);
k=(l-17)/3;

j=(k*800)+18300;
return(j);
}
}
if(o==2)
	{
	for(i=b;i<s;i++)
	{
	l+=1;
	}

	if(l<=15)
	{

	if(a>=p && a<=12)
	l=l-1;
	return (q[l+1]);
	}
	else if(l>=16 && l<=18)
	{
	if(a>=p && a<=12)
l=l-1;
return (q[l]);
	}
	else
	{
	if(a>=p && a<=12)
	l=l-1;
	if(l>=36 ) return (23900);
	k=(l-16)/3;
	j=(k*800)+18300;
	return(j);

	}
	}

if(o==3)
{
for(i=b;i<s;i++)
{
l+=1;
}

if(l<=13)
{

if(a>=p && a<=12)
l=l-1;
return (q[l+3]);
}
else if(l>=14 && l<=16)
{
if(a>=p && a<=12)
l=l-1;
return (q[l]);
}
else
{
if(a>=p && a<=12)
l=l-1;
if(l>=34 ) return (23900);
k=(l-14)/3;
j=(k*800)+18300;
}
return(j);


}
}

int gea(int a,int b,int n,int m)
{
int i,j,k=0,l=0,e;
for(i=b;i<m;i++)
k+=1;
for(j=a;j<=n;j++)
l+=1;
if(a==n)
{l=11; k=k-1;}
if(n<a)
{l=1; k=k-1;}
if(k<18)
return(0);
if(k>=19 && l>=0)
return (490);
if(k>=18 && l>=0)

{e=250;
return(e);    }
}

int c1ea(int a,int b,int n,int m)
{
int i,j,k=0,l=0,e;
for(i=b;i<m;i++)
k+=1;
for(j=a;j<n;j++)
l+=1;
if(a==n)
{l=11;k=k-1;}

if(n<a)
{l=1;k=k-1;}
if(k<17 )

return(0);

if(k>=19 && l>0)
return(740);
if(k>=18 && l>0)
return(490);
if(k>=17 && l>0)
{e=250;
return(e);}
}

int ca2ea(int a,int b,int n,int m)
{
int i,j,k=0,l=0,e;
for(i=b;i<m;i++)
k+=1;
for(j=a;j<n;j++)
l+=1;
if(a==n)
{l=11 ; k=k-1;}
if(n<a)
{l=1; k=k-1;}
if(k<15  )
return(0);
if(k>=19 && l>=0)
return(1230);
if(k>=18 && l>=0)
return(990);
if(k>=17 && l>=0)
return(740);
if(k>=16 && l>=0)
return(490);
if(k>=15 && l>=0)
{e=250;
return(e);    }
}




int aspa(int asap,int sp)
{
     int a;
     a=asap+sp;
     return (a);
}