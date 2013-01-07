#include<stdio.h>
#include<conio.h>
#include<dos.h>
int round(float);
int basicsal(int,int,int,int,int,int);
void salary(int,int,int,char name[],long int);
int gea(int ,int ,int ,int ) ;
int c1ea(int ,int ,int ,int );
int ca2ea(int ,int ,int ,int );
int gea1(int ,int ,int ,int ) ;
int c1ea1(int ,int ,int ,int );
int ca2ea1(int ,int ,int ,int );
int basicsal1(int,int,int,int,int);
int aspa(int ,int );




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
printf("\n\nIF YOU ARE GRADUATE PRESS 1\nIF YOU ARE CAIIB-1  PRESS 2");
printf("\nIF YOU ARE CAIIB-2  PRESS 3\n");
scanf("%d",&a);
switch(a)
{
case 1:
salary(1,c,b,name,num);
break;
case 2:
salary(2,c,b,name,num);
break;
case 3:
salary(1,c,b,name,num);

}
getch();
}

void salary(int o,int c,int b,char name[],long int num)
{
int a,month,year,basic,hra,cca,ppa=0,ea,ta=105;
int pf,ro,w,e,r,nb=0,nb1,nb2,sp;
int qw,q=375,m,u,y,n_sp,kl=0;
int a2,a3,a4,a5,a6,a7,a8,asa,cv;
int f[30],g[30],asap[30];
float a1,b1,b2,b3,b4,b5,b6,b7,b8;
int g_ppa=0,s,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
long int gs,sg,net,g_gs=0,g_net=0,g_da=0,g_basic=0,da;
long int t_basic=0,t_gs=0,t_net=0,t_da=0;
long int  t_ppa=0,t_cca=0,t_ea=0,t_ta=0,t_sp=0,t_hra=0,t_pf=0;
float i,j,k,l;
long int l_basic=0, l_sp=0, l_da=0, l_pf=0,l_hra=0,l_cca=0;
long int l_net=0,l_gs=0, l_ppa=0, l_ea=0, l_ta=0;

FILE *p;
clrscr();
p=fopen("differen.txt","w");
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
	n_sp=sp;
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
nb1= basicsal(b,c,1,1993,o,1);
nb2=basicsal(b,c,1,1994,o,1) ;
qw=nb2-nb1;
if(qw==0)
{qw=560;}
}
}
else if(b<1993 && b>=1976)
{
nb1= basicsal(b,c,1,1993,o,1);
nb2=basicsal(b,c,1,1994,o,1) ;
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
nb1= basicsal(b,c,1,1993,o,1);
nb2=basicsal(b,c,1,1994,o,1) ;
qw=nb2-nb1;
if(qw==0)
{qw=560;}
}
}
else if(b<1993 && b>=1977)
{
nb1= basicsal(b,c,1,1993,o,1);
nb2=basicsal(b,c,1,1994,o,1) ;
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
nb1= basicsal(b,c,1,1993,o,1);
nb2=basicsal(b,c,1,1994,o,1) ;
qw=nb2-nb1;
if(qw==0)
{qw=560;}
}
}
else if(b<1993 && b>=1979)
{
nb1= basicsal(b,c,1,1993,o,1);
nb2=basicsal(b,c,1,1994,o,1) ;

qw=nb2-nb1;
if(qw==0) qw=560;
if(qw==970) qw=560;
if(qw==1530) qw=560;
if(qw==1120) qw=560;
}
else

{qw=560;    }
}
fprintf(p,"EMPLOYEE NAME=%s",name);
fprintf(p,"\nEMPLOYEE NUMBER=%ld",num);
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

fprintf(p,"\n\n\t\t\t\t\t**PAID**");

sp=n_sp;
if(o==1)
ea=gea(c,b,12,2007);
if(o==2)
ea=c1ea(c,b,12,2007);
if(o==3)
ea=ca2ea(c,b,12,2007);
basic=basicsal(b,c,12,2007,o,1);

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
gs=basic+ea+sp+da+hra+q+ppa+ta;


m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=gs-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_cca+=q;g_net+=net;
g_gs+=gs; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;





//12/2007
sp=n_sp;
if(o==1)
ea=gea(c,b,1,2008);
if(o==2)
ea=c1ea(c,b,1,2008);
if(o==3)
ea=ca2ea(c,b,1,2008);

basic=basicsal(b,c,1,2008,o,1);

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





//1/2008
sp=n_sp;
if(o==1)
ea=gea(c,b,2,2008);
if(o==2)
ea=c1ea(c,b,2,2008);
if(o==3)
ea=ca2ea(c,b,2,2008);

basic=basicsal(b,c,2,2008,o,1);

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

	nb=basicsal(b,c,3,2008,o,1);
	a1=nb*0.96774;
	basic=round(a1);
		
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
	
	
	
	break;

case 2:
if(o==1)
ea=gea(c,b,3,2008);
if(o==2)
ea=c1ea(c,b,3,2008);
if(o==3)
ea=ca2ea(c,b,3,2008);

basic=basicsal(b,c,3,2008,o,1);

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
basic=basicsal(b,c,4,2008,o,1);

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





t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;


//4/2008

sp=n_sp;

g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0,g_net=0,g_da=0,g_basic=0;
if(o==1)
ea=gea(c,b,5,2008);
if(o==2)
ea=c1ea(c,b,5,2008);
if(o==3)
ea=ca2ea(c,b,5,2008);

basic=basicsal(b,c,5,2008,o,1);

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





//5/2008

sp=n_sp;
if(o==1)
ea=gea(c,b,6,2008);
if(o==2)
ea=c1ea(c,b,6,2008);
if(o==3)
ea=ca2ea(c,b,6,2008);

basic=basicsal(b,c,6,2008,o,1);

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




//6/2008
sp=n_sp;
if(o==1)
ea=gea(c,b,7,2008);
if(o==2)
ea=c1ea(c,b,7,2008);
if(o==3)
ea=ca2ea(c,b,7,2008);

basic=basicsal(b,c,7,2008,o,1);

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





//7/2008
sp=n_sp;
if(o==1)
ea=gea(c,b,8,2008);
if(o==2)
ea=c1ea(c,b,8,2008);
if(o==3)
ea=ca2ea(c,b,8,2008);
basic=basicsal(b,c,8,2008,o,1);

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

	nb=basicsal(b,c,9,2008,o,1);
	a1=nb*0.96774;
	basic=round(a1);
		
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
	
	
	
	break;

case 2:
if(o==1)
ea=gea(c,b,9,2008);
if(o==2)
ea=c1ea(c,b,9,2008);
if(o==3)
ea=ca2ea(c,b,9,2008);

basic=basicsal(b,c,9,2008,o,1);

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
basic=basicsal(b,c,10,2008,o,1);

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

	nb=basicsal(b,c,11,2008,o,1);
	a1=nb*0.93333;
	basic=round(a1);

	
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
	
	
	
	break;
case 2:
if(o==1)
ea=gea(c,b,11,2008);
if(o==2)
ea=c1ea(c,b,11,2008);
if(o==3)
ea=ca2ea(c,b,11,2008);

basic=basicsal(b,c,11,2008,o,1);

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
basic=basicsal(b,c,12,2008,o,1);

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





//12/2008

sp=n_sp;
if(o==1)
ea=gea(c,b,1,2009);
if(o==2)
ea=c1ea(c,b,1,2009);
if(o==3)
ea=ca2ea(c,b,1,2009);

basic=basicsal(b,c,1,2009,o,1);

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





//1/2009
sp=n_sp;

if(o==1)
ea=gea(c,b,2,2009);
if(o==2)
ea=c1ea(c,b,2,2009);
if(o==3)
ea=ca2ea(c,b,2,2009);

basic=basicsal(b,c,2,2009,o,1);

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





//2/2009

sp=n_sp;
if(o==1)
ea=gea(c,b,3,2009);
if(o==2)
ea=c1ea(c,b,3,2009);
if(o==3)
ea=ca2ea(c,b,3,2009);
q=375;
basic=basicsal(b,c,3,2009,o,1);

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

//3/2009

sp=n_sp;
if(o==1)
ea=gea(c,b,4,2009);
if(o==2)
ea=c1ea(c,b,4,2009);
if(o==3)
ea=ca2ea(c,b,4,2009);

basic=basicsal(b,c,4,2009,o,1);

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





t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;

//4/2009
sp=n_sp;

g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0,g_net=0,g_da=0,g_basic=0;
if(o==1)
ea=gea(c,b,5,2009);
if(o==2)
ea=c1ea(c,b,5,2009);
if(o==3)
ea=ca2ea(c,b,5,2009);

basic=basicsal(b,c,5,2009,o,1);

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





//5/2009
sp=n_sp;
if(o==1)
ea=gea(c,b,6,2009);
if(o==2)
ea=c1ea(c,b,6,2009);
if(o==3)
ea=ca2ea(c,b,6,2009);

basic=basicsal(b,c,6,2009,o,1);

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





//6/2009

sp=n_sp;
if(o==1)
ea=gea(c,b,7,2009);
if(o==2)
ea=c1ea(c,b,7,2009);
if(o==3)
ea=ca2ea(c,b,7,2009);

basic=basicsal(b,c,7,2009,o,1);

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





//7/2009

sp=n_sp;
if(o==1)
ea=gea(c,b,8,2009);
if(o==2)
ea=c1ea(c,b,8,2009);
if(o==3)
ea=ca2ea(c,b,8,2009);

basic=basicsal(b,c,8,2009,o,1);

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

	nb=basicsal(b,c,9,2009,o,1);
	a1=nb*0.93548;
	basic=round(a1);

	
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
	
	
	break;
case 2:
if(o==1)
ea=gea(c,b,9,2009);
if(o==2)
ea=c1ea(c,b,9,2009);
if(o==3)
ea=ca2ea(c,b,9,2009);

basic=basicsal(b,c,9,2009,o,1);

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
basic=basicsal(b,c,10,2009,o,1);

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





//10/2009

sp=n_sp;
if(o==1)
ea=gea(c,b,11,2009);
if(o==2)
ea=c1ea(c,b,11,2009);
if(o==3)
ea=ca2ea(c,b,11,2009);

basic=basicsal(b,c,11,2009,o,1);

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





//11/2009






sp=n_sp;
if(o==1)
ea=gea(c,b,12,2009);
if(o==2)
ea=c1ea(c,b,12,2009);
if(o==3)
ea=ca2ea(c,b,12,2009);

basic=basicsal(b,c,12,2009,o,1);

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





//12/2009
sp=n_sp;
if(o==1)
ea=gea(c,b,1,2010);
if(o==2)
ea=c1ea(c,b,1,2010);
if(o==3)
ea=ca2ea(c,b,1,2010);

basic=basicsal(b,c,1,2010,o,1);

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

	nb=basicsal(b,c,2,2009,o,1);
	a1=nb*0.96774;
	basic=round(a1);
		
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

	
	break;


case 2:
if(o==1)
ea=gea(c,b,2,2010);
if(o==2)
ea=c1ea(c,b,2,2010);
if(o==3)
ea=ca2ea(c,b,2,2010);

basic=basicsal(b,c,2,2010,o,1);

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

basic=basicsal(b,c,3,2010,o,1);

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





//3/2010
sp=n_sp;
if(o==1)
ea=gea(c,b,4,2010);
if(o==2)
ea=c1ea(c,b,4,2010);
if(o==3)
ea=ca2ea(c,b,4,2010);

basic=basicsal(b,c,4,2010,o,1);

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





t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;

//4/2010
sp=n_sp;

g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0;g_net=0;g_da=0,g_basic=0;
if(o==1)
ea=gea(c,b,5,2010);
if(o==2)
ea=c1ea(c,b,5,2010);
if(o==3)
ea=ca2ea(c,b,5,2010);

basic=basicsal(b,c,5,2010,o,1);

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




//PAYABLE
l_basic=t_basic; l_sp=t_sp; l_da=t_da; l_pf=t_pf;l_hra=t_hra;l_cca=t_cca;l_net=t_net;
l_gs=t_gs; l_ppa=t_ppa; l_ea=t_ea; l_ta=t_ta;
t_basic=0; t_sp=0; t_da=0; t_pf=0;t_hra=0;t_cca=0;t_net=0;
t_gs=0; t_ppa=0; t_ea=0; t_ta=0;
g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0;g_net=0;g_da=0,g_basic=0;
clrscr();
printf("\t\t\t\tPAYABLE");

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
	n_sp=sp;
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
nb1= basicsal1(b,c,1,1993,o);
nb2=basicsal1(b,c,1,1994,o) ;
qw=nb2-nb1;
if(qw==0)
{qw=800;}
if(qw==1300)
{qw=800;}
}
}
else if(b<1993 && b>=1976)
{
nb1= basicsal1(b,c,1,1993,o);
nb2=basicsal1(b,c,1,1994,o) ;
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
nb1= basicsal1(b,c,1,1993,o);
nb2=basicsal1(b,c,1,1994,o) ;
qw=nb2-nb1;
if(qw==0)
{qw=800;}
if(qw==1300)
{qw=800;}
}
}
else if(b<1993 && b>=1977)
{
nb1= basicsal1(b,c,1,1993,o);
nb2=basicsal1(b,c,1,1994,o) ;
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
nb1= basicsal1(b,c,1,1993,o);
nb2=basicsal1(b,c,1,1994,o) ;
qw=nb2-nb1;
if(qw==0)
{qw=800;}
if(qw==1300)
{qw=800;}
}
}
else if(b<1993 && b>=1979)
{
nb1= basicsal1(b,c,1,1993,o);
nb2=basicsal1(b,c,1,1994,o) ;

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
rea:
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
goto rea;
}


fprintf(p,"\n\n\n\t\t\t\t\t**PAYABLE**");
g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0;g_net=0;g_da=0,g_basic=0;

sp=n_sp;
if(o==1)
ea=gea1(c,b,12,2007);
if(o==2)
ea=c1ea1(c,b,12,2007);
if(o==3)
ea=ca2ea1(c,b,12,2007);
basic=basicsal1(b,c,12,2007,o);
if(basic>=14800)
{ta=275;}

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





//12/2007
sp=n_sp;
if(o==1)
ea=gea1(c,b,1,2008);
if(o==2)
ea=c1ea1(c,b,1,2008);
if(o==3)
ea=ca2ea1(c,b,1,2008);

basic=basicsal1(b,c,1,2008,o);
if(basic>=14800)
{ta=275;}

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





//1/2008
sp=n_sp;
if(o==1)
ea=gea1(c,b,2,2008);
if(o==2)
ea=c1ea1(c,b,2,2008);
if(o==3)
ea=ca2ea1(c,b,2,2008);

basic=basicsal1(b,c,2,2008,o);
if(basic>=14800)
{ta=275;}

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





//2/2008
sp=n_sp;
printf("\n\nIF YOU HAVE JOIN STRIKE ON FEB-08 PRESS 1 OTHERWISE 2\n");
scanf("%d",&w);
switch(w)
{
	case 1:
	if(o==1)
ea=gea1(c,b,3,2008);
if(o==2)
ea=c1ea1(c,b,3,2008);
if(o==3)
ea=ca2ea1(c,b,3,2008);

	nb=basicsal1(b,c,3,2008,o);
	a1=nb*0.96774;
	basic=round(a1);
		if(basic>=14800)
{ta=275;}
		
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
	
	
	
	break;

case 2:
if(o==1)
ea=gea1(c,b,3,2008);
if(o==2)
ea=c1ea1(c,b,3,2008);
if(o==3)
ea=ca2ea1(c,b,3,2008);

basic=basicsal1(b,c,3,2008,o);
if(basic>=14800)
{ta=275;}

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




break;

}

//3/2008
sp=n_sp;
if(o==1)
ea=gea1(c,b,4,2008);
if(o==2)
ea=c1ea1(c,b,4,2008);
if(o==3)
ea=ca2ea1(c,b,4,2008);


basic=basicsal1(b,c,4,2008,o);
if(basic>=14800)
{ta=275;}

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








t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;


//4/2008

sp=n_sp;


g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0,g_net=0,g_da=0,g_basic=0;
if(o==1)
ea=gea1(c,b,5,2008);
if(o==2)
ea=c1ea1(c,b,5,2008);
if(o==3)
ea=ca2ea1(c,b,5,2008);

basic=basicsal1(b,c,5,2008,o);
if(basic>=14800)
{ta=275;}

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





//5/2008

sp=n_sp;
if(o==1)
ea=gea1(c,b,6,2008);
if(o==2)
ea=c1ea1(c,b,6,2008);
if(o==3)
ea=ca2ea1(c,b,6,2008);

basic=basicsal1(b,c,6,2008,o);
if(basic>=14800)
{ta=275;}

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




//6/2008
sp=n_sp;
if(o==1)
ea=gea1(c,b,7,2008);
if(o==2)
ea=c1ea1(c,b,7,2008);
if(o==3)
ea=ca2ea1(c,b,7,2008);

basic=basicsal1(b,c,7,2008,o);
if(basic>=14800)
{ta=275;}

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





//7/2008
sp=n_sp;
if(o==1)
ea=gea1(c,b,8,2008);
if(o==2)
ea=c1ea1(c,b,8,2008);
if(o==3)
ea=ca2ea1(c,b,8,2008);
basic=basicsal1(b,c,8,2008,o);
if(basic>=14800)
{ta=275;}

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





//8/2008
sp=n_sp;
printf("\n\nIF YOU HAVE JOIN STRIKE ON AUG-08 PRESS 1 OTHERWISE 2\n");
scanf("%d",&u);
switch(u)
{
	case 1:
	if(o==1)
ea=gea1(c,b,9,2008);
if(o==2)
ea=c1ea1(c,b,9,2008);
if(o==3)
ea=ca2ea1(c,b,9,2008);

	nb=basicsal1(b,c,9,2008,o);
	a1=nb*0.96774;
	basic=round(a1);
	if(basic>=14800)
{ta=275;}	
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
	
	
	break;

case 2:
if(o==1)
ea=gea1(c,b,9,2008);
if(o==2)
ea=c1ea1(c,b,9,2008);
if(o==3)
ea=ca2ea1(c,b,9,2008);

basic=basicsal1(b,c,9,2008,o);
if(basic>=14800)
{ta=275;}

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




}
//9/2008

sp=n_sp;
if(o==1)
ea=gea1(c,b,10,2008);
if(o==2)
ea=c1ea1(c,b,10,2008);
if(o==3)
ea=ca2ea1(c,b,10,2008);
q=375;
basic=basicsal1(b,c,10,2008,o);
if(basic>=14800)
{ta=275;}

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





//10/2008
sp=n_sp;
printf("\n\nIF YOU HAVE JOIN STRIKE ON OCT-08 PRESS 1 OTHERWISE 2\n");
scanf("%d",&e);
switch(e)
{
	case 1:
	if(o==1)
ea=gea1(c,b,11,2008);
if(o==2)
ea=c1ea1(c,b,11,2008);
if(o==3)
ea=ca2ea1(c,b,11,2008);

	nb=basicsal1(b,c,11,2008,o);
	if(nb>=14800)
{ta=275;}
	a1=nb*0.93333;
	basic=round(a1);
	
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
	
	
	break;
case 2:
if(o==1)
ea=gea1(c,b,11,2008);
if(o==2)
ea=c1ea1(c,b,11,2008);
if(o==3)
ea=ca2ea1(c,b,11,2008);

basic=basicsal1(b,c,11,2008,o);
if(basic>=14800)
{ta=275;}

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




}
//11/2008

sp=n_sp;

if(o==1)
ea=gea1(c,b,12,2008);
if(o==2)
ea=c1ea1(c,b,12,2008);
if(o==3)
ea=ca2ea1(c,b,12,2008);

q=375;
if(basic>=14800)
{ta=275;}
basic=basicsal1(b,c,12,2008,o);

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





//12/2008

sp=n_sp;
if(o==1)
ea=gea1(c,b,1,2009);
if(o==2)
ea=c1ea1(c,b,1,2009);
if(o==3)
ea=ca2ea1(c,b,1,2009);

basic=basicsal1(b,c,1,2009,o);
if(basic>=14800)
{ta=275;}

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





//1/2009
sp=n_sp;
if(o==1)
ea=gea1(c,b,2,2009);
if(o==2)
ea=c1ea1(c,b,2,2009);
if(o==3)
ea=ca2ea1(c,b,2,2009);

basic=basicsal1(b,c,2,2009,o);
if(basic>=14800)
{ta=275;}

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





//2/2009

sp=n_sp;
if(o==1)
ea=gea1(c,b,3,2009);
if(o==2)
ea=c1ea1(c,b,3,2009);
if(o==3)
ea=ca2ea1(c,b,3,2009);
q=375;
basic=basicsal1(b,c,3,2009,o);
if(basic>=14800)
{ta=275;}

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






//3/2009

sp=n_sp;
if(o==1)
ea=gea1(c,b,4,2009);
if(o==2)
ea=c1ea1(c,b,4,2009);
if(o==3)
ea=ca2ea1(c,b,4,2009);

basic=basicsal1(b,c,4,2009,o);
if(basic>=14800)
{ta=275;}

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





t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;

//4/2009
sp=n_sp;

g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0,g_net=0,g_da=0,g_basic=0;
if(o==1)
ea=gea1(c,b,5,2009);
if(o==2)
ea=c1ea1(c,b,5,2009);
if(o==3)
ea=ca2ea1(c,b,5,2009);

basic=basicsal1(b,c,5,2009,o);
if(basic>=14800)
{ta=275;}

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





//5/2009
sp=n_sp;
if(o==1)
ea=gea1(c,b,6,2009);
if(o==2)
ea=c1ea1(c,b,6,2009);
if(o==3)
ea=ca2ea1(c,b,6,2009);

basic=basicsal1(b,c,6,2009,o);
if(basic>=14800)
{ta=275;}

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





//6/2009

sp=n_sp;
if(o==1)
ea=gea1(c,b,7,2009);
if(o==2)
ea=c1ea1(c,b,7,2009);
if(o==3)
ea=ca2ea1(c,b,7,2009);

basic=basicsal1(b,c,7,2009,o);

if(basic>=14800)
{ta=275;}
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





//7/2009

sp=n_sp;
if(o==1)
ea=gea1(c,b,8,2009);
if(o==2)
ea=c1ea1(c,b,8,2009);
if(o==3)
ea=ca2ea1(c,b,8,2009);

basic=basicsal1(b,c,8,2009,o);
if(basic>=14800)
{ta=275;}

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





//8/2009
sp=n_sp;
printf("\n\nIF YOU HAVE JOIN STRIKE ON AUG-09 PRESS 1 OTHERWISE 2\n");
scanf("%d",&r);
switch(r)
{
	case 1:
	if(o==1)
ea=gea1(c,b,9,2009);
if(o==2)
ea=c1ea1(c,b,9,2009);
if(o==3)
ea=ca2ea1(c,b,9,2009);

	nb=basicsal1(b,c,9,2009,o);
	if(nb>=14800)
{ta=275;}
	a1=nb*0.93548;
	basic=round(a1);

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
	
	
	break;
case 2:
if(o==1)
ea=gea1(c,b,9,2009);
if(o==2)
ea=c1ea1(c,b,9,2009);
if(o==3)
ea=ca2ea1(c,b,9,2009);

basic=basicsal1(b,c,9,2009,o);
if(basic>=14800)
{ta=275;}

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




}
//9/2009
sp=n_sp;
if(o==1)
ea=gea1(c,b,10,2009);
if(o==2)
ea=c1ea1(c,b,10,2009);
if(o==3)
ea=ca2ea1(c,b,10,2009);

q=375;
basic=basicsal1(b,c,10,2009,o);
if(basic>=14800)
{ta=275;}

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





//10/2009

sp=n_sp;
if(o==1)
ea=gea1(c,b,11,2009);
if(o==2)
ea=c1ea1(c,b,11,2009);
if(o==3)
ea=ca2ea1(c,b,11,2009);

basic=basicsal1(b,c,11,2009,o);
if(basic>=14800)
{ta=275;}

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





//11/2009


sp=n_sp;
if(o==1)
ea=gea1(c,b,12,2009);
if(o==2)
ea=c1ea1(c,b,12,2009);
if(o==3)
ea=ca2ea1(c,b,12,2009);

basic=basicsal1(b,c,12,2009,o);
if(basic>=14800)
{ta=275;}

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

sg=
basic+ea+sp+da+hra+ppa+ta;


m=(basic+ea+sp+qw)*0.1;
pf=round(m);
net=sg-pf;
g_basic+=basic; g_sp+=sp; g_da+=da; g_pf+=pf;g_hra+=hra;g_net+=net;
g_gs+=sg; g_ppa+=ppa; g_ea+=ea; g_ta+=ta;










//12/2009
sp=n_sp;
if(o==1)
ea=gea1(c,b,1,2010);
if(o==2)
ea=c1ea1(c,b,1,2010);
if(o==3)
ea=ca2ea1(c,b,1,2010);

basic=basicsal1(b,c,1,2010,o);
if(basic>=14800)
{ta=275;}

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





//1/2010


sp=n_sp;
printf("\n\nIF YOU HAVE JOIN STRIKE ON JAN-10 PRESS 1 OTHERWISE 2\n");
scanf("%d",&y);
switch(y)
{
	case 1:
	if(o==1)
ea=gea1(c,b,2,2009);
if(o==2)
ea=c1ea1(c,b,2,2009);
if(o==3)
ea=ca2ea1(c,b,2,2009);

	nb=basicsal1(b,c,2,2009,o);
	if(nb>=14800)
{ta=275;}
	a1=nb*0.96774;
	basic=round(a1);

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



	
	break;


case 2:

if(o==1)
ea=gea1(c,b,2,2010);
if(o==2)
ea=c1ea1(c,b,2,2010);
if(o==3)
ea=ca2ea1(c,b,2,2010);

basic=basicsal1(b,c,2,2010,o);
if(basic>=14800)
{ta=275;}

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




}
//2/2010

sp=n_sp;
if(o==1)
ea=gea1(c,b,3,2010);
if(o==2)
ea=c1ea1(c,b,3,2010);
if(o==3)
ea=ca2ea1(c,b,3,2010);

basic=basicsal1(b,c,3,2010,o);
if(basic>=14800)
{ta=275;}

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





//3/2010
sp=n_sp;
if(o==1)
ea=gea1(c,b,4,2010);
if(o==2)
ea=c1ea1(c,b,4,2010);
if(o==3)
ea=ca2ea1(c,b,4,2010);

basic=basicsal1(b,c,4,2010,o);
if(basic>=14800)
{ta=275;}

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





t_basic+=g_basic; t_sp+=g_sp; t_da+=g_da; t_pf+=g_pf;t_hra+=g_hra;t_cca+=g_cca;t_net+=g_net;
t_gs+=g_gs; t_ppa+=g_ppa; t_ea+=g_ea; t_ta+=g_ta;

//4/2010
sp=n_sp;


g_ppa=0,g_cca=0,g_ea=0,g_ta=0,g_sp=0,g_hra=0,g_pf=0;
g_gs=0;g_net=0;g_da=0,g_basic=0;
if(o==1)
ea=gea1(c,b,5,2010);
if(o==2)
ea=c1ea1(c,b,5,2010);
if(o==3)
ea=ca2ea1(c,b,5,2010);

basic=basicsal1(b,c,5,2010,o);
if(basic>=14800)
{ta=275;}

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
fprintf(p,"\n\n\t\t\t\t\t**DIFFERENCE**");
fprintf(p,"\n\n YEAR\tBASIC\tSP   \tDA  \tHRA \tCCA \tPPA \tEA \tTA\tGS  \tPF \tNET");
t_cca=0;
fprintf(p,"\n----------------------------------------------------------------------------------------------");
fprintf(p,"\nPAYABLE");
fprintf(p,"\t%ld\t%ld\t%ld\t%ld",t_basic,t_sp,t_da,t_hra);
fprintf(p,"\t%ld\t%ld\t%ld\t%ld",t_cca,t_ppa,t_ea,t_ta);
fprintf(p,"\t%ld",t_gs);
fprintf(p,"\t%ld\t%ld",t_pf,t_net);
fprintf(p,"\n PAID");
fprintf(p,"\t%ld\t%ld\t%ld\t%ld",l_basic,l_sp,l_da,l_hra);
fprintf(p,"\t%ld\t%ld\t%ld\t%ld",l_cca,l_ppa,l_ea,l_ta);
fprintf(p,"\t%ld",l_gs);
fprintf(p,"\t%ld\t%ld",l_pf,l_net);
fprintf(p,"\n----------------------------------------------------------------------------------------------");
fprintf(p,"\nDIFF");
fprintf(p,"\t%ld\t%ld\t%ld\t%ld",t_basic-l_basic,t_sp-l_sp,t_da-l_da,t_hra-l_hra);
fprintf(p,"\t%ld\t%ld\t%ld\t%ld",t_cca-l_cca,t_ppa-l_ppa,t_ea-l_ea,t_ta-l_ta);
fprintf(p,"\t%ld",t_gs-l_gs);
fprintf(p,"\t%ld\t%ld",t_pf-l_pf,t_net-l_net);
fprintf(p,"\n\n\t\t\t\t\t\tMADE BY\n\t\t\t\t\t\tHARSH RAJNIKANT KOTHARI");
getch();
}


int basicsal1(int b,int a,int p,int s,int o)
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

int gea1(int a,int b,int n,int m)
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

int c1ea1(int a,int b,int n,int m)
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

int ca2ea1(int a,int b,int n,int m)
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

int round(float g)
{
int s,f;
s=(int)(g) ;
if((g-s)>=0.50)
s=s+1;

return (s) ;
}

int basicsal(int b,int a,int p,int s,int o,int x )
{

if (x==1)
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
 else
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
return (18300);
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
	return (18300);
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
return (18300);
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





