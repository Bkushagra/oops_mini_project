#include <iostream>
#include <string>

using namespace std;

class Superhero {
public:
  string name;
  string powers[3];
  string origin_story;

  // Constructor with 3 powers
  Superhero(string name, string power1, string power2, string power3, string origin_story)
      : name(name), origin_story(origin_story) {
    powers[0] = power1;
    powers[1] = power2;
    powers[2] = power3;
  }

  // Constructor with 2 powers
  Superhero(string name, string power1, string power2, string origin_story)
      : name(name), origin_story(origin_story) {
    powers[0] = power1;
    powers[1] = power2;
    powers[2] = ""; // Set the third power as an empty string
  }

  // Constructor with 1 power
  Superhero(string name, string power1, string origin_story)
      : name(name), origin_story(origin_story) {
    powers[0] = power1;
    powers[1] = "";
    powers[2] = ""; // Set the second and third powers as empty strings
  }

  void printInfo() {
    cout << "Name: " << name << endl;
    cout << "Powers: ";
    for (int i = 0; i < 3; i++) {
      if (powers[i] != "") {
        cout << powers[i];
        if (i < 2 && powers[i + 1] != "") {
          cout << ", ";
        }
      }
    }
    cout << endl;
    cout << "Origin story: " << origin_story << endl;
  }
};

int main() {
  Superhero super1("Superman", "Flight", "Super strength", "Invulnerability", "Krypton");
  Superhero super2("Batman", "Martial arts", "Detective skills", "Parents murdered");
  Superhero super3("Wonder Woman", "Super strength", "Flight", "Clay");

  super1.printInfo();
  super2.printInfo();
  super3.printInfo();

  return 0;
}
