#include<iostream>
#include<string>
using namespace std;
int main()
	//โปรแกรมคำนวนเกรดโดยสวิทซ์
	/*
{
	char choice;
	int grade;
	string a,b,c,d,e,f,g,h ;
	a = "< 80 - 100 >",b = "< 75 - 79 >",c = "< 70 - 74 >",d = "< 65 - 69 >",e = "< 60 - 64 >";
	f = "< 55 - 59 >" ,g = "< 50 - 54 >",h = "< 0 - 49 >";
	cout << " Menu Score Student Grade " << endl;
	cout << "Please select choice : ";
	cin >> choice;
	cout << "Your score is range " ;
	switch (choice) {
	case '1' : cout << a ; break ;
	case '2' : cout << b ; break ;
	case '3' : cout << c ; break ;
	case '4' : cout << d ; break ;
	case '5' : cout << e ; break ;
	case '6' : cout << f ; break ;
	case '7' : cout << g ; break ;
	case '8' : cout << h ; break ;
	default  :  break ;
	}
	cout << endl;
	cout << "The student grade is " << endl;
	//ยังไม่เสร็จ
	return(0);
}*/

/*{
	int f,s,r,z=0;
	cout << "Input first number : ";
	cin >> f;
	cout << "Input second number : ";
	cin >> s;
	for (int r = s ;r>=1 ; r--)
	{	cout << f <<" * "<< r << " = " << f*r << endl;
		z = z+(f*r);
	}
	cout << "sum : " << z << endl;
	return (0);
}*/

/*{	int a,b,d;
	char c = '@';
	cout << "Input number :";
	cin >> a;
	for (int b = a ; b>=1 ;b-- )
	{
		for (int d = b ; d>=1 ;d--)
			{
				cout << c ;
			}
		cout << endl;
	}
	return(0);
}*/

{
	int n,s,sum=0,a,average=0,g1=1,g2=2,g3=3,g4=4;
	cout << "Please enter number of student : ";
	cin >>n;
	for (int a = 1 ; a<=n ; a++){
		cout << "Please enter score :";
		cin >>s;
		//for (int g = 1 ; g<=a ;g++)
		{ 
			if ( s >= 80 && s <=100 ) 
			{ cout << "Your grade =4\n" ;  sum=4 ;}
			else if ( s >= 70 && s <=79 ) 
			{ cout << "Your grade =3\n"  ; sum=3 ;}
			else if ( s >= 60 && s <=69 ) 
			{ cout << "Your grade =2\n"  ; sum=2 ;}
			else if ( s >= 50 && s <=59 ) 
			{ cout << "Your grade =1\n"   ; sum=1 ;}
			else { cout << "Your grade =0" ; sum=0 ;}
			}
		average = average+sum;

	}	
	cout << "Average is " << average << endl;
	return (0);
}