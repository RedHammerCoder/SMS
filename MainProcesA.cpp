
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
	//TODO 1.��ʼ����Ļ 1.5 ����ʷ�ļ���ȡ���� 2.����whileѭ�� 3.��ȡ���� 4�����û�д���5.�������� 6.����ļ����ļ�д�����


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


	

	//3.����whileѭ��
	while (1)
	{
		//��ʼ����Ļ��Ϣ����ʾ
		cout << "��������Ҫִ�еĲ�����ִ��/n";
		cout << "����0���ѧ��������1ɾ��ѧ�������ؼ���Ϊѧ�ţ�����2�ı�ѧ����Ϣ������3\n"
			<< "չʾ����ѧ����Ϣ������5����ѧ����Ϣ������6���չؼ�����������7�˳�лл" << endl;
		

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
				printf("%s\n", temp.mamber.xuehao);//Ϊɶѧ�ź����ж�������
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