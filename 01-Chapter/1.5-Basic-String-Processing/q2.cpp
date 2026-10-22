/*
    This is question 2 Chapter 1.5 - Basic-String-Processing
    Page 31
*/
/*
    I am given two strings T and P. I need to find all the starting
    positions for every occurence of the string P into string T. If there
    aren't any, i should output -1
*/

#include <iostream>
#include <vector>
#include <string>

std::vector<size_t> positions;
int main() {
    std::string T;
    std::string P;

    std::getline(std::cin, T);
    std::getline(std::cin, P);

    size_t sizeOfT = T.size();
    size_t sizeOfP = P.size();

    if(sizeOfP > sizeOfT) {
        std::cout<<-1<<'\n';
        return 0;
    }

    for(size_t i = 0; i <= sizeOfT - sizeOfP; i++) {
        std::string window = T.substr(i, sizeOfP);

        if(window == P)
            positions.push_back(i);
    }

    if(positions.empty()) {
        std::cout<<-1<<'\n';
        return 0;
    }

    for(size_t pos : positions)
        std::cout<<pos<<" ";
    std::cout<<'\n';
    return 0;
}