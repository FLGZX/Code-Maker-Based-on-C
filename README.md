

Latest update:

Now out() needs to be run in conjunction with the set() function. Input set() first before outputting

Last update：

Welcome message: The program first outputs the welcome message "Welcome to CMBOC" and "--- Get ready ---".
Infinite loop: The program enters a while (true) infinite loop, which means that the program will continue to run unless a specific exit condition is encountered.
Input reception: Within the loop, the program uses getline (cin, input); Read a line of string from standard input and store it in the input variable.
Command parsing: The program checks the first few characters of the input string to determine the operation that the user wants to perform:
If the input string starts with "over()", the program outputs "-------- Over--------" and exits the loop, thus ending the program.
If the input string starts with "out (", the program looks for a closed right parenthesis and outputs the content between "out (" and ")". If the closed right bracket cannot be found or there is no content between "out (" and ")", the program will output the corresponding error message.
If the format of the input string is neither "over()" nor "out()", the program will output "Error:: Input format error" to indicate an input format error.
Program End: When the program exits the while loop, it returns 0, indicating that the program has ended normally.
