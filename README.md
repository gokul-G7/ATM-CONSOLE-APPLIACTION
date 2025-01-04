# ATM-CONSOLE-APPLIACTION
# Automated Teller Machine (ATM) Console Application

## Overview
The ATM Console Application is a basic simulation of an ATM system developed in C++. It provides users with a user-friendly interface to perform banking operations such as checking balance, withdrawing cash, viewing user details, and updating their mobile number. This project demonstrates the use of Object-Oriented Programming (OOP) concepts like classes, encapsulation, and member functions.

## Features
1. **Check Balance**: Allows users to view their current account balance.
2. **Cash Withdraw**: Enables users to withdraw a specified amount of money, provided sufficient balance is available.
3. **Show User Details**: Displays account information, including account number, name, balance, and registered mobile number.
4. **Update Mobile Number**: Updates the registered mobile number after verifying the old mobile number.
5. **Exit**: Exits the application.

## Key Functionalities
- **Authentication**: The user must provide their account number and PIN to access the application.
- **Data Validation**: Ensures input accuracy for operations like cash withdrawal and mobile number update.
- **User Feedback**: Provides appropriate messages for successful operations or errors.

## Code Highlights
- **Encapsulation**: Private member variables store user information, ensuring data security.
- **Reusable Functions**: Member functions like `getBalance()`, `cashWithDraw()`, and `setMobile()` encapsulate specific functionalities.
- **Interactive Console**: Clear prompts and options guide users through the application.

## Workflow
1. User enters account number and PIN for authentication.
2. After successful login, the user is presented with a menu of options.
3. Based on the user’s selection:
   - The balance is displayed.
   - A specified amount is withdrawn from the account.
   - User details are shown.
   - The mobile number is updated.
4. The user can exit the application anytime.

## Example Data
The application initializes with the following data:
- Account Number: 1234567
- Name: Gokul
- PIN: 8901
- Balance: 344560
- Mobile Number: 99769171xx

## How to Run
1. Compile the code using a C++ compiler.
2. Run the executable file.
3. Follow the prompts to interact with the application.

## Limitations
- Limited to a single user.
- Does not support database integration.
- PIN and account details are hardcoded.

## Conclusion
This project is a practical implementation of OOP concepts and serves as a stepping stone for developing more complex banking systems with advanced features like multiple user support, database integration, and enhanced security.

