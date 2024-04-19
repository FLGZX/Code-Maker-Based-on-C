#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<stack>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<cstdio>
#include<iostream>
#include<windows.h>
#include<cmath>
#include<cstring>
#include<string>


using namespace std;

string in;

int main(void) {
    cout << "     Welcome to CMBOC" << endl;
    cout << "---------Get ready---------" << endl;

    while (true) {
        string input;
        getline(cin, input);

        if (input.substr(0, 4) == "set(") {

            size_t end_pos = input.find(')', 4);

            if (end_pos != string::npos) {

                size_t length = end_pos - 4;

                if (length > 0) {

                    in = input.substr(4, length);


                }
                else {

                    cout << "Error:: No content between 'set(' and ')'" << endl;

                }
            }
            else {

                cout << "Error:: No closing parenthesis found." << endl;

            }
        }
        else if (input.substr(0, 4) == "out("){

            cout << in << endl;

        }
        else if (input.substr(0, 6) == "over()") {

            cout << "------------Over----------" << endl;
            break;

        }
        else {

            cout << "Error:: Input format error" << endl;

        }
    }

        return 0;
}


