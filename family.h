#include <string>
#include <vector>

using namespace std;

struct FamilyInfo{
int size;
vector <string> members;
vector <int> ages;
};


FamilyInfo assignFam(){
  FamilyInfo family[9];
  
  family[0].size = 4;
  family[0].members.push_back("son");
  family[0].members.push_back("son");
  family[0].members.push_back("mother");
  family[0].ages.push_back(12);
  family[0].ages.push_back(16);
  family[0].ages.push_back(60);

  family[1].size = 4;
  family[1].members.push_back("son");
  family[1].members.push_back("daughter");
  family[1].members.push_back("spouse");
  family[1].ages.push_back(2);
  family[1].ages.push_back(3);
  family[1].ages.push_back(35);
  
  family[2].size = 3;
  family[2].members.push_back("daughter");
  family[2].members.push_back("spouse");
  family[2].ages.push_back(14);
  family[2].ages.push_back(35);

  family[3].size = 3;
  family[3].members.push_back("son");
  family[3].members.push_back("mother");
  family[3].ages.push_back(8);
  family[3].ages.push_back(60);

  family[4].size = 3;
  family[4].members.push_back("father-in-law");
  family[4].members.push_back("spouse");
  family[4].ages.push_back(88);
  family[4].ages.push_back(35);

  family[5].size = 3;
  family[5].members.push_back("son");
  family[5].members.push_back("son");
  family[5].ages.push_back(2);
  family[5].ages.push_back(15);

  family[6].size = 2;
  family[6].members.push_back("spouse");
  family[6].ages.push_back(35);

  family[7].size = 2;
  family[7].members.push_back("daughter");
  family[7].ages.push_back(17);

  family[8].size = 2;
  family[8].members.push_back("uncle");
  family[8].ages.push_back(45);

  srand(time(NULL));
  int num = rand() % 9+1;

  return family[num-1];
}
