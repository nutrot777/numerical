

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>
using std::setw;
using namespace std;

struct Students
{
	string first_name;
	string last_name;
	string stud_age;
	string ID;
	string classes;
	string courses;
	string gpa;
}StudentsData;

struct staff
{
	string fname;
	string lname;
	string qualification;
	string expe; //Experience of the person
	string pay;
	string subj;
	string addres; //Home Address
	string Pho_No; //Phone Number
	
}Staff[20];

struct course
{
	string bio;//biology
	string integrat_sci; //integrated science
	string freh; //French
	string phys; //Physics
	string chem; //chemistry
	string emat;//Elective Mathematics
	string music;
}CourseData;

void deleting(){
	string line, name;
	cout<<"Please Enter the name of record you want to delete: ";
	cin>>name;
	ifstream myfile;
	ofstream temp;
	myfile.open("student.txt");
	temp.open("staff.txt");
	while(getline(myfile, line)){
		if(line !=name)
		temp<<line<<endl;
	}
	cout<<"The record with the name "<<name<<" has been deleted"<<endl;
	myfile.close();
	temp.close();
	remove("student.txt");
	rename("staff.txt", "student.txt");
}


	



        int main()
        {
        	int i=0,j;
        	char select;
        	string find;
        	string browse;
        	
        	 while(1)
        	 {
        	 	system("cls");
        	 	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\t";
        	 	cout<<"\n\n\t\tSCHOOL MANAGEMENT SYSTEM OF ACCRA BASIC\n\n\n";
        	 	cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
        	 	cout<<"\n\n\t\tWELCOME\n\n";
        	 	cout<<"Make A Selection:"<<endl;
        	 	cout<<"1.Students Details"<<endl;
        	 	cout<<"2.Staff(Teachers) Details"<<endl;
        	 	cout<<"3.Leave System"<<endl;
        	 	cin>>select;
        	 	
        	system("cls");
        	
        	     switch(select){
        	     	case '1':{
        	     		system("cls");
        	     		cout<<"\t\tStudents Details Section\n\n\n";
        	     		cout<<"Please Make a Selection: "<<endl;
        	     		cout<<"1.Create new Student\n";
        	     		cout<<"2.Find and display student\n";
        	     		cout<<"3.Delete a Student\n";
        	     		cout<<"4.Edit a Student (Make Changes to a Student)\n";
        	     		cout<<"5.Show Student Academic Grade\n";
        	     		cout<<"6.Back to Previous\n";
        	     		cin>>select;
        	     		
        	    switch (select){
        	    	case'1':{ ofstream f1("student.txt",ios::app);
        	    	 f1<<"First Name"<<setw(17)<<"Last Name"<<setw(17)<<"Age"<<setw(15)<<"ID"<<setw(20)<<"Class"<<setw(20)<<"Course Offering"<<setw(17)<<"GPA"<<endl;
                    for(i=0; select!='n';i++){
                    	if((select=='y')||(select=='Y')||(select=='1')){
                    		cout<<"Enter First Name: ";
                    		cin>>StudentsData.first_name;
                    		cout<<"Enter Last Name: ";
                    		cin>>StudentsData.last_name;
                    		cout<<"Enter Age: ";
                    		cin>>StudentsData.stud_age;
                    		cout<<"Enter ID: ";
                    		cin>>StudentsData.ID;
                    		cout<<"Enter class: ";
                    		cin>>StudentsData.classes;
                    		cout<<"Enter Course Offering: ";
                    		cin>>StudentsData.courses;
                    		cout<<"Enter Your Over all GPA: ";
                    		cin>>StudentsData.gpa;
                    		
                   
                f1<<StudentsData.first_name<<setw(17)<<StudentsData.last_name<<setw(20)<<StudentsData.stud_age<<setw(20)<<StudentsData.ID<<setw(20)
				<<StudentsData.classes<<setw(20)<<StudentsData.courses<<setw(15)
                   <<StudentsData.gpa<<endl;
                 cout<<"Do you want to Enter Details? : ";
                 cout<<"Press Y for Continue and N to End: ";
                 cin>>select;
						}
					}
					f1.close();
					
					}
					continue;
					
					    case '2':
					    	{
					    		ifstream f2("student.txt");
					    		cout<<"Enter First Name to be displayed: ";
					    		cin>>find;
					    		cout<<endl;
					    	int notFound = 0;
					    	for(j=0; (j<i)||(!f2.eof());j++){
					    		getline(f2,StudentsData.first_name);
					    		
					    		if(StudentsData.first_name==find){
					    			notFound = 1;
					    			cout<<"First Name: "<<StudentsData.first_name<<endl;
					    		getline(f2,StudentsData.last_name);
					    			cout<<"Last Name:   "<<StudentsData.last_name<<endl;
					    		getline(f2,StudentsData.stud_age);
					    		    cout<<"Student Age: "<<StudentsData.stud_age<<endl;
					    		getline(f2,StudentsData.ID);
					    		cout<<"ID :"<<StudentsData.ID<<endl;
					    		
					    		getline(f2,StudentsData.classes);
					    		cout<<"Class: "<<StudentsData.classes<<endl;
					    		 
					    		 getline(f2, StudentsData.courses);
					    		 cout<<"Course: "<<StudentsData.courses<<endl;
					    		 getline(f2, StudentsData.gpa);
					    		 cout<<"Total GPA: "<<StudentsData.gpa<<endl;
								}
							}
							if(notFound==0){
								cout<<"No Record Found"<<endl;
							}
							f2.close();
							cout<<"Press any key once to proceed";
							getch();
							}
							
							continue;
							
							case '3': {
								deleting();
								cout<<"Record has been updated! ";
							cout<<"Press any key once to proceed";
							getch();
							
							}
							continue;
							
							
	
							
					case '6': {
						break;
						
					}
   				}
   			break;
				 }
			continue;
			 
			 
			 case '2':
			 	{
			 	while(1){
			 		system("cls");
					 cout<<"\t\t\tTEACHERS DETAILS \n\n\n ";
					 cout<<"Make A Selection: "<<endl;
					 cout<<"\n\n\nStaff Should Please Note, NO Modify Options are Available to their "<<endl;
					 cout<<"\n\n\nDisposal. The School Management, assumes you should be matured to be careful in your checkINs."<<endl;
					 cout<<"1.Create new teacher\n";
					 cout<<"2.Find and display teachers\n";
					 cout<<"3.Jump to main\n";
					 cin>>select;
					 
					 
				switch(select){
					case '1':{
						ofstream s1("teacher.txt", ios::app);
						
						for(i=0;select!='n'&& select!='N'; i++){
							if((select=='y')||(select=='Y')||(select=='1')){
								cout<<"Enter First Name: ";
								cin>>Staff[i].fname;
								cout<<"Enter Last Name: ";
								cin>>Staff[i].lname;
								cout<<"Enter Qualifications ";
								cin>>Staff[i].qualification;
								cout<<"Enter Experience(year): ";
								cin>>Staff[i].expe;
								cout<<"Enter Subject: ";
								cin>>Staff[i].subj;
								cout<<"Enter Home Address: ";
								cin>>Staff[i].addres;
								cout<<"Enter Phone Number: ";
								cin>>Staff[i].Pho_No;
								cout<<"Enter Pay: ";
								cin>>Staff[i].pay;
				
			s1<<"First Name"<<setw(17)<<"Last Name"<<setw(17)<<"Qualifications"<<setw(15)<<"Experience"<<setw(17)<<"Subject"<<setw(15)<<"Home Address"<<setw(17)<<"Phone Number"<<setw(17)
			   <<"Pay"<<endl;		
		s1<<Staff[i].fname<<setw(11)<<Staff[i].lname<<setw(17)<<Staff[i].qualification<<setw(15)<<Staff[i].expe<<setw(17)<<Staff[i].subj<<setw(15)<<Staff[i].addres<<setw(17)
		   <<Staff[i].Pho_No<<setw(17)<<Staff[i].pay<<endl;
		   
		   cout<<"Do you want to enter any details: ";
		   cin>>select;
							}
						}
						system("cls");
						
					s1.close();
					}
					continue;
					
				case '2':{
					ifstream s2("staff.txt");
					cout<<"Enter name to be displayed: ";
					cin>>find;
					cout<<endl;
					
				int notFound =0;
				for(j=0;((j<i)||(!s2.eof())); j++){
					getline(s2,Staff[j].fname);
					
					if(Staff[i].fname==find){
						notFound=1;
						cout<<"First Name: "<<Staff[j].fname<<endl;
						getline(s2,Staff[j].lname);
						cout<<"Last Name: "<<Staff[j].lname<<endl;
							getline(s2,Staff[j].qualification);
						cout<<"Qualification: "<<Staff[j].qualification<<endl;
							getline(s2,Staff[j].expe);
						cout<<"Experience(year): "<<Staff[j].expe<<endl;
							getline(s2,Staff[j].subj);
						cout<<"Subject: "<<Staff[j].subj<<endl;
							getline(s2,Staff[j].addres);
						cout<<"Home Address: "<<Staff[j].addres<<endl;
							getline(s2,Staff[j].Pho_No);
						cout<<"Phone Number: "<<Staff[j].Pho_No<<endl;
							getline(s2,Staff[j].pay);
						cout<<"Payment(in GHS) "<<Staff[j].pay<<endl;
					}
				}
				s2.close();
				if(notFound==0){
					cout<<"No Record Found"<<endl;
				}
				cout<<"Press any key once to proceed";
				getch();
				}
				continue;
				
				case '3':
					{
						break;
					}
			}
				}
			}
				
				break;
				 
				 continue;
				
				 case '3':
				 	{
				 exit(0);
				}	 }
			}
		}


SMP.cpp
Displaying SMP.cpp.
