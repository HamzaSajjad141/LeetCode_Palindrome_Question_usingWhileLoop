#include <iostream>
#include <string>
using namespace std;

// Function to check if a given integer is a palindrome
bool isPalindrome(int x)
{
    // Convert the integer to a string
    string strr = to_string(x);

    // Initialize two pointers for comparison, one starting from the left and the other from the right
    int left = 0;
    int right = strr.length() - 1;

    // Continue looping until the left pointer crosses the right pointer
    while (left < right) {
        // Compare characters at the current positions of the left and right pointers
        if (strr[left] != strr[right]) {
            // If characters are not equal, the number is not a palindrome
            return false;
        }
        // Move the pointers towards each other
        left++;
        right--;
    }

    // If the loop completes without returning, the number is a palindrome
    return true;
}

int main()
{
    int num;
    bool a;

    // Prompt the user to input a number
    cout << "Enter the number (palindrome) : ";
    cin >> num;

    // Call the isPalindrome function to check if the number is a palindrome
    a = isPalindrome(num);

    // Display the result
    if (a) {
        cout << "True " << endl;
    }
    else {
        cout << "False " << endl;
    }
}
