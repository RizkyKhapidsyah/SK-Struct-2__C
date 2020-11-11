#include <stdio.h>
#include <conio.h>

int main()
{
	struct person {
		char name[32];
		int age;
	};
	struct person president = {
		"Rizky Khapidsyah",
		29
	};

	printf("%s was %d years old\n", president.name, president.age);

	_getch();
	return(0);
}