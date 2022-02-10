#include <iostream>
#include <string>
using namespace std;
  int main() {
    std::cout << "Welcome to MadLibs!\n";
    string name, emotion, animal;
    int pages;
    double percent;
    char initial;

    std::cout << "What is your name?\n";
    std::cin >> name;
    std::cout << "Hello, " << name << "\n";

    std::cout <<"What emotion are you feeling?\n";
    std::cin >> emotion;
    std::cout << "You are feeling: " << emotion << "\n";

    std::cout << "What animal do you have?\n";
    std::cin >>  animal;
    std::cout << "You have a(n): " << animal << "\n";

    std::cout <<"How many pages?\n";
    std::cin >> pages;
    std::cout << "You have " << pages << " pages.\n";

    std::cout << "What percentage completed?\n";
    std::cin >> percent;
    std::cout << "You have completed " << percent << " percent.\n";

    std:: cout << "What letter grade do you want?\n";
    std::cin >> initial;
    std::cout << "You wish to get a(n): " << initial << "\n";

    std::cout << "Dear " << name << ",\n I am " << emotion << " that I was not able to complete my homework on time. My pet " << animal << " ate my textbook, and I was only able to retrieve " << pages << " pages from its jaws. I hope I can get at least a(n) " << initial << " grade because I've done " << percent << " percent of the work.\n Sincerely, \n" << name << "\n";

return 0;

}
