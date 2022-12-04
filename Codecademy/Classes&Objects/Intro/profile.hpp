#include <iostream>
#include <vector>

class Profile
{
  private:
    // attributes 
    std::string name;
    int age;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies; 

    public:
      Profile(std::string newName, int newAge, std::string newCity, std::string newCountry, std::string newPronouns = "they/them");

      std::string view_profile();

      void add_hobby(std::string new_hobby);
};