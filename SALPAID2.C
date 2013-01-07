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
int a,month,year,basic,hra,cca,ppa=0,ea,ta=105;
int pf,ro,w,e,r,nb=0,nb1,nb2;
int qw,q=375,m,u,y,n_sp=sp,kl=0;
int a2,a3,a4,a5,a6,a7,a8,asa,cv;
int f[30],g[30],asap[30];
float a1,b1,b2,b3,b4,b5,b6,b7,b8;
int g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
long int gs,net,g_gs=0,g_net=0,g_da=0,g_basic=0,da;
long int t_basic=0,t_gs=0,t_net=0,t_da=0;
long int  t_ppa=0,t_cca=0,t_ea=0,t_ta=0,t_sp=0,t_hra=0,t_pf=0;
float i,j,k,l;

FILE *p;
clrscr();
p=fopen("paid.txt","w");
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
{qw=560;}
}
}
else if(b<1993 && b>=1976)
{
nb1= basicsal(b,c,1,1993,o);
nb2=basicsal(b,c,1,1994,o) ;
qw=nb2-nb1;
if(qw==0) qw=560;
if(qw==970) qw=560;
if(qw==1530) qw=560;
if(qw==1120) qw=560;
}
else

{qw=560;    }
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
{qw=560;}
}
}
else if(b<1993 && b>=1977)
{
nb1= basicsal(b,c,1,1993,o);
nb2=basicsal(b,c,1,1994,o) ;
qw=nb2-nb1;
if(qw==0) qw=560;
if(qw==970) qw=560;
if(qw==1530) qw=560;
if(qw==1120) qw=560;
}
else

{qw=560;    }


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
{qw=560;}
}
}
else if(b<1993 && b>=1979)
{
nb1= basicsal(b,c,1,1993,o);
nb2=basicsal(b,c,1,1994,o) ;

qw=nb2-nb1;
if(qw==0) qw=560;
if(qw==970) qw=560;
if(qw==1530) qw=560;
if(qw==1120) qw=560;
}
else

{qw=560;    }


}

kl=0;
read:
printf("\n\nIF YOU HAVE TAKEN ADDITIONAL SPECIAL ALLOUNCE THEN PRESS 1 OTHERWISE 2\n");
scanf("%d",&asa);

if(asa==1)
{
printf("ENTER MONTH=");
scanf("%d",&f[kl]);
printf("ENTER YEAR=");
scanf("%d",&g[kl]);
printf("ENTER VALUE=");
scanf("%d",&asap[kl]);
kl=kl+1;
goto read;
}


fprintf(p,"EMPLOYEE NAME=%s",name);
fprintf(p,"\nEMPLOYEE NO=%d",num);
fprintf(p,"\n\t\t\t\t\t**PAID**");
fprintf(p,"\n\n\t\t\t\t**FINANCIAL YEAR-2007/08**");
fprintf(p,"\n\n YEAR\tBASIC\tSP   \tDA  \tHRA \tCCA \tPPA \tEA \tTA\tGS  \tPF \tNET");
fprintf(p,"\n");
fprintf(p,"---------------------------------------------------------------------------------------------");
sp=n_sp;
if(o==1)
ea=gea(c,b,12,2007);
if(o==2)
ea=c1ea(c,b,12,2007);
if(o==3)
ea=ca2ea(c,b,12,2007);
basic=basicsal(b,c,12,2007,o);
fprintf(p,"\n11/2007");
for(cv=0;cv<30;cv++)
{
if(f[cv]==11 && g[cv]==2007)
sp=aspa(asap[cv],sp);
}



i=(basic+ea+sp)*0.333;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;

l=qw*(1.458);
ppa=round(l);
gs=(long int)(basic+ea+sp+da+hra+q+ppa+ta);


m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n12/2007");
for(cv=0;cv<30;cv++)
{
if(f[cv]==12 && g[cv]==2007)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.333;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;

l=qw*(1.458);

ppa=round(l);
gs=(long int)(basic+ea+sp+da+hra+q+ppa+ta);

m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n01/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==1 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}


i=(basic+ea+sp)*0.333;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.458);
ppa=round(l);    gs=basic+ea+sp+da+hra+q+ppa+ta;
m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
		fprintf(p,"\n02/2008");
	b6=ea*0.96774;a6=round(b6);
	b7=105*0.96774;a7=round(b7);
	b5=sp*0.96774; a5=round(b5);

for(cv=0;cv<30;cv++)
{
if(f[cv]==2 && g[cv]==2008)
a5=aspa(asap[cv],a5);
}


	i=(basic+a6+a5)*0.3456;

	da=round(i);
	j=(basic+a6+a5)*0.085;
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
	l=qw*(1.4706)*0.96774;
	ppa=round(l);
	gs=basic+a6+a5+da+hra+q+ppa+a7;
	b8=0.96774*qw; a8=round(b8);
	m=(basic+a6+a5+a8)*0.1;
	pf=round(m);
	net=gs-pf;
	g_basic+=basic; g_sp+=a5; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
	g_gs+=gs; g_ppa+=ppa; g_ea+=a6; g_ta+=a7;
	fprintf(p,"\t%d\t%d\t%ld\t%d",basic,a5,da,hra);
	fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,a6,a7);
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
fprintf(p,"\n02/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==2 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}




i=(basic+ea+sp)*0.3456;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.4706);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;
m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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

q=375;
basic=basicsal(b,c,4,2008,o);
fprintf(p,"\n03/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==3 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}







i=(basic+ea+sp)*0.3456;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.4706);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
fprintf(p,"\n---------------------------------------------------------------------------------------------");

fprintf(p,"\nTOTAL");
fprintf(p,"\t%ld\t%d\t%ld\t%d",g_basic,g_sp,g_da,g_hra);
fprintf(p,"\t%d\t%d\t%d\t%d",g_cca,g_ppa,g_ea,g_ta);
fprintf(p,"\t%ld",g_gs);
fprintf(p,"\t%d\t%ld",g_pf,g_net);
t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;


//4/2008

sp=n_sp;
fprintf(p,"\n\n\t\t\t\t**FINANCIAL YEAR-2008/09**");
fprintf(p,"\n\n YEAR\tBASIC\tSP   \tDA  \tHRA \tCCA \tPPA \tEA \tTA\tGS  \tPF \tNET");
fprintf(p,"\n");
fprintf(p,"---------------------------------------------------------------------------------------------");

g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0,g_net=0,g_da=0,g_basic=0;
if(o==1)
ea=gea(c,b,5,2008);
if(o==2)
ea=c1ea(c,b,5,2008);
if(o==3)
ea=ca2ea(c,b,5,2008);

basic=basicsal(b,c,5,2008,o);
fprintf(p,"\n04/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==4 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}



i=(basic+ea+sp)*0.3456;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.4706);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n05/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==5 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}


i=(basic+ea+sp)*0.360;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.485);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n06/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==6 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}
i=(basic+ea+sp)*0.360;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.485);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n07/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==7 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.360;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.485);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
		fprintf(p,"\n08/2008");
	b6=ea*0.96774;a6=round(b6);
	b7=105*0.96774;a7=round(b7);
	b5=sp*0.96774; a5=round(b5);
	for(cv=0;cv<30;cv++)
{
if(f[cv]==8 && g[cv]==2008)
a5=aspa(asap[cv],a5);
}

	i=(basic+a6+a5)*0.3978;

	da=round(i);
	j=(basic+a6+a5)*0.085;
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
	l=qw*(1.5228)*0.96774;
	ppa=round(l);
	gs=basic+a6+a5+da+hra+q+ppa+a7;
	b8=0.96774*qw; a8=round(b8);
	m=(basic+a6+a5+a8)*0.1;
	pf=round(m);
	net=gs-pf;
	g_basic+=basic; g_sp+=a5; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
	g_gs+=gs; g_ppa+=ppa; g_ea+=a6; g_ta+=a7;
	fprintf(p,"\t%d\t%d\t%ld\t%d",basic,a5,da,hra);
	fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,a6,a7);
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
fprintf(p,"\n08/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==8 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.3978;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.5228);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n09/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==9 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.3978;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.5228);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
	a1=nb*0.93333;
	basic=round(a1);

	fprintf(p,"\n10/2008");
	b6=ea*0.93333;a6=round(b6);
	b7=105*0.93333;a7=round(b7);
	b5=sp*0.93333; a5=round(b5);
	for(cv=0;cv<30;cv++)
{
if(f[cv]==10 && g[cv]==2008)
a5=aspa(asap[cv],a5);
}

	i=(basic+a6+a5)*0.3978;

	da=round(i);
	j=(basic+a6+a5)*0.085;
	 hra=round(j);
	k=(basic+a6+a7)*0.04;
	a4=round(k);
	if(a4<=375)
	{
	cca=a4;
	 b4=cca*0.93333; q=round(b4);
	}
	else
	b4=375*0.93333; q=round(b4);
	l=qw*(1.5228)*0.93333;
	ppa=round(l);
		gs=basic+a6+a5+da+hra+q+ppa+a7;



	b8=qw*0.93333;a8=round(b8);
	m=(basic+a6+a5+a8)*0.1;
	pf=round(m);
	net=gs-pf;
	g_basic+=basic; g_sp+=a5; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
	g_gs+=gs; g_ppa+=ppa; g_ea+=a6; g_ta+=a7;
	fprintf(p,"\t%d\t%d\t%ld\t%d",basic,a5,da,hra);
	fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,a6,a7);
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
fprintf(p,"\n10/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==10 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.3978;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.5228);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
basic=basicsal(b,c,12,2008,o);
fprintf(p,"\n11/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==11 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.4554;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.5804);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n12/2008");
for(cv=0;cv<30;cv++)
{
if(f[cv]==12 && g[cv]==2008)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.4554;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.5804);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n01/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==1 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.4554;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.5804);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n02/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==2 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.486;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.611);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n03/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==3 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.486;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.611);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
fprintf(p,"\n---------------------------------------------------------------------------------------------");
fprintf(p,"\nTOTAL");
fprintf(p,"\t%ld\t%d\t%ld\t%d",g_basic,g_sp,g_da,g_hra);
fprintf(p,"\t%d\t%d\t%d\t%d",g_cca,g_ppa,g_ea,g_ta);
fprintf(p,"\t%ld",g_gs);
fprintf(p,"\t%d\t%ld",g_pf,g_net);
t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;

//4/2009
sp=n_sp;
fprintf(p,"\n\n\t\t\t\t**FINANCIAL YEAR-2009/10**");
fprintf(p,"\n\n YEAR\tBASIC\tSP   \tDA  \tHRA \tCCA \tPPA \tEA \tTA\tGS  \tPF \tNET");
fprintf(p,"\n");
fprintf(p,"---------------------------------------------------------------------------------------------");

g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0,g_net=0,g_da=0,g_basic=0;
if(o==1)
ea=gea(c,b,5,2009);
if(o==2)
ea=c1ea(c,b,5,2009);
if(o==3)
ea=ca2ea(c,b,5,2009);

basic=basicsal(b,c,5,2009,o);
fprintf(p,"\n04/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==4 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.486;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.611);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n05/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==5 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.4896;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.6146);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n06/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==6 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.4896;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.6146);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n07/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==7 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.4896;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.6146);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
	a1=nb*0.93548;
	basic=round(a1);

	fprintf(p,"\n08/2009");
	b6=ea*0.93548;a6=round(b6);
	b7=105*0.93548;a7=round(b7);
	b5=sp*0.93548; a5=round(b5);
	for(cv=0;cv<30;cv++)
{
if(f[cv]==8 && g[cv]==2009)
a5=aspa(asap[cv],a5);
}

	i=(basic+a6+a5)*0.5238;

	da=round(i);
	j=(basic+a6+a5)*0.085;
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
	l=qw*(1.6488)*0.93548;
	ppa=round(l);
	gs=basic+a6+a5+da+hra+q+ppa+a7;



	b8=qw*0.93548;a8=round(b8);
	m=(basic+a6+a5+a8)*0.1;
	pf=round(m);
	net=gs-pf;
	g_basic+=basic; g_sp+=a5; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
	g_gs+=gs; g_ppa+=ppa; g_ea+=a6; g_ta+=a7;
	fprintf(p,"\t%d\t%d\t%ld\t%d",basic,a5,da,hra);
	fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,a6,a7);
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
fprintf(p,"\n08/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==8 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.5238;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.6488);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n09/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==9 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.5238;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.6488);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n10/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==10 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.5238;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.6488);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n11/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==11 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.63;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.755);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
fprintf(p,"\t%ld",gs);
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
fprintf(p,"\n12/2009");
for(cv=0;cv<30;cv++)
{
if(f[cv]==12 && g[cv]==2009)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.63;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.755);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
	a1=nb*0.96774;
	basic=round(a1);
		fprintf(p,"\n01/2009");
	b6=ea*0.96774;a6=round(b6);
	b7=105*0.96774;a7=round(b7);
	b5=sp*0.96774; a5=round(b5);
for(cv=0;cv<30;cv++)
{
if(f[cv]==1 && g[cv]==2009)
a5=aspa(asap[cv],a5);
}

	i=(basic+a6+a5)*0.63;

	da=round(i);
	j=(basic+a6+a5)*0.085;
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
	l=qw*(1.755)*0.96774;
	ppa=round(l);
	gs=basic+a6+a5+da+hra+q+ppa+a7;
	b8=0.96774*qw; a8=round(b8);
	m=(basic+a6+a5+a8)*0.1;
	pf=round(m);
	net=gs-pf;
	g_basic+=basic; g_sp+=a5; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
	g_gs+=gs; g_ppa+=ppa; g_ea+=a6; g_ta+=a7;
	fprintf(p,"\t%d\t%d\t%ld\t%d",basic,a5,da,hra);
	fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,a6,a7);
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
fprintf(p,"\n01/2010");
for(cv=0;cv<30;cv++)
{
if(f[cv]==1 && g[cv]==2010)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.63;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.755);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
}
//2/2010
q=375;
sp=n_sp;
if(o==1)
ea=gea(c,b,3,2010);
if(o==2)
ea=c1ea(c,b,3,2010);
if(o==3)
ea=ca2ea(c,b,3,2010);

basic=basicsal(b,c,3,2010,o);
fprintf(p,"\n02/2010");
for(cv=0;cv<30;cv++)
{
if(f[cv]==2 && g[cv]==2010)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.6876;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.8126);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;



m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
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
fprintf(p,"\n03/2010");
for(cv=0;cv<30;cv++)
{
if(f[cv]==3 && g[cv]==2010)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.6876;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.8126);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;

m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
fprintf(p,"\n---------------------------------------------------------------------------------------------");
fprintf(p,"\nTOTAL");
fprintf(p,"\t%ld\t%d\t%ld\t%d",g_basic,g_sp,g_da,g_hra);
fprintf(p,"\t%d\t%d\t%d\t%d",g_cca,g_ppa,g_ea,g_ta);
fprintf(p,"\t%ld",g_gs);
fprintf(p,"\t%d\t%ld",g_pf,g_net);
t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;

//4/2010
sp=n_sp;
fprintf(p,"\n\n\t\t\t\t**FINANCIAL YEAR-2010/11**");
fprintf(p,"\n\n YEAR\tBASIC\tSP   \tDA  \tHRA \tCCA \tPPA \tEA \tTA\tGS  \tPF \tNET");
fprintf(p,"\n");
fprintf(p,"---------------------------------------------------------------------------------------------");

g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0;g_net=0;g_da=0,g_basic=0;
if(o==1)
ea=gea(c,b,5,2010);
if(o==2)
ea=c1ea(c,b,5,2010);
if(o==3)
ea=ca2ea(c,b,5,2010);

basic=basicsal(b,c,5,2010,o);
fprintf(p,"\n04/2010");
for(cv=0;cv<30;cv++)
{
if(f[cv]==4 && g[cv]==2010)
sp=aspa(asap[cv],sp);
}

i=(basic+ea+sp)*0.6876;
da=round(i);
j=(basic+ea+sp)*0.085;
hra=round(j);
k=(basic+sp+ea)*0.04;
cca=round(k);
if(cca<=375)
q=cca;
l=qw*(1.8126);
ppa=round(l);
gs=basic+ea+sp+da+hra+q+ppa+ta;
m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;
fprintf(p,"\t%d\t%d\t%ld\t%d",basic,sp,da,hra);
fprintf(p,"\t%d\t%d\t%d\t%d",q,ppa,ea,ta);
fprintf(p,"\t%ld",gs);
fprintf(p,"\t%d\t%ld",pf,net);
fprintf(p,"\n---------------------------------------------------------------------------------------------");
fprintf(p,"\nTOTAL");
fprintf(p,"\t%ld\t%d\t%ld\t%d",g_basic,g_sp,g_da,g_hra);
fprintf(p,"\t%d\t%d\t%d\t%d",g_cca,g_ppa,g_ea,g_ta);
fprintf(p,"\t%ld",g_gs);
fprintf(p,"\t%d\t%ld",g_pf,g_net);
t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;

//grand total
fprintf(p,"\n\n\t\t\t\t\t**GRAND TOTAL**");
fprintf(p,"\n\n YEAR\tBASIC\tSP   \tDA  \tHRA \tCCA \tPPA \tEA \tTA\tGS  \tPF \tNET");

fprintf(p,"\n----------------------------------------------------------------------------------------------");

fprintf(p,"\nGRAND");
fprintf(p,"\t%ld\t%ld\t%ld\t%ld",t_basic,t_sp,t_da,t_hra);
fprintf(p,"\t%ld\t%ld\t%ld\t%ld",t_cca,t_ppa,t_ea,t_ta);
fprintf(p,"\t%ld",t_gs);

fprintf(p,"\t%ld\t%ld",t_pf,t_net);

fprintf(p,"\nTOTAL");
fprintf(p,"\n----------------------------------------------------------------------------------------------");
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
int q[]={4840,5055,5390,5725,
	6060,6530,7000,7470,
	7940,8440,8940,9440,
	10000,10560,11120,
	11680,12650,13210};

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

k=(l-17)/3;
j=(k*560)+13210;
if(j>16570) return(16570);
else
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

	k=(l-16)/3;
	j=(k*560)+13210;
	if(j>16570) return(16570);
	else
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

k=(l-14)/3;
j=(k*560)+13210;
if(j>16570) return(16570);
else
return(j);

}
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
return (360);
if(k>=18 && l>=0)

{e=180;
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
return(540);
if(k>=18 && l>0)
return(360);
if(k>=17 && l>0)
{e=180;
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
return(900);
if(k>=18 && l>=0)
return(720);
if(k>=17 && l>=0)
return(540);
if(k>=16 && l>=0)
return(360);
if(k>=15 && l>=0)
{e=180;
return(e);    }
}




int aspa(int asap,int sp)
{
     int a;
     a=asap+sp;
     return (a);
}