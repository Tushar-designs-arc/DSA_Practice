/* Ques 1: Write a C++ Program to Check Whether a Number is a Positive or Negative Number. */

// #include <iostream>
// using namespace std;
    
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num != 0)  {
//         if (num > 0) {
//             cout << num << " is a positive number.";
//         }
//         else {
//             cout << num << " is a negative number.";
//         }
//     }
//     else {
//         cout << num << " is neither a positive nor a negative number.";
//     }
    
//     return 0;
// }


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------//

/* Ques 2: Write a Program to Find the Greatest of the Three Numbers. */

// #include <iostream>
// using namespace std;
    
// int main() {
//     int num1, num2, num3;
//     cout << "Enter three numbers: ";
//     cin >> num1 >> num2 >> num3;
    
//     int greatest = num1;

//     if (num2 > greatest) {
//         greatest = num2;
//     }
//     if (num3 > greatest) {
//         greatest = num3;
//     }
    
//     cout << greatest << " is the greatest number." << endl;
//     return 0;
// }


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------//


/* Ques 3: C++ Program To Check Whether Number is Even Or Odd. */

// #include <iostream>
// using namespace std;
    
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num % 2 == 0)
//         cout << num << " is even.";
//     else
//         cout << num << " is odd.";

//     return 0;
// }


/* ------------ Approach 2 ------------ */

// #include <iostream>
// using namespace std;

// // Returns true if n is even, else odd
// bool isEven(int n) { return (n % 2 == 0); }

// // Driver code
// int main() {
//     int n = 247;
//     if (isEven(n) == true) {
//         cout << "Even" << endl;
//     }
//     else {
//         cout << "Odd";
//     }

//     return 0;
// }


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------//
