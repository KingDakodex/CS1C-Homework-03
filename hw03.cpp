#include "hw03header.h"
#include "employee.h"
#include "date.h"

/*
Author:     Dakota Gall
Class:      CS1c TTH 1:30
Assignment: HW03
*/

// variables
string nameOne = "Jimmy Fallon";
string JTComedian = "Comedian";

int main()
{

	// Testing alt Constructor and Mutators

	Employee One(nameOne, 12345, "949-555-1234", 40, Male, JTComedian, 100000, 31, 8, 2014);

	One.Print();

	One.SetName("Stephan Colbert");
	One.setId(12346);
	One.setPhone("310-555-5555");
	One.setAge(51);
	// *note: I know Mr. Colbert is not female, only using it to show value change :)
	One.setGender(Female);
	One.setJob("The Late Show Host");
	One.setSalary(70123);
	One.setHireDate(8, 5, 2015);

	One.Print();
	
	// Testing Base Constructor and Mutators

	Employee Two;

	Two.Print();

	Two.SetName("James Corden");
	Two.setId(87654);
	Two.setPhone("703-703-1234");
	Two.setAge(37);
	Two.setGender(Male);
	Two.setJob("Talk Show Host");
	Two.setSalary(900000);
	Two.setHireDate(25, 12, 2014);

	Two.Print();


	return 0;
}