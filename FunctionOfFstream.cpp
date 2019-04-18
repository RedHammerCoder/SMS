#ifndef fstreamFunction
#define fstreamFunction
#include <fstream>
#include "savefile.h"
#include"newstudents.h"
#include "savefile.h"
using namespace std;
//using stud::students;
 extern fstream out;
 //void closeFile(fstream);

 

 

 void getfile(linken& studen, fstream& file)
 {
	 
	 int size = studen.mamber.GETsize();
	
	 while (!file.eof()){
		 linken* link = new linken;
	 file.read((char*)(&(link->mamber)), size);
	 Getnext(*link, &studen);
	 


 }
	 return;
	
 }
bool GetStoredMessage(linken& head, int Size)
{
	//auto* temp = head;
	int size = sizeof(  students);
	fstream open("savefiletodisk.bin", ios::out|ios::in | ios::binary | ios::beg);
	if (open.is_open())
	{
		getfile(head, open);
	}
	open.close();
	return 0;
}
//bool inputMessage(fstream* fileptr, void* linken);

bool Savefile( linken* head)
{
	auto* ptr = head;
	fstream open("savefiletodisk.bin",  ios::binary |ios::in|ios::out| ios::trunc|ios::beg);
	open.seekg(0, ios::beg);
	while (ptr->next != nullptr)
	{


		cout << "in the while" << endl;
		open.write((char*)(&(ptr->mamber)), ptr->mamber.GetLengthOfStudents());
		//open._Seekbeg;
		cout << ptr->mamber.name;
		ptr = ptr->next;

	}
	

	return 0;
}











#endif // !fstreamFunction

