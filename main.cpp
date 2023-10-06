#include <iostream>
#include "Stackt.cpp"
using namespace std;

int moves = 0; //global variable to count and store the number of moves taken to move all the discs to the destination
void Towers(int N, Stackt<int> &Source, Stackt<int> &Target, Stackt<int> &Aux){ //recursive function, carries out the towers of hanoi problem
    int disc;
    if(N == 1){ //one disc
        Source.pop(disc); //from source to destination directly
        Target.push(disc);

        cout << "Source: "; Source.displayStack(); //displaying stacks after every move 
        cout << "Auxiliary: "; Aux.displayStack();
        cout << "Target: "; Target.displayStack(); cout <<endl;

        moves ++; //incrementing the number of moves taken
    }
    else{
        Towers(N -1, Source, Aux, Target); //recursion, switched to moving from source to aux through target

        Source.pop(disc); //from source to destination directly
        Target.push(disc);

        cout << "Source: "; Source.displayStack();
        cout << "Auxiliary: "; Aux.displayStack();
        cout << "Target: "; Target.displayStack(); cout <<endl;

        moves ++;

        Towers(N - 1, Aux, Target, Source); //recursion, switched to moving from aux to target through source
    }
}

int main() {
    int noOfDiscs, noOfMoves;

    cout << "Please enter the number of discs:" <<endl;
    cin >> noOfDiscs;
    Stackt<int> Source(noOfDiscs); Stackt<int> Target(noOfDiscs); Stackt<int> Aux(noOfDiscs); //declares the pegs' stacks
    for(int i = 0; i < noOfDiscs; i++){ //filling in the source peg
        Source.push(i);
    }
    cout << "Start:" <<endl;
    cout << "Source: "; Source.displayStack(); //displaying stacks at the start
    cout << "Auxiliary: "; Aux.displayStack();
    cout << "Target: "; Target.displayStack(); cout <<endl;

    cout << "Steps:" <<endl;
    Towers(noOfDiscs, Source, Target, Aux); //towers of hanoi
    noOfMoves = moves;
    cout << "Number of moves needed: " << noOfMoves <<endl;

    return 0;
}
