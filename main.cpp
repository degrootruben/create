#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc > 1) {
        string arg1 = argv[1];
        
        if (arg1 == "school" || arg1 == "s") {        // school    

        } else if (arg1 == "code" || arg1 == "c") {   // code

        } else if (arg1 == "music" || arg1 == "m") {  // music

        } else if (arg1 == "-h" || arg1 == "h" 
                    || arg1 == "help") {              // help
            cout << "Help menu" << endl;
        }
    } else {
        cout << "No arguments found. Use -h for help." << endl;
    }

    return 1;
}