#include"savefile.h"
#include<iostream>
#include"newstudents.h"
typedef  linken* plinken;
using std::cout;

linken:: linken(  students& student1)
{
	next = NULL;

	last = NULL;

	mamber=student1;
#if DEBUG
	cout << "in the init";
#endif // DEBUG

}
/*bool linken::operator=(linken sec)
{
	this->last = sec.last;
	this->mamber = sec.mamber;
	this->next = sec.next;
	return 1;


}*/






linken::linken(linken& link) :
	last(link.last),
	next(link.next),
	mamber(link.mamber)
{
	cout << mamber.name<<endl;
	cout << "������ʼ�Ѿ����" << std::endl;

}
extern linken head;
void Getnext(linken &Linken,linken*PTR)
{
	/*if (head.next == NULL)
	{
		head = Linken;
		return;
	}���Էŵ�ǰ��*/

	//ptr����head ����Ҫ��֤ptr��������while�ı仯���仯
	
	
	
	/*if (PTR ->next== NULL)
	{
		PTR->next =& Linken;
		Linken.last = PTR;
		//Linken.next = NULL;
		return;
	}*/


	//linken* linkptr = PTR, *Temp = NULL;
	plinken linkptr = PTR;
	//�õ�������ʵ�ʼ�ֵ��ָ��//
	while (linkptr->next != NULL)
	{
		//Temp = linkptr;
		linkptr = linkptr->next;
	}
	linkptr->next = &Linken;
	Linken.last = linkptr;
	Linken.next = NULL;
}

void inital( linken &hard, string NAME, string XUEHAO, tm BORNTIMR, bool SEX, int CP, int MATH, int ENGLISH)
{
	if (hard.next == NULL)
	{
		cout << "in save file1" << endl;
		students temp1(NAME, XUEHAO, BORNTIMR, SEX, CP, MATH, ENGLISH);
		linken *plink = new linken(temp1);
		hard.next = plink;
		plink->last = &hard;
	}

	//1.ȷ����ָ������һ��
	auto *ptr =&hard;
	while (ptr->next != NULL)
	{
		cout << "savefile.cpp. is run2" << endl;
		ptr = (ptr->next);
	}
	if (ptr->next == NULL)
	{
		printf("ptr,next==nullptr");
		students temp(NAME, XUEHAO, BORNTIMR, SEX, CP, MATH, ENGLISH);
		linken* linkptr = new linken(temp);
		cout << "we new a linken &linken,next==null" << linkptr->next<<endl << linkptr->last << endl;
		ptr->next = linkptr;
		linkptr->last = ptr;
	
	}
	
}

AllScore& AllScore:: operator+(AllScore score)
{
	English = score.English;
	math = score.math;
	Cp = score.Cp;
	return *this;
}
AllScore::AllScore(double c, double m, double e) 
	:
	Cp ( c),
	math ( m),
	English ( e)
{

}

bool swap(linken& left, linken& right)
{
	if (left.next == NULL)
	{
		if (left.last == NULL)cout << "ֻ��һ��Ԫ��";
		else
		{
			left.last->last = &right;
		}
	}
	else {
		left.next->last = &right;
	}
	if (right.next == NULL)
	{
		right.last->next = &left;
	}
	else
	{
		right.next->last = &left;
	}









	if (left.last != NULL && left.last != NULL)
	{

		left.next->last = &right;
		left.last->next = &right;
	}

	//if (right.last != NULL && right.last != NULL)
	//{

//		right.next->last = &left;
	
	//	right.last->next = &left;
	//}
	

	
	

	auto tempnext = left.next;
	auto templast = left.last;

	left.last = right.last;
	left.next = right.next;
	right.next = tempnext;
	right.last = templast;

	return 1;
}

void DeleteLinken(linken& dot)
{
	if (dot.last == NULL)// no last
	{



		if (dot.next == NULL)
			;//1
		else//have next
	{
		dot.next->last = NULL;//2
	}

	}
	else//have last
	{
		if (dot.next == NULL)
		{
			dot.last->next =NULL;//3
			
		}
		else
	{
			dot.last->next = dot.next;
		//4
			dot.next->last = dot.last;
	}

	}
	


		delete & dot;
}