#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int mode = 0;
int project = 0;
const int SCHOOL = 1,
          CODE = 2,
          MUSIC = 3,
          PROJECT = 4,
          HELP = 5;

int main(int argc, char *argv[]) {
    if (argc > 1) {
        string arg1 = argv[1];

        if (arg1 == "school" || arg1 == "s") {        // school
            mode = PROJECT;
            project = SCHOOL;
        } else if (arg1 == "code" || arg1 == "c") {   // code
            mode = PROJECT;
            project = CODE;
        } else if (arg1 == "music" || arg1 == "m") {  // music
            mode = PROJECT;
            project = MUSIC;
        } else if (arg1 == "-h" || arg1 == "h" 
                    || arg1 == "help") {              // help
            mode = HELP;
        }
    } else {
        cout << "No arguments found. Use -h for help." << endl;
    }

    if (mode == PROJECT) {
        if (argc > 2) {
            string projectName = argv[2];

            if (project == SCHOOL) {
                
            }
            fs::create_directory(projectName);
        } else {
            cout << "Please provide a project name!" << endl;
        }
    } else if (mode == HELP) {
        cout << "Help menu" << endl;
    } else if (mode == 0) {
        cout << "Error: mode is 0." << endl;
        cin.get();
        return 1;
    }

    return 0;
}