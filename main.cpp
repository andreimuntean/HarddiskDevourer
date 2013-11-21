#include <fstream>
using namespace std;

int main()
{
    ofstream file("output.txt");
    string text = "IF YOU THINK THIS IS OVER THEN YOU'RE WRONG\n";
    while (true)
    {
        file << text;
    }
}
