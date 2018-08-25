

#include <iostream>
#include <cmath>
using namespace std; 
int main(){
	int num1, num2, result, choice;
	
	cout <<"Enter your choice"<< endl;
	cout <<"1 for Addition"<< endl;
	cout <<"2 for Subtraction"<< endl;
	cout <<"3 for Multiplication"<< endl;
	cout <<"4 for Division"<< endl;
	cout <<"5 for Square Root"<< endl;
	cout <<"6 for Square"<< endl;
	cout <<"7 for Cube Root"<< endl;
	cout <<"8 for Cube"<< endl;
	cout <<"9 for Power"<< endl;
	cin >> choice;
	
while(choice > 0 || choice < 10){
		switch(choice){ //do addition
			case 1: 
        cout << "Enter your first number" << endl;
        cin >> num1;
        cout <<"Enter second number"<< endl;
        cin >> num2;
        result = num1 + num2;
			  break;
			case 2: //do subtraction
        cout << "Enter first number" << endl;
        cin >> num1;
        cout<<"Enter a number to be subtracted"<< endl;
        cin >> num2;
			  result = num1 - num2;
			  break;
			case 3://do multiplication
        cout << "Enter first number"<< endl;
        cin >> num1;
        cout<<"Enter second number"<< endl;
        cin >> num2;
        result = num1*num2;
			break;
			case 4://do division
			cout <<"Enter first number"<< endl;
			cin >> num1;
			cout<<"Enter second number"<< endl;
			cin >> num2;
			if (num2<=0){cout<<" Cannot be divided by 0 or a negative number"<< endl;}
			result = num1/num2;
			break;
			case 5: //Square Root
			cout <<"Enter a number"<< endl;
			cin >> num1;
			result = sqrt(num1);
			break;
			case 6://Square
			cout << "Enter first number"<< endl;
			cin >> num1;
			result = num1*num1;
			break;
			case 7: // Cuberoot
			cout << "Enter a number"<< endl;
			cin >> num1;
			result = cbrt(num1);
			break;
			case 8;// Cube
			cout << "Enter first number"<< endl;
			cin >> num1;
			result = num1*num1*num1;
			break;
			case 9;// Power
			cout << "Enter number"<< endl;
			cin >> num1;
			cout << "Enter the power"<< endl;
			cin >> num2;
			result = pow(num1, num2);*/
			default:  
			cout << "Invalid Input, try again"<< endl;	
		}

		cout << "The result is" << result << endl;
	  }
	return 0;
}



