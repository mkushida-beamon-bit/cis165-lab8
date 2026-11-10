## CIS 165 - Lab 8: Geometry Calculator
# Course Section: CIS-165-W099
# Initial Plan

The program will display a menu with four choices: calculate the area of a circle, rectangle, triangle, or quit. The user will enter a menu choice and the dimensions needed for the selected shape.
I will use an integer variable for the menu choice and double variables for the radius, length, width, base, height, and calculated area. I will also use a named constant called PI with a value of 3.14159.
A switch statement will determine which calculation to perform. The circle area will be calculated using PI multiplied by the radius twice. The rectangle area will use length multiplied by width. The triangle area will use base multiplied by height multiplied by 0.5.
The program will check for negative dimensions before calculating. Zero will be allowed. Invalid menu choices will display an error, and choice 4 will exit without asking for dimensions. No arrays or loops are needed.

# Compile and Run Instructions
Compile the program using:
bash
g++ -std=c++17 -Wall -Wextra geometry.cpp -o geometry

Run the program using:

bash
./geometry

The program displays area results using five decimal places. Each test is performed in a separate run.

# Test Results
Test	Input	Expected Result	Actual Program Output	Match
1	Choice 1, radius 2	Area 12.56636	Circle area: 12.56636	Yes
2	Choice 2, length 3, width 4.5	Area 13.50000	Rectangle area: 13.50000	Yes
3	Choice 3, base 5, height 3	Area 7.50000	Triangle area: 7.50000	Yes
4	Choice 4	Exits without dimensions or area	Exiting Geometry Calculator.	Yes
5	Choice 0	Invalid-choice error	Error: Invalid menu choice. Please enter 1-4.	Yes
6	Choice 5	Invalid-choice error	Error: Invalid menu choice. Please enter 1-4.	Yes
7	Choice 1, radius -1	Negative-dimension error	Error: Radius cannot be negative.	Yes
8	Choice 2, length -1, width 4	Negative-dimension error	Error: Dimensions cannot be negative.	Yes
9	Choice 2, length 3, width -1	Negative-dimension error	Error: Dimensions cannot be negative.	Yes
10	Choice 3, base -1, height 3	Negative-dimension error	Error: Dimensions cannot be negative.	Yes
11	Choice 3, base 5, height -1	Negative-dimension error	Error: Dimensions cannot be negative.	Yes
12	Choice 1, radius 0	Area 0.00000	Circle area: 0.00000	Yes
Additional	Choice 2, length 6, width 2	Area 12.00000	Rectangle area: 12.00000	Yes

# Additional Test Explanation
The additional test uses a rectangle with a length of 6 and a width of 2.
The expected calculation is:
6 × 2 = 12
This test checks that the rectangle calculation works correctly with different positive dimensions.

# Final Compilation and Verification
Final source compiled using C++17: [Record result]
All required tests rerun: [Record result]
Temporary test changes restored: [Describe changes or write None]
Final source files checked: [Record result]

## Code Explanation
# How does your selection logic send each choice to the right calculation?
The switch statement checks the user's menu choice. Each case contains the instructions for the corresponding calculation. The default case displays an error when the choice is not between 1 and 4.

# Why is radius * radius correct while radius ^ 2 is not?
The asterisk is the multiplication operator in C++. The caret is a bitwise XOR operator, not an exponent operator. Multiplying the radius by itself correctly squares it.

# Why does the triangle calculation use 0.5 rather than integer division 1 / 2?
Integer division makes 1 / 2 equal zero. Using 0.5 makes the calculation use floating-point arithmetic and gives the correct triangle area.

# Where do you check negative dimensions, and how do you handle zero and choice 4?
Each shape checks its dimensions with an if statement before calculating the area. Negative dimensions display an error. Zero is allowed because it is not negative. Choice 4 exits without asking for dimensions or calculating an area.
