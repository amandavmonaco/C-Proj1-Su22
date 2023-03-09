#include <iostream>

int main() {
    int size;
    char symbol;
    while(true){
        //gets the size of the shapes from the user and intializes size to the size
        std::cout << "\nPlease enter the size: ";
        std::cin >> size;

        //if statements that make sure size is between 5 and 25 inclusive
        if(size < 5)
            continue;
        if(size > 25)
            continue;

        //gets the symbol used for shapes and initializes the symbol to symbol
        std::cout << "Please enter *, $, #, or @: ";
        std::cin >> symbol;

        //if statement that makes sure symbol is *, $, #, or @
        if(symbol != '*' && symbol != '$' && symbol != '#' && symbol != '@')
            continue;

        //for loops for the top line
        for(int j = 1; j < size; j++){
            std::cout << " ";
        } // prints spaces preceding the symbol
        for(int k = 0; k < size; k++){
            std::cout << symbol;
        } // prints the symbol
        for(int l = 1; l < size; l++){
            std::cout << " ";
        } // prints the spaces after the symbol
        std::cout << "\n";
        //end of the top line

        //middle rows start

        int sidespace = size - 2;
        int middlespace = size;
        //variables for the varying space size

        for(int i = 0; i < size - 2; i++){
            for(int j = 0; j < sidespace; j++) {
                std::cout << " ";
            } //prints spaces preceding the first symbol
            std::cout << symbol;
            for(int k = 0; k < middlespace; k++){
                std::cout << " ";
            } //prints spaces in between the symbols
            middlespace += 2; //increases middle space by 2
            std::cout << symbol;
            for(int l = 0; l < sidespace; l++){
                std::cout << " ";
            } //prints spaces after the second symbol
            sidespace -= 1; //decrements the side spaces
            std::cout << "\n";
        }
        //middle rows end

        //creates the bottom line
        for(int i = 0; i < (size * 2) + (size - 2); i++)
            std::cout << symbol;

        std::cout << "\n\n";
        //end of trapezoid

        //start of triangle

        //prints out first top symbol
        std::cout << symbol << "\n";

        //variable for space in middle of triangle
        int trispace = 0;

        //for loop that prints middle rows of triangle
        for(int i = 0; i < size - 2; i++){
            std::cout << symbol;
            for(int k = 0; k < trispace; k++){
                std::cout << " ";
            }
            std::cout << symbol << "\n";
            trispace += 1;
        }

        //for loop for bottom row of triangle
        for(int i = 0; i < size; i++)
            std::cout << symbol;

        std::cout << "\n\n";

        //end of triangle

        //start of parallelogram

        //top of parallelogram start; for loops that print out the top row
        for(int i = 0; i < size - 1; i++){
            std::cout << " ";
        }
        for(int i = 0; i < size; i++){
            std::cout << symbol;
        }
        std::cout << "\n";
        //top of parallelogram end

        //middle of parallelogram start
        //variables for spaces preceding symbols and the middle space
        int firstspace = size - 2;
        int secondspace = size - 2;

        //for loops that create the middle rows for the parallelogram
        for(int i = 0; i < size - 2; i++){
            for(int j = 0; j < firstspace; j++){
                std::cout << " ";
            }
            std::cout << symbol;
            firstspace -= 1;
            for(int k = 0; k < secondspace; k++){
                std::cout << " ";
            }
            std::cout << symbol << "\n";
        }

        //parallelogram middle rows end

        for(int i = 0; i < size; i++){
            std::cout << symbol;
        }
        std::cout << "\n";
    }
    return 0;
}
