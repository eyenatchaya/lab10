#include<iostream>
using namespace std;

int main(){
	char grade;
	int i = 1;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<< endl;

	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		
		if(grade == 'A'){ 
			count[0] = count[0]+1 ;
		}else if(grade == 'B'){
			count[1] = count[1]+1;
			// if grade is B
		    //Do something
		   //and so on ... for grade = C, D, F	
		}else if(grade == 'C'){
			count[2] = count[2]+1;

		}else if(grade == 'D'){
			count[3] = count[3]+1;
		}else if(grade == 'F'){
			count[4] = count[4]+1;
		}else{ 
			if(grade != '0'){
			cout << "Wrong input. Please input again." << endl;
			continue;
			}
			// grade is wrong input
			//Do something
		} i++;
	}while(grade != '0');
	cout << "In total " << i-2 <<" students."<< endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;	
	//	and so on ... for grade = C, D, F	

	return 0;
}