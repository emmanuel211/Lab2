#include <iostream>
using namespace std;




int main()
{
	 
	int grade,
		aCount = 0,
		bCount = 0,
		cCount = 0,
		dCount = 0,
		fCount = 0;
	
		
	cout << "Enter the letter grades.\n"
		 << "Enter the EOF character to end input.\n";
		 
		 
	 while ( (grade = cin.get() ) !=EOF) {
	 	
	 	if (grade == 'A'||grade == 'a'  ) {
	 		++aCount;
		 }
		else if (grade =='B'||grade == 'b')
		{
		 	++bCount;
		 }
		 
		else if (grade == 'C'||  grade == 'c' ){
		 	++cCount;
		 }		 
		else if (grade == 'D'|| grade == 'd' ){
		 	++dCount;
		 }
		else if (grade == 'F'|| grade =='f' ){
		 	++fCount;
		 }		 
		else if (grade == '\n'|| grade == '\t'|| grade == ' ') {
		
		 	
		 }
		else 
		 {
		cout<<"Incorrect letter grade entered.\n "
    	    <<"Enter a new grade . "<<endl;
		 }
		

		
	}
	
	cout <<"\n\nTotals for each letter grade are:"
		 <<"\nA: " << aCount
		 <<"\nB: " << bCount
		 <<"\nC: " << cCount
		 <<"\nD: " << dCount
		 <<"\nF: " << fCount << "\n";
		 
	return 0;
	}

