#include <iostream>
#include <string>

using namespace std;

struct Career{
string job;
int salary;
};

Career assignCareer(){
  Career career;

  string jobs[13] = {"Cashier", "Manufacturer", "Waitstaff", "Custodial Staff", "Welder", "Mechanic", "Manager Retail",        "Manager Automotive", "Engineer - Cybersecurity", "Electrician", "Plumber", "Teacher", "Firefighter"};
  int salaries[13] = {29120, 34580, 40400, 32760, 43680, 50960, 38500, 60000, 90000, 45000, 42000, 40000, 50500};

  srand(time(NULL));
  int num = rand() % 9+1;
  career.job = jobs[num];
  career.salary = salaries[num]*.85;

  return career;

}