/*
    This is my solution for question one from Basic String Processing Skills Chapter 1
    Page 31.
*/
/*
    Simplified requirement : You get a text file with letters and numbers,
    You need to read them line by line until the first occurence of a line 
    that starts with 7 periods "......."
    You need to concatenate all the lines with a space between them.
    There are no trailing spaces for any line and every line ends in a newline charachter
*/

#include <fstream>
#include <string>

std::ifstream fin("q1input.txt");
std::ofstream fout("q1output.txt");

int main() {
    if(!fin.is_open()) {
        return -1;
    }

    std::string line;
    std::string result = "";
    bool seenFirst = false;
    while(std::getline(fin, line)) {
        if(!line.compare(0, 7, "......."))
            break;
        
        if(seenFirst)
            result += " ";
        else
            seenFirst = true;
        
        result += line;
    }

    fout<<result<<std::endl;
    return 0;
}