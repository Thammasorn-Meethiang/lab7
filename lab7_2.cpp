#include <iostream>
#include <string>

int main(){
    std::string usrname, mOvie, date, chuunibyou;
    int stucode;
    std::cout << "Fahsai: Sawadee ka...Can you tell me your name?\n?????: ";
    getline(std::cin,usrname);
    std::cout << "Fahsai: Wow!!! " <<usrname <<" is a really cool name.\n";
    std::cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n" << usrname <<": ";
    
    std::cin >> stucode;
    std::cin.ignore();
    std::cout << "Fahsai: I think you may be GEAR "<<stucode/10000000 - 12.<<". I have a free movie ticket for you.";
    std::cout << "\nFahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n" << usrname <<": ";
    getline(std::cin, mOvie);
    std::cout <<"Fahsai: So....which day are you free to go with me?\n" << usrname <<": ";
    getline(std::cin, date);
    std::cout << "Fahsai: " << date <<"....that is OK!!! I'm looking forward to watching "<< mOvie <<" with you.\n" <<  usrname <<": ";
    getline(std::cin, chuunibyou);
    std::cout << "Fahsai: 555+ see you " << date << ". Bye Bye \\(^ ^)/";
    return 0;
}