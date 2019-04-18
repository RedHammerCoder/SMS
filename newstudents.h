#pragma once


#ifndef newstudent
#define newstudent
#include <iostream>
#include <string>
#include <ctime>


using namespace std;
class studnets;




//namespace stud {


	
	class students
	{
	public:
		char name[16];
		tm borntime ; //Äê¼Í
		char xuehao[9];
		bool sex=0;
		int age=0;
		uint16_t CProgram ;
		uint16_t math ;
		uint16_t English ;

	
		friend class students;
	
		//friend bool swap(students& left, students& right);
		
		static int GETsize();
		bool SetName(string name);
		bool SetAge(tm);
		bool Setxuehao(string Xuehao);
		bool SetCP(int);
		bool SetMath(int);
		bool SetEnglish(int);
		students(string, string, tm, bool, int, int, int);
		~students() = default;
		students();

		students(students& Student);
		/*	:borntime(Student.borntime),
			sex(Student.sex),
			age(Student.age),
			CProgram(Student.CProgram),
			English(Student.English),
			math(Student.math),
			//borntime(Student.borntime)
			{
			strcpy_s(name, 16 * sizeof(char), (Student.name));
			strcpy_s(xuehao, 9 * sizeof(char), (Student.xuehao));

			


		}*/
			
			//undefine
		static int GetLengthOfStudents()
		{
			return sizeof(students);
			
		}


	};

	//void getstudent(linken& link, const students& student);
	









//}



#endif // !newstudent
