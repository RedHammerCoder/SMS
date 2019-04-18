
#pragma warning( disable : 4996)


#include "define_the_head.h"
#include "newstudents.h"
#include "savefile.h"
#include<iostream>
#include <string>
#include<ctime>
using namespace std;
extern void getfile(linken& studen, fstream& file);
extern bool GetStoredMessage(linken& head, int size);
extern bool Savefile(linken* head);
extern void inital(linken& ptr, string NAME, string XUEHAO, tm BORNTIMR, bool SEX, int CP, int MATH, int ENGLISH);
extern AllScore clculate(linken);
extern void Sort(linken*, linken*);

enum input {

			INPUT ,
			DELETE ,
			CHANGE,
			EXPRESSALL,
			CLACULATE,
			SEARCH,
			SORT,
			EXIT
};

linken head,prehead;

int main()
{
	//TODO 1.初始化屏幕 1.5 从历史文件读取数据 2.建立while循环 3.读取数据 4检查有没有错误5.进行运算 6.清空文件后将文件写入电脑


prehead.next = &head;




	
 
	//linken *const suo = &head;
	int num = 0;
	if (GetStoredMessage(head, 0))
		return 1;
	auto temp = head;
	while (temp.next != NULL)
	{
		//cout << temp.mamber.name << endl;
		printf("%s\n", temp.mamber.name);
		cout << temp.mamber.xuehao << endl;
		temp = *(temp.next);

	}
	if (temp.next == NULL)
		cout << temp.mamber.name << "this is end of file\n";


	//text
	if (1)
	{
		if (!head.next)
		{
			cout << "\n it`s empty";
		}

		linken temp = head;
		





		while (0)//temp.next != NULL)
		{
			//cout << temp.mamber.name << endl;
			printf("%s", temp.mamber.name);
			temp = *(temp.next);

		}
		if (temp.next == NULL)
			cout << "in the end/n";
	}


	

	//3.建立while循环
	while (1)
	{
		//初始化屏幕信息，显示
		cout << "请输入想要执行的操作并执行/n";
		cout << "输入0添加学生，输入1删除学生（）关键词为学号，输入2改变学生信息，输入3\n"
			<< "展示所有学生信息，输入5搜索学生信息，输入6按照关键字排序，输入7退出谢谢" << endl;
		

		cin >> num;
		switch (num)
		{
		case INPUT:
		{

		string nameing;
		nameing.resize(17);
		cin >> nameing;

		string xuehao;
		nameing.resize(11);
		cin >> xuehao;
		//scanf("%s", &xuehao[0]);
		int tempint0 = 0;
		cout << "input the int";
		cin >> tempint0;

		int tempint1 = 0;
		cout << "input the int";
		cin >> tempint1;

		int tempint2 = 0;
		cout << "input the int";
		cin >> tempint2;
		tm time{ 0 };
		inital(head, nameing, xuehao, time, 1, tempint0, tempint1, tempint2);
		




		}
			break;

		case DELETE:
			break;
		case CHANGE:
		{
			
				
		}


			break;
		case EXPRESSALL:
		{
			//ddwwsdadadaddwwsslinken tempofhead = *suo;
			cout << "head is " << &head << endl;
			if(!head.next)
			{
				cout << "it`s empty";
			}

			linken temp = head;
			/*do
			{
				cout << temp.mamber.name << endl;
				temp = *(temp.next);

			} while (temp.next );


			*/


			while (temp.next != NULL)
			{
				//cout << temp.mamber.name << endl;
				printf("%s\n", temp.mamber.name);
				printf("%s\n", temp.mamber.xuehao);//为啥学号后面有东西，，
				temp= *(temp.next);
				
			}
			if (temp.next == NULL)
				cout << temp.mamber.name<<"this is end of file";
			//text
			
	/*
			while (tempofhead.last != nullptr)
			{
				cout << tempofhead.next<< endl;

				cout << tempofhead.mamber.name << endl;
				tempofhead = *(tempofhead.last);
				cout << tempofhead.next << endl;

			}
			if (tempofhead.last == nullptr)
				cout << "in the beg/n";

		*/		



			






		}
			break;
		case CLACULATE:
		{//function of calculate the average
			AllScore score = clculate(head);
			cout << "----------------average-----score-------\n"
				<< "c=" << score.Cp << "  m=" << score.math << "  e=" << score.English << endl;
		}
			break;
		case SEARCH:
		{
			cout << "witch one you want?name1 xuehao2 sex3? ";






		}
			break;
		case SORT:
		{
			cout << &head << endl;
			if (head.next == NULL)
			{
				cout << " just one students";
				break;
			}
			Sort((head.next) , NULL);
			auto temp = head, * ptemp = &temp;

			while (ptemp != NULL)
			{
				cout << temp.mamber.CProgram << " " << endl;
				ptemp=ptemp->next;
			}
		}
			break;
		case EXIT:
			Savefile(&head);
			return 0;

			




		}
		
	}
	
	
}