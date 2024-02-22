#include<iostream>
#include<unistd.h>  
#include<math.h> 








using namespace std;


class FirstScreen
{
    public:
   


  void enterscreen ()
  {
    string arr[6] = { "All", "In", "One", "Calclulator", "Replars" , "Company" };
    system("clear");
    cout<<"\t\t";
    
     cout<<endl<<endl<<endl;
    for (int x = 0; x < 6; x++)
      {
		
	cout << arr[x] << " " << flush;
	usleep (400000);
    } for (int a = 0; a < 5; a++)
      {
	usleep (100000);
	cout << "\b\\" << flush;
	usleep (100000);
	cout << "\b|" << flush;
	usleep (100000);
	cout << "\b/" << flush;
	usleep (100000);
	cout << "\b-" << flush;
      }
    cout << "\b";
  }
};

class SelectionPage
{
    public: 
   void selection () 
   {
    system("clear");
    cout<<"\t\t\tPlease select a number from the menu"<<endl;       
    cout<<"--------------------------------------------------------------------------------"<<endl<<endl<<endl;
    cout<<"1- Simple Calculator"<<endl<<endl<<endl;
	cout<<"---> Mathematical Operations	"<<endl<<endl;
	cout<<"\t2- Area Calculator "<<endl<<endl;
	cout<<"\t3- Prime Factor Calculator	"<<endl<<endl;
	cout<<"\t4- Circumference Calculator	"<<endl<<endl;
	cout<<"\t5- Factorial Calculator	"<<endl<<endl;
	cout<<"\t6- Inch Calculator	"<<endl<<endl;
	cout<<"\t7- Radical Number Calculator	"<<endl<<endl;
	
    cout<<"--------------------------------------------------------------------------------"<<endl<<endl;
   }   
   

};

class Transiction
{
	//version1.0
  int choice;
  int numbers;
  double totalcontinue = 0.0;
  double totalfinish = 0.0;

public:
  int QuestionTransiction ()
  {
	system ("clear");
	cout << "\t\t\t4 TRANSACTION CALCULATOR " << endl;
	cout <<
	  "--------------------------------------------------------------------------------"
	  << endl << endl << endl;
	cout <<
	  "Please choose the operation you'd like to perform by selecting the corresponding number. (You can choose another number after making your initial selection.)"
	  << endl << endl << endl;
	cout << "1- Add ( + )" << endl << endl;
	cout << "2- Subtract ( - )" << endl << endl;
	cout << "3- Multiply( * )" << endl << endl;
	cout << "4- Divide( / )" << endl << endl;
	cout <<
	  "--------------------------------------------------------------------------------"
	  << endl << endl;
	cout << "Your Choice: ";
	cin >> choice;
	return choice;

  }
  void CalculationTransaction ()
  {

	if (choice == 1)
	  {
		system ("clear");
		cout << "\t\t\tADDITION " << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		cout << "How many numbers do you want to add?" << endl;
		cin >> numbers;

		double temp1 = 0.0;
		for (int x = 0; x < numbers; x++)
		  {
			double temp = 0.0;
			cout << "Please write the " << x + 1 << ". number: ";
			cin >> temp;
			totalcontinue += temp;
			temp1 += temp;
		  }
		cout << endl << endl << endl;
		cout << "Your addition answer is: " << temp1 << endl << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl;



		
	  }
	else if (choice == 2)
	  {

		int slc;
		system ("clear");
		cout << "\t\t\tSUBSTRACTION	 " << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		cout <<
		  "Would you like to subtract from your previous answer or perform a completely new subtraction and add it to the previous answer?"
		  << endl << endl;
		cout << "1- Substract one number from multiple numbers" << endl << endl;
		cout <<
		  "2-Substract two numbers" <<
		  endl << endl;
		cout << "Your Choice: ";
		cin >> slc;
		if (slc == 1)
		  {
			system ("clear");
			cout << "\t\t\tSUBSTRACTION	 " << endl;
			cout <<
			  "--------------------------------------------------------------------------------"
			  << endl << endl;
			  cout<<"Please write the number to subtract from other numbers: ";
			  double temp1;
			  cin>>temp1;
			  cout<<endl;
			  cout<<"Please write how many numbers do you want to substract from the previous number: ";
			  
			  double temp2;
			  double temp2total;
			  double temp3;
			  cin>>temp2;
			  
			  for(int i =0;i<temp2;i++)
			  {
				cout<<"Please enter the "<<i+1<<" number: ";
				cin>>temp3;	
				temp2total+=temp3;
			  }

			  totalcontinue=temp1-temp2total;
			  cout << endl << endl;	
			  cout << "Your substract answer is: " << totalcontinue << endl << endl;	
			  
			
			cout <<
			  "--------------------------------------------------------------------------------"
			  << endl;
			
		  }
		if (slc == 2)
		  {
			system ("clear");
			cout << "\t\t\tSUBSTRACTION	 " << endl;
			cout <<
			  "--------------------------------------------------------------------------------"
			  << endl << endl;

			  cout<<"Please enter the first number: ";
			  double temp1;
			  cin>>temp1;
			  cout<<"Please enter the second number: ";
			  double temp2;
			  cin>>temp2;
			  totalcontinue=temp1-temp2;
			  cout << endl << endl;	
			  cout << "Your substract answer is: " << totalcontinue << endl << endl;	
			
			cout <<
			  "--------------------------------------------------------------------------------"
			  << endl;

			
		  }





	  }
	else if (choice == 3)
	  {
		system ("clear");
		cout << "\t\t\tMULTIPLICATION" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		cout << "How many numbers do you want to multiply?" << endl;
		cin >> numbers;
		double temp1 = 1.0;

		for (int x = 0; x < numbers; x++)
		  {
			double temp;
			cout << "Please write the " << x + 1 << ". number: ";
			cin >> temp;
			temp1 *= temp;


		  }
		cout << endl << endl << endl;
		cout << "Your mutiplication  answer is: " << temp1 << endl << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl;

		if (totalcontinue != 0.0)
		  {
			totalcontinue = temp1 * totalcontinue;
		  }
		else
		  {
			totalcontinue = temp1;
		  }





		
	  }
	else if (choice == 4)
	  {
		int slc;
		system ("clear");
		cout << "\t\t\tDIVISION	 " << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		cout <<"Please enter the numerator: ";
		double temp1;
		cin>>temp1;
		cout<<"Please enter the denominator: ";
		double temp2;
		cin>>temp2;
		while(temp2==0)
		{
    		cout<<"You cannot divide by 0. Please enter a new denominator: ";
			cin>>temp2;	
		}
			
		
		totalcontinue=temp1/temp2;
		cout << endl << endl;	
		cout << "Your division answer is: " << totalcontinue << endl << endl;	
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl;	
		

		

		
	  }

  }

  void answer ()
  {
	totalfinish = totalcontinue;
	cout << "Your total answer is: " << totalfinish << endl;
  }



};

class AreaCalculator{
	//version 1.0
	double area;

	public:
     int choice;
	void questionArea()
	{
       
		system("clear");
		cout << "\t\t\tAREA CALCULATOR" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		cout << "What shape do you want to calculate the area of?" << endl<<endl<<endl;
		cout << "1- Rectangle or Square" << endl<<endl;
		cout << "2- Triangle" << endl<<endl;	
		cout << "3- Circle" <<endl<<endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl;
		  cout<<"Enter your choice: ";	
		  cin>>choice;	
	}
	void calculationArea()
	{
		if(choice==1)
		{    
			double base;
			double height;
				
			system("clear");
		    cout << "\t\t\tRECTANGLE or SQUARE AREA CALCULATOR" << endl;
		    cout <<
		     "--------------------------------------------------------------------------------"
		     << endl << endl;
		    cout<<"Please enter the base length in cm: ";
			cin>>base;
			cout<<"Please enter the height in cm: ";
			cin>>height;
			area=base*height;
			
				

		}
		else if(choice==2)
		{
			double base;
			double height;
				
			system("clear");
		    cout << "\t\t\tTRIANGLE AREA CALCULATOR" << endl;
		    cout <<
		     "--------------------------------------------------------------------------------"
		     << endl << endl;
		    cout<<"Please enter the base length in cm: ";
			cin>>base;
			cout<<"Please enter the height in cm: ";
			cin>>height;
			area=(base*height)/2;
			
		}
		else if(choice==3)
		{

			double pi=3.14159265358979323846;
			double r;
			
			system("clear");
		    cout << "\t\t\tSQUARE AREA CALCULATOR" << endl;
		    cout <<
		     "--------------------------------------------------------------------------------"
		     << endl << endl;
			 cout<<"Please enter the radius of the circle in cm: ";
			 cin>>r;
			 area=pi*r*r;
			 

		}	
	}
	void answerArea()
	{
		double answer=area;	
		cout<<endl;
		cout<<"The area is: "<<answer<<" cm²"<<endl<<endl;	
		 cout <<"--------------------------------------------------------------------------------"
		     << endl << endl;

	}

};

class PrimeFactorCalculator{
//version 1.0
int number;
public:
	void questionPrimeFactor()
	{
		
		system("clear");
		cout << "\t\t\tPRIME FACTOR CALCULATOR" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		cout << "Enter a number to calculate its prime factors : ";
		cin >> number;
		cout<<endl<<endl;
		
	}	

	void calculationPrimeFactor(){


        cout<<"Prime factors of "<<number<<" are: ";	

		if(number==0)
		{
			//sayının 0 oldugu durumu yaz
		}
		else{
            while(number%2==0)
			{
				cout<<"2 x ";
				number=number/2;	
			}

			for(int i=3;i<=number;i=i+2)
			{
				while(number%i==0)
				{
					cout<<i<<" x ";	
					number=number/i;
				}
			}	
        cout<<"\b\b "<<endl<<endl;	
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		}


	}

	



};


class CircumferenceCalculator{
	//version 1.0
int choice;
double answer;
public:
void questionCircumference()
{

system("clear");
		cout << "\t\t\tCIRCUMFERENCE CALCULATOR" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;

		  cout<<"Please select the shape you want to calculate the circumference of: "<<endl<<endl;
		  cout<<"1- Circle"<<endl<<endl;
		  cout<<"2- Equilateral triangle"<<endl<<endl;
		  cout<<"3- Isosceles triangle"<<endl<<endl;
		  cout<<"4- Scalene triangle"<<endl<<endl;
		  cout<<"5- Rectangle"<<endl<<endl;
		  cout<<"6- Square"<<endl<<endl;
		  cout<<"7- Equilateral quadrangle"<<endl<<endl;
		  cout<<"8- Parallelogram"<<endl<<endl;
		  cout<<"9- Trapezoid"<<endl<<endl;
		  cout<<"10- Scalene trapezoid"<<endl<<endl;
		  cout<<"11- Equilateral pentagon"<<endl<<endl;
		  cout<<"12- Equilateral hexagon"<<endl<<endl;
		  cout<<"13- Equilateral octagon"<<endl<<endl;
		  cout<<"14- Ellipse"<<endl<<endl;
          cout<<"Enter your choice: ";
		  cin>>choice;	

}

void calculationCircumference()
{	
	double radius;
	double side;
	double height;
	double base;
	double radius2;
	double sidea;
	double sideb;
	double sidec;
	double sided;

switch(choice)
{
   case 1:
   system("clear");
   
		cout << "\t\t\tCIRCLE" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		cout<<"Please write the radius of the circle in cm: ";
		cin>>radius;
		answer=2*3.14159265359*radius;	

   
   break;

   case 2:	
   system("clear");
  
		cout << "\t\t\tEQUILATERAL TRIANGLE	" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		  cout<<"    /\\"<<endl;
		  cout<<"   /  \\"<<endl;
		  cout<<"a /    \\ a"<<endl;
		  cout<<" /      \\"<<endl;
		  cout<<"/________\\"<<endl;
		  cout<<"    a      "<<endl<<endl;
		  cout<<"Please write the side length(a) of the triangle in cm: ";
		  cin>>side;	
		  answer=3*side;
   break;	

   case 3:
   system("clear");
  	
		cout << "\t\t\tISOSCELES TRIANGLE	" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;

		  cout<<"    /\\"<<endl;
		  cout<<"   /  \\"<<endl;
		  cout<<"a /    \\ a"<<endl;
		  cout<<" /      \\"<<endl;
		  cout<<"/________\\"<<endl;
		  cout<<"    b      "<<endl<<endl;
		  cout<<"Please write the isosceles side(a) length of the triangle in cm: ";	
		  cin>>sidea;	
		  cout<<"Please write the base side(b) length of the triangle in cm: ";
		  cin>>sideb;	
		  answer=(sidea*2)+sideb;	
   break;	

   case 4:
   system("clear");
   
		cout << "\t\t\tSCALENE TRIANGLE	" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;

		  cout<<"    /\\"<<endl;
		  cout<<"   /  \\"<<endl;
		  cout<<"a /    \\  c"<<endl;
		  cout<<" /      \\"<<endl;
		  cout<<"/________\\"<<endl;
		  cout<<"    b      "<<endl<<endl;
		  cout<<"Please write the side(a) length of the triangle in cm: ";
		  cin>>sidea;	
		  cout<<"Please write the side(b) length of the triangle in cm: ";
		  cin>>sideb;	
		  cout<<"Please write the side(c) length of the triangle in cm: ";
		  cin>>sidec;	

		  answer=sidea+sideb+sidec;	
   break;	

   case 5:
   system("clear");
  
  

		cout << "\t\t\tRECTANGLE" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		  cout<<"|-----------------|"<<endl;
		  cout<<"|                 |"<<endl;
		  cout<<"|                 |"<<endl;
		  cout<<"|                 |  a"<<endl;
		  cout<<"|                 |"<<endl;
		  cout<<"|-----------------|"<<endl;
		  cout<<"         b         "<<endl<<endl;
		  cout<<"Please write the base length(b) of the rectangle in cm: ";
		  cin>>base;	
		  cout<<"Please write the height(a) of the rectangle in cm: ";
		  cin>>height;	
		  answer=(base*2)+(height*2);		

		
   break;	

   case 6:
   system("clear");
   
		cout << "\t\t\tSQUARE	" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;

		  cout<<"|---------------|"<<endl;
		  cout<<"|               |"<<endl;
		  cout<<"|               |"<<endl;
		  cout<<"|               | a"<<endl;
		  cout<<"|               |"<<endl;
		  cout<<"|---------------|"<<endl;
		  cout<<"       a         "<<endl<<endl;
		  cout<<"Please write the side length of the square in cm: ";
		  cin>>side;
		  answer=side*4;	
   break;	

   case 7:
   system("clear");
		cout << "\t\t\tEQUILATERAL QUADRANGLE"	 << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		  cout<<"Please write the side length of the quadrangle	in cm: ";
		  cin>>side;
		  answer=side*4;	
   break;	

   case 8:
   system("clear");
  
		cout << "\t\t\tPARALLELOGRAM	" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		  cout<<"    _________________"<<endl;
		  cout<<"   /                /"<<endl;
		  cout<<"  /                /"<<endl;
		  cout<<" /                / a"<<endl;
		  cout<<"/________________/"<<endl;
		  cout<<"        b          "<<endl<<endl;	
		  cout<<"Please write the base(b) length of the parallelogram in cm: ";
		  cin>>base;
		  cout<<"Please write the side(a) length of the parallelogram in cm: ";
		  cin>>side;
		  answer=(base*2)+(side*2);	
   break;	

   case 9:
   system("clear");
  
   
   	
		cout << "\t\t\tTRAPEZOID" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		  cout<<"        b    "<<endl;
		  cout<<"    _________"<<endl;
		  cout<<"   /         \\"<<endl;
		  cout<<"c /           \\ c"<<endl;
		  cout<<" /             \\"<<endl;
		  cout<<"/_______________\\"<<endl;
		  cout<<"        a          "<<endl<<endl;	
		  cout<<"Please write the upper(b) length of the trapezoid in cm: ";
		  cin>>base;
		  cout<<"Please write the isosceles(c) length of the trapezoid in cm: ";
		  cin>>side;
		  cout<<"Please write the base(a) length of the trapezoid in cm: ";
		  cin>>sidea;
		  answer=(base)+(side*2)+(sidea);	


   break;	

   case 10:
   system("clear");
 	
		cout << "\t\t\tSCALENE TRAPEZOID" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;

		  cout<<"Please write the one side(a) length of the trapezoid in cm: ";
		  cin>>sidea;
		  cout<<"Please write the other side(b) length of the trapezoid in cm: ";
		  cin>>sideb;
		  cout<<"Please write the other side(c) length of the trapezoid in cm: ";
		  cin>>sidec;
		  cout<<"Please write the other side(d) length of the trapezoid in cm: ";
		  cin>>sided;
		  answer=(sidea)+(sideb)+(sidec)+(sided);	
		  

		  
		  
   break;	

   case 11:
   system("clear");

		cout << "\t\t\tEQUILATERAL PENTAGON	" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;

		   cout<<"Please write the side of the pentagon in cm: ";	
		   cin>>side;
		   answer=side*5;
   break;	

   case 12:
   system("clear");
   
		cout << "\t\t\tEQUILATERAL HEXAGON	" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		  cout<<"Please write the side of the pentagon in cm: ";	
		   cin>>side;
		   answer=side*6;
   break;	

   case 13:
   system("clear");
   
		cout << "\t\t\tEQUILATERAL OCTAGON	" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		  cout<<"Please write the side of the pentagon in cm: ";	
		   cin>>side;
		   answer=side*7;
   break;	

   case 14:
   system("clear");
   
   

		cout << "\t\t\tELLIPSE" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;

		  cout<<"Please write the short radius of the ellipse in cm: ";
		  cin>>radius;
		  cout<<"Please write the long radius of the ellipse in cm: ";
		  cin>>radius2;
		  answer=(2*3.14)*sqrt((1/2)*((radius*radius)+(radius2*radius2)));
   break;	



}



}	

void answerCircumference()
{	
	cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		  cout<<"Your circumference is: "<<answer<<" cm"<<endl<<endl;
		  cout <<"--------------------------------------------------------------------------------		"
		  << endl << endl;	
}	



};


class FactorialCalculator
{
	//version1.0
  int number;
  int answer = 1.0;
public:

  void questionFactorial ()
  {
	system ("clear");
	cout << "\t\t\tFACTORIAL CALCULATOR" << endl;
	cout <<
	  "--------------------------------------------------------------------------------"
	  << endl << endl;
	cout <<
	  "Please write the number you want to calculate the factorial of: ";
	cin >> number;
	if (number >= 17 || number < 0)
	  {
		system ("clear");
		cout << "\t\t\tWARNING" << endl;
		cout <<
		  "--------------------------------------------------------------------------------"
		  << endl << endl;
		cout << "Please enter a number between 0 and 17" << endl << endl;
		sleep (2);
		questionFactorial ();
	  }


  }

  void calculationFactorial ()
  {

	for (int i = 1; i <= number; i++)
	  {
		answer = answer * i;
	  }

  }

  void answerFactorial ()
  {
	cout <<
	  "--------------------------------------------------------------------------------"
	  << endl << endl;
	cout << "Your factorial is: " << answer << endl << endl;
	cout <<
	  "--------------------------------------------------------------------------------		"
	  << endl << endl;
	answer = 1.0;
	number = 0.0;
  }

};


class InchCalculator{
   //version 1.0
    int choice;
	double inch;
	double cm;
	double result;
	public:

		void questionInch()
		{
			system("clear");
			cout << "\t\t\tINCH CALCULATOR" << endl;
			cout <<
			  "--------------------------------------------------------------------------------"
			  << endl << endl;
			  cout<<" 1-Inch to Cm"<<endl<<endl;
			  cout<<" 2-Cm to Inch"<<endl<<endl;

			  cout<<"Enter your choice: ";
			  cin>>choice;	
			  if(choice == 1){
				cout<<endl<<endl;
				cout<<"Please write the length in inch: ";	
				cin>>inch;
				
			  }
			  else if(choice == 2){	
				cout<<endl<<endl;
				cout<<"Please write the length in cm: ";	
				cin>>cm;	
			  }	
			
}

void calculationInch()
{
	if(choice == 1){
		result = inch * 2.54;
	}
	else if(choice == 2){
		result = cm / 2.54;
	}
}	
void answerInch()
{
	cout<<endl;

	if(choice == 1){
		cout<<"The length is: "<<result<<" cm"<<endl<<endl;
	}
	else if(choice == 2){	
	cout<<"The length is: "<<result<<" inch"<<endl<<endl;
	
	 cout <<"--------------------------------------------------------------------------------"
	     << endl << endl;	
		 }
		  }
};


class RadicalCalculator{
   //version 1.0
	int choice;
	double root;
	double number;
	double result;
	public:	
		void questionRadical()
		{
			system("clear");
			cout << "\t\t\tRADICAL NUMBER CALCULATOR" << endl;
			cout <<
			  "--------------------------------------------------------------------------------"
			  << endl << endl;
			  cout<<"Please enter the degree of root: ";	
			  cin>>root;
			  if(root<=0)
			  {
				system("clear");
				cout << "\t\t\tWARNING" << endl;
				cout <<
				  "--------------------------------------------------------------------------------"
				  << endl << endl;
				
				do{
					cout << "Please enter a positive number: "<<flush;
				sleep (2);
					cin>>root;	
				}while(root<=0);	
				
			  	cout<<endl<<endl;
			  	
			  }	
			  cout<<endl<<endl;	
			  cout<<"Please enter the number inside the root: ";	
			  cin>>number;	
			  if(number<0)
			  {
			  	system("clear");
				cout << "\t\t\tWARNING" << endl;
				cout <<
				  "--------------------------------------------------------------------------------"
				  << endl << endl;
				cout << "Please enter a positive number" << endl << endl;
				sleep (2);
				questionRadical ();	
			  }	


		}

		void calculationRadical()
		{
			result = pow(number,1/root);
		}
		void answerRadical()
		{
			cout<<endl;	
			cout<<"The root is: "<<result<<endl<<endl;
			cout <<"--------------------------------------------------------------------------------"	
			<< endl << endl;	}
				
};

int main()
{
    FirstScreen call;
    SelectionPage callx;
   
   

  
    call.enterscreen();
	while(1){
    system("clear"); 
    callx.selection();
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    char continueto;  

    Transiction call1;
	AreaCalculator call2;
	PrimeFactorCalculator call3;
	CircumferenceCalculator call4;
	FactorialCalculator call5;
	InchCalculator call6;
	RadicalCalculator call7;	
	


    switch(choice)
    {    
        case 1:
       
        
        do{
        call1.QuestionTransiction();
        call1.CalculationTransaction();
        cout<<"Do you want to continue? (y/n): ";
        cin>>continueto;  
        }while(continueto=='y'||continueto=='Y'); 
        call1.answer(); 
        break;
		
		
		case 2:
		
       
		do{
        call2.questionArea();
		call2.calculationArea();
		call2.answerArea(); 
		cout<<"Do you want to continue? (y/n): ";
		cin>>continueto;	


		}while(continueto=='y'||continueto=='Y'); 
        
        break;

		case 3:
		do{
        
		call3.questionPrimeFactor();
		call3.calculationPrimeFactor();
		
		cout<<"Do you want to continue? (y/n): ";
		cin>>continueto;	


		} while(continueto=='y'||continueto=='Y'); 
		break;	
		
		case 4:
		do{
        
		call4.questionCircumference();
		call4.calculationCircumference();
		call4.answerCircumference();	
		
		cout<<"Do you want to continue? (y/n): ";
		cin>>continueto;	


		} while(continueto=='y'||continueto=='Y'); 
		break;	


		case 5:
		do{
        
		call5.questionFactorial();
		call5.calculationFactorial();
		call5.answerFactorial();	
		
		cout<<"Do you want to continue? (y/n): ";
		cin>>continueto;	
        
        
		} while(continueto=='y'||continueto=='Y'); 
		break;	

		case 6:
		do{
        
		call6.questionInch();
		call6.calculationInch();
		call6.answerInch();	
		
		cout<<"Do you want to continue? (y/n): ";
		cin>>continueto;	
        
        
		} while(continueto=='y'||continueto=='Y'); 
		break;	


		case 7:
		do{
        
		call7.questionRadical();
		call7.calculationRadical();
		call7.answerRadical();	
		
		cout<<"Do you want to continue? (y/n): ";
		cin>>continueto;	
        
        
		} while(continueto=='y'||continueto=='Y'); 
		break;	

		


		

    } 
      
 }

 

    return 0;   
}