#include <iostream>   
#include"savefile.h"
#include"newstudents.h"


AllScore clculate(linken head)
{
	double num = 0;
	auto temp = head;
	double sumC = 0;
	double sumM = 0;
	double sumE = 0;
	while (temp.next != NULL)
	{
		num++;
		sumC += temp.mamber.CProgram;
		sumM += temp.mamber.math;
		sumE += temp.mamber.English;


		temp = *(temp.next);
	}
	if (temp.next == NULL)
	{
		num++;
		sumC += temp.mamber.CProgram;
		sumM += temp.mamber.math;
		sumE += temp.mamber.English;
		
	}
	AllScore score(sumC/num, sumM/num, sumE/num);
	return score;




}
//前插
void qiancha(linken* d, linken* sourse)
{
	/*
	1.d前面可能为0，sourse后面可能为0

	
	
	
	*/


	linken *link = new linken(*sourse);
	DeleteLinken(*sourse);
	if (d->last != NULL)
	{
		d->last->next = link;
		link->last = d->last;
		link->next = d;
		d->last = link;
			
		
	}
	else
	{
		d->last = link;
		link->next = d;
		link->last = NULL;
	}

}




//下层函数，，调
//先预定义为cp成绩
//利用偏移选择结构中的特别元素就是汇编的优势，，Or2

void Sort(linken *head,linken *end)//从head开始但是不可以触碰到end；保持连贯性
{
	//test
	if (head == end)
		cout << "error"<<endl;

	if (head->next == end)
	{
		return;
	}

	//test


	//linken* ptr1 = nullptr, * ptr2 = nullptr;
	 
	/*if (head->next == NULL) {
		cout << "only head"; return;
	}*/
	
	linken* STD = head;
	int key = STD->mamber.CProgram;
	linken * ptr = head->next;
	/*if (ptr == NULL)
	{
		cout << "只有单一元素" << endl;
	
		return;
	}*/


	
	while (ptr->next!= end)
	{
		auto temp = *ptr;
		if (ptr->next == NULL)
		{
			cout << "here 100" << endl;
			return;
		}


		ptr = ptr->next;
		if (temp.mamber.CProgram > key)
		{
		
			
			qiancha(STD, &temp);
			

		}
		
		
		
	}
	

	Sort(head, STD);
	Sort(STD->next, end);


return;

}

void SORt(linken* head, linken* end)
{
	linken temp = *head;
	int key = temp.mamber.CProgram;
	while (&temp != end)
	{
		linken ttemp = temp;
		temp = *(temp.next);
		if (ttemp.mamber.CProgram > key)
			;

		

	}





}



