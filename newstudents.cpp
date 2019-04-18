#include"newstudents.h"
#include <Windows.h>
#include <sstream>
#include <ctime>
#include <string>


	using namespace std;
//namespace stud
//{

	students::students()
		:name{ 0 },
		xuehao{0}

	{
		//name[15]={ 0 };
		//xuehao[8] = 2;
		sex = 0;
		age = 0;
		CProgram = 0;
		math = 0;
		English = 0;


	}



	int students::GETsize()
	{
		return sizeof(students);
	}

	
	bool students:: SetName(std::string name)
	{
		auto length = name.length();
		if (length > 17)
			return 0;
		int ptr = 0;
		for (char sName : name)
		{
			if (sName == '/0')break;
			this->name [ptr] = sName;
			ptr++;

			

		}
		return 1;
	}

	students:: students(students& Student)
		://borntime(Student.borntime),
		//name(*(Student.name )),

		sex(Student.sex),
		age(Student.age),
		CProgram(Student.CProgram),
		English(Student.English),
		math(Student.math)
		//borntime(Student.borntime)
	{
		cout << "insert one" << endl;
	strcpy_s(name, 15 , (Student.name));
	strcpy_s(xuehao, 8, Student.xuehao);
	cout << "insert two" << endl;
	




	}




	bool students:: SetAge(std::tm Time) {
		time_t nowon = time(0);
		borntime = Time;
		tm now{0};
		
		localtime_s(&now, &nowon);
		
		age = now.tm_year - borntime.tm_year;
		return 1;


}

	bool  students::Setxuehao(std::string Xuehao) {
		
		{
			auto length = Xuehao.length();
			if (length > 9)
				return 0;
			int ptr = 0;
			for (char sName : Xuehao)
			{
				if (sName == '/0')break;
				this->xuehao[ptr] = sName;
				ptr++;



			}
			return 1;
		}

}

	bool students:: SetCP(int score)
	{
		CProgram = static_cast<uint16_t>(score);
		return 1;

}

	bool students:: SetMath(int score)
	{
		math = score;
		return 1;
}

	bool students::SetEnglish(int score) {
		English = score;
		return 1;
}

	students:: students(std::string name, std::string Xuehao, tm Time, bool SEX, int cp, int math, int english)
	{
		
		/*cout << "please input name";
		cin >> name;
		cout << "Ñ§ºÅ";
		cin >> xuehao;
		*/


		SetName(name);
		Setxuehao(Xuehao);
		SetAge(Time);
		sex = SEX;
		CProgram = cp;
		SetMath(math);
		SetEnglish(english);
		




}

	

//

