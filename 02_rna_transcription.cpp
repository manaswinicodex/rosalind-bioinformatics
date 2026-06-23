#include <iostream>
using namespace std;

int main (){

    string dna; 
    string rna; 

    cout << "Enter DNA sequence: ";
    cin >> dna; 

    for (int i = 0; i < dna.length(); i++) {
        char nucleotide = dna[i];

    
    
    if (nucleotide == 'T'){
        rna += 'U';
    }
    else {
        rna += nucleotide; 
    }


}
 cout << "Transcribed RNA: " << rna; 

}