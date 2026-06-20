#include <iostream>
using namespace std;

int main () {

    string sequence;

    cout << "Enter sequence: ";
    cin >> sequence; 

    int a_count = 0, c_count = 0, g_count = 0, t_count = 0;

    for (int i = 0; i < sequence.length(); i++) {
        char nucleotide = sequence[i];

        if (nucleotide == 'A') {
            a_count++;
        } else if (nucleotide == 'C') {
            c_count++;
        } else if (nucleotide == 'G') {
            g_count++;
        } else if (nucleotide == 'T') {
            t_count++;
        }
    } 


    cout << a_count << " " << c_count << " " << g_count << " " << t_count << endl;

    return 0;
} 
