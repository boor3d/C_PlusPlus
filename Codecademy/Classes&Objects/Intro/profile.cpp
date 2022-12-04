#include <iostream>
#include "profile.hpp"

Profile::Profile(std::string newName, int newAge, std::string newCity, std::string newCountry, std::string newPronouns)
  : name(newName), age(newAge), city(newCity), country(newCountry), pronouns(newPronouns) {}

void Profile::add_hobby(std::string new_hobby)
      {
        hobbies.push_back(new_hobby);
      }


std::string Profile::view_profile()
      {
        std::string bio = "Name: " + name;
        bio += "\nAge: " + std::to_string(age);
        bio += "\nCity: " + city;
        bio += "\n";
        bio += "Hobbies: ";

        for (std::string hobby : hobbies)
        {
          bio += hobby + " ";
        }

        bio += "\n";
        
        return bio;
      }