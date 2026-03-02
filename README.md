# ATM System V1

**ATM System V1** is a console-based ATM simulation project developed using C++.  
This project is designed as a training tool for beginners in programming, allowing the user to interact with an ATM interface to check balances, withdraw money, and deposit funds.  
The project aims to learn the fundamental principles of programming, such as functions, loops, conditionals, and user input/output.  
This system is a foundational step in learning programming using C++ and serves as a practical experience for handling basic financial data in software applications.

---

## 📌 **How It Works**

1. **Card and Password Validation**  
   The user must enter their credit card number followed by the correct password to access the menu.

2. **ATM Menu Options**  
   The user has the following options:
   - Check balance
   - Withdraw money (with error handling in case of insufficient funds)
   - Deposit money into their account

3. **Transaction Process**  
   After selection, the program validates whether the requested action can be completed (e.g., sufficient balance for withdrawal) and updates the balance accordingly.

4. **Multiple Attempts**  
   If the user enters incorrect information (credit card or password), the program allows up to 4 attempts before returning to the card input screen.

---

## 🎯 **Features**

- **Multiple Card Support**: The system handles three different cards with different balances and passwords.
- **Transaction Handling**: Users can deposit, withdraw, and check their account balance.
- **Password Protection**: The system verifies user identity with a password input for each card.
- **Error Handling**: The system checks for sufficient funds during withdrawals and handles incorrect password attempts.

---

## 📈 **Future Improvements (Planned for V2)**

- **Enhanced Security**: Implement stronger password security.
- **Interest Calculation**: Add a feature to calculate interest on the balance over time.
- **ATM Operations Logs**: Log all ATM transactions for monitoring and debugging purposes.
- **Improved User Interface**: Enhance the console UI to make it more intuitive.

---

## 📝 **Note**

This version of the ATM system is a beginner-level project and serves as a tool for new programmers to practice using console-based programming. It is a foundational exercise aimed at understanding how to handle user input and execute basic financial operations programmatically. The next version will build upon this foundation by adding more advanced features and improving overall security and functionality.

---

# **Best Regards**