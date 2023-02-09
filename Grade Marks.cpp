#include<iostream> //preprocessor directive
using namespace std;//library file
int main()//main function
{//opening braces
	int marks;//declare marks 
	cout<<"marks=";//this print marks=
	cin>>marks;//this print the marks given by the user
	
	if(marks>=90)//condition
	{
	cout<<"Grade is A\nCongratulations! you are passed.";//this print the value written in double quotes
}
	else if(marks>=80)//condition
	{
	cout<<"Grade is B\nCongratulations! you are passed.";//this print the value written in double quotes
}
	else if(marks>=70)//condition
	{
	cout<<"Grade is C\nCongratulations! you are passed.";//this print the value written in double quotes
}
	else if(marks>=50)//condition
	{
	cout<<"Grade is D\nCongratulations! you are passed.";//this print the value written in double quotes
}
	else
	{
	cout<<"Sorry! you are fail";//this print the value written in double quotes
}
return 0;
}//closing braces

