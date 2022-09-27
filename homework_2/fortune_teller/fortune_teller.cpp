#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main() {
  string name;
  string season;
  const map<string, string> noun = {{"spring", "STL guru"},
                                    {"summer", "C++ expert"},
                                    {"autumn", "coding beast"},
                                    {"winter", "software design hero"}};
  array<string, 3> ending = {"eats UB for breakfast",
                             "finds errors quicker than the compiler",
                             "is not afraid of C++ error messages"};
  string adj[2] = {"", ""};
  cout << "Welcome to the fortune teller program!" << endl;
  cout << "Please enter your name:" << endl;
  cin >> name;
  cout << "Please enter the time of year when you were born:" << endl;
  cout << "(pick from 'spring', 'summer', 'autumn', 'winter')" << endl;
  cin >> season;
  cout << "Please enter an adjective:" << endl;
  cin >> adj[0];
  cout << "Please enter another adjective:" << endl;
  cin >> adj[1];
  cout << endl << "Here is your description:" << endl;
  cout << name << ", the "
       << adj[name.length() % (sizeof(adj) / sizeof(string))] << " "
       << noun.at(season) << " that "
       << ending[name.length() % (sizeof(ending) / sizeof(string))] << endl;
  return 0;
}
