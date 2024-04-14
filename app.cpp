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


        string uin = input;

        if (uin.substr(0, 4) == "over") {

            cout << "------------Over----------" << endl;
            
            break;

        }



        if (uin.substr(0, 4) == "out(") {

            size_t end_pos = uin.find(')', 4);

            if (end_pos != string::npos) {

                size_t length = end_pos - 4;

                if (length > 0) {

                    cout << uin.substr(4, length) << endl;

                }

                else {

                    cout << "Error:: No content between 'out(' and ')'" << endl;

                }

            }
            else {

                cout << "Error:: No closing parenthesis found." << endl;

            }
        }
        else {

            cout << "Error:: Input format error" << endl;

        }


    }

    return 0;
}