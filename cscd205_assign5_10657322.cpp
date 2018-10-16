#include<iostream>
#include<fstream>
using namespace std;
struct student {long sID,string sName,int sAge,char sGender,int sScore,char sGrade;}; 
class studentwriter{
                     public:
                        void write(student[])
                                  { 
  
                                    ofstream w;
                                         w.open("studentrecordfile.txt");
                     for(int m=0;m<5;m++)
                         {w<<s[m].sID<<"/t"<<s[m].sName<<"/t"<<s[m].sAge"/t"<<s[m].sGender"/t"<<s[m].sScore"/t"<<s[m].sGrade<<endl;}
                                         w.close();
                                    cout<<"Writing to file was successful"<<endl;  
                                    };
        int main(){
             student stud[5];
             for(int n=0;n<5;n++){
               cout<<"Enter ID:"<< endl;
                cin>>student[n].sID;
               cour<<"Enter Name:"<< endl;
                cin>>student[n].sname;
               cout<<"Enter Age:"<< endl;
                cin>>student[n].sAge;
               cour<<"Enter Gender:"<< endl;
                cin>>student[n].sGender;
               cout<<"Enter score:"<<endl;
                cin>>student[n].sScore;
               cout<<"Enter Grade:"<<endl;
                cin>>student[n].sGrade;
                         
                            if(Grade >=80 && <=100)

                          {                  

                             cout<< "A";
                          }
                
                            if(Grade >=70 && <=79)
                         {
                            cout<< "B";

                         }
                        

                            if(Grade >=60 && <=69)
                             {
                               cout<< "C";
                             }
                            
                            if (Grade >=50 && <=59)
                             {
                               cout<<"D";
                             }
                        
                           if (Grade >=40 && <=49)
                            {

                              cout<<"E";
                            }

                           if(Grade >=0 && <=39)
                            {
                              cout<<"f";
                            }
            
int sum age = 0;
Sum Age = s[0].sAge+s[1].sAge+s[2].sAge+s[3].sAge+s[4].sAge;
Average Age = sum Age/5;

int Score = 0;
sum Score= s[0].sScore+s[1].sScore+s[2].sScore[3].sScore+s[4].sScore;
Average Score =  sum Score/5;
          

              studentwrite swrite;
              swrite.write(student[]);
                                          return 0;
                                                          }
       

