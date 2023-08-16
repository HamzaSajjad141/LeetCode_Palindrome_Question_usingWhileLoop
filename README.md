# LeetCode Palindrome Checker

Welcome to the "LeetCode Palindrome Checker" repository! This repository contains a C++ program that demonstrates an efficient method to check if a given integer is a palindrome using a while loop.

## Table of Contents

- [Introduction](#introduction)
- [Algorithm Overview](#algorithm-overview)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This repository provides a C++ program that utilizes a while loop to determine whether a given integer is a palindrome. The program showcases how to convert an integer to a string and then compare characters from both ends of the string using two pointers. The solution offers a clear demonstration of palindrome checking.

## Algorithm Overview

The algorithm starts by converting the input integer to a string. It then initializes two pointers, one at the beginning of the string and the other at the end. The while loop continues until the left pointer crosses the right pointer. During each iteration, the characters at the current positions of the pointers are compared. If they are not equal, the number is not a palindrome. Otherwise, the pointers move towards each other until the loop completes. If the loop completes without returning, the number is a palindrome.

## Usage

To run the program on your local machine:

1. Clone this repository using `git clone https://github.com/yourusername/LeetCode_Palindrome_Question_usingWhileLoop.git`
2. Navigate to the cloned directory: `cd LeetCode_Palindrome_Question_usingWhileLoop`
3. Compile the source code using a C++ compiler, e.g., `g++ main.cpp -o palindromeChecker`
4. Run the compiled executable: `./palindromeChecker`
5. Follow the on-screen prompts to enter the integer to check for palindrome.
6. The program will display whether the input integer is a palindrome or not.

## Contributing

Contributions to this repository are encouraged and appreciated! If you have any improvements, bug fixes, or additional features to propose, please follow these steps:

1. Fork this repository.
2. Create a new branch: `git checkout -b new-feature`
3. Make your changes and commit them: `git commit -m 'Add some feature'`
4. Push to the branch: `git push origin new-feature`
5. Create a pull request, describing your changes and improvements.

Your contributions will help enhance the functionality and educational value of this repository.

## License

This project is licensed under the [MIT License](LICENSE).

---
Thank you for exploring this repository and delving into the world of palindrome checking using a while loop in C++!
