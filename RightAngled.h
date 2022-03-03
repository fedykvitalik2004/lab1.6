#pragma once
#include <string>

using namespace std;

class RightAngled
{
private:
	
	class Pair
	{
	private:
		double first;
		double second;
	public:
		double dobutok() const { return first * second; };    //used

		void SetFirst(double a) { first = a; };     //used
		void SetSecond(double a) { second = a; };    //used
		double GetFirst()const { return first; };    //used
		double GetSecond()const { return second; };    //used

		void Display() const;         //used
	};

	Pair test;
public:
	void setValue1();          //used                         
	void setValue2();             //used          
	double getFirst()const { return test.GetFirst(); };   //used
	double getSecond()const { return test.GetSecond(); };    //used
	RightAngled::Pair getPair() const { return test; };          //used      
	void setPair(RightAngled::Pair test) { this->test = test; };   //used    

	double teorema() const;                            //used
	double square() const;                         //used

	void Read();                                   //used   
	bool Init(double a, double b);                //used    
	void Display() const { test.Display(); };     //used   
	string tostring() const;                          //used
	double dobutok() const { return test.dobutok(); };   //used
};




