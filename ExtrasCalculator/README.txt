The Extras Calculator

Hey there! Thanks for checking out my second C++ project. After successfully building a Funny Story Generator, I decided to step up the logic and tackle a Command Line Interface (CLI) Calculator.

But I didn't want to just make a boring normal calculator, so I added some extra features like a random number generator and a coin flipper with dad jokes included.

---

--> Features

* Standard Math: Addition, Subtraction, Multiplication, and Division.
* Power Moves: Exponentiation functionality using the cmath library.
* Random Number Generator: Give it a minimum and maximum bound, and it will generate a random integer between them using C++'s random library.
* Coin Flip: Can't make a decision? Flip a coin! Randomly outputs a heads or tails joke.
* Continuous Loop: Uses a do-while loop that handles user confirmation (Y/N) so you can run multiple calculations without the program shutting down.

---

--> What I Learned Building This

This project was a massive learning experience and taught me a lot about how C++ actually works under the hood. Some key takeaways:

* Iterative Development: I learned the hard way that the "Big Bang" approach (coding everything at once) is a trap. I refactored my workflow to build and test one feature at a time.
* Pass-by-Reference (&): I mastered using references in my math and input functions to safely modify original variables in memory instead of messing with copies.
* Control Flow and Scoping: Implemented switch statements for the menu selection and properly handled variable scoping inside loops.
* Compiler Locks: Figured out how to handle "Permission denied" errors when an .exe file gets stuck running invisible in the background.

---

--> How to Run

1. Clone this repository to your local machine.
2. Compile the code using a C++ compiler (like GCC/MinGW):
g++ calculator.cpp -o calculator
3. Run the executable:
* Windows: calculator.exe
* Mac/Linux: ./calculator



---

Next stop: A Text-Based RPG with storytelling and combat mechanics! Keep grinding!