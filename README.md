# Binary and Decimal Converter Quiz

Quiz program I made based on how binary and decimals can be converted manually by hand.
Didn't implement hexadecimals or octals because I'm lazy.
Mainly made to help me learn c++ syntax better...
---------------------------------------------------------------------------------------------------------------------------------------

# Yapping here:

---------------------------------------------------------------------------------------------------------------------------------------
# Overview: 
This program is a simple quiz program that helps users practice converting numbers between binary and decimal bases. It generates random numbers in one base (binary or decimal) and prompts the user to convert them to the other base. The program checks the user's answer and provides feedback on whether the answer is correct.

---------------------------------------------------------------------------------------------------------------------------------------
# Features

Randomly generates binary or decimal numbers for conversion.
Converts binary numbers to decimal.
Converts decimal numbers to binary.
Provides feedback on the user's answer.
Allows the user to continue quizzing or exit.

---------------------------------------------------------------------------------------------------------------------------------------

# How It Works
Initialization: The program initializes random number generation and starts the main quiz loop.
Random Base Selection: It randomly selects a base (binary or decimal) and its conversion counterpart.
Number Generation: It generates a random number in the selected base.
Conversion: The program converts the generated number to the other base.
User Interaction: It prompts the user for their answer and provides feedback on whether it is correct.
Continuation: After each question, the user is asked if they want to continue or exit the quiz.

---------------------------------------------------------------------------------------------------------------------------------------

# Functions
randomBinary(): Generates a random binary number as a string.
randomDecimal(): Generates a random decimal number as a string.
binaryToDecimal(int binary): Converts a binary number (given as an integer) to a decimal string.
decimalToBinary(int decimal): Converts a decimal number (given as an integer) to a binary string.

---------------------------------------------------------------------------------------------------------------------------------------

# Usage
Compile the program using a C++ compiler.
Run the executable.
