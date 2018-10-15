#include <iostream>
#include<fstream>
#include<string>
using namespace std;

struct student
{
    char n[5];
    string IDnumber;
    string name;
    int age;
    string gender;
    int score;
    char grade;
    
};

int main(int argc, char**argv) 
{
    student s;
    cout << "Enter information," << endl;
    cout << "ID Number: ";
    cin >> s.IDnumber;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter Age: ";
    cin >> s.age;
    cout << "Enter Gender : ";
    cin >> s.gender;
    cout << "Enter Score : ";
    cin >> s.score;
    

    cout << "\nDisplaying Information," << endl;
    cout << "ID Number :  " << s.IDnumber << endl;
    cout << "Name :  " << s.name << endl;
    cout << "Age :  " << s.age << endl;
    cout << "Gender : " << s.gender << endl;
    cout << "Score : " << s.score << endl;
    
    if(score>=80)
     {
     	cout<<"Grade is A";
	 }
	  else if(score>=70)
	  {
	  	cout<<"Grade is B";
	
	  }
	  else if(score>=60)
    {
    	cout<<"Grade is C";
    
	}
	 else if(score>=50)
	 {
	 	cout<<"Grade is D";
		 
		 	 }
		 	 else if (score>=40)
		 	 {
		 	 	cout<<"Grace is E";
		 	 	
			  }
			  else if (score<39)
			  {
			  	cout<<"Grade is F";
			  }
    	string data = " ";
    	
	ofstream is;
	is.open("Kwame.txt");
	is<<data;
	
	cin>> data;
	
    
    
    return 0;
}
