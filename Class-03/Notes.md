# C++ Conditional Statements – Homework

## 📚 Instructions

- Solve all programs using **C++**.
- Use `if`, `if-else`, `else-if`, and `nested if` wherever appropriate.
- For questions specifically mentioning `switch`, use the **`switch` statement**.
- Take input from the user wherever required.
- Write clean and properly formatted code.
- Add appropriate comments where necessary.
- Do not use loops or functions unless they have been taught in class.

---

# Part A – Basic `if-else`

### 1. Divisible by 5

Write a program to take a number from the user and check whether the number is divisible by `5` or not.

**Example:**

```text
Enter a number: 25
Output: Number is divisible by 5
```

---

### 2. Positive or Negative

Write a program to take a number from the user and check whether the number is **positive or negative**.

---

### 3. Divisible by 7

Write a program to take a number from the user and check whether the number is divisible by `7` or not.

---

### 4. Check Number Range

Write a program to take a number from the user and check its range according to the following conditions:

```text
0 to 10       → Number is in the range of 0 to 10
11 to 19      → Number is in the range of 11 to 19
20 and above  → Number is greater than or equal to 20
```

Also handle negative numbers appropriately.

---

### 5. Vowel or Consonant

Write a program to take a character from the user and check whether the character is a **vowel or consonant**.

Consider both uppercase and lowercase vowels.

**Example:**

```text
Input: A
Output: Vowel

Input: b
Output: Consonant
```

---

# Part B – Multiple Conditions

### 6. Maximum Between Two Numbers

Write a program to take two numbers from the user and find the **maximum number**.

Also handle the case when both numbers are equal.

---

### 7. Maximum Between Three Numbers

Write a program to take three numbers from the user and find the **maximum number**.

---

### 8. Positive, Negative or Zero

Write a program to take a number from the user and check whether the number is:

```text
Positive
Negative
Zero
```

---

### 9. Divisible by 5 and 11

Write a program to take a number from the user and check whether the number is divisible by **both 5 and 11**.

**Example:**

```text
Input: 55
Output: Number is divisible by 5 and 11
```

---

### 10. Even or Odd

Write a program to take a number from the user and check whether the number is **even or odd**.

---

### 11. Leap Year

Write a program to take a year from the user and check whether it is a **leap year or not**.

### Hint

A year is a leap year if:

```text
Year is divisible by 400
OR
Year is divisible by 4 but not divisible by 100
```

---

### 12. Alphabet or Not

Write a program to take a character from the user and check whether the character is an **alphabet or not**.

**Example:**

```text
Input: A
Output: Alphabet

Input: 5
Output: Not an Alphabet
```

---

### 13. Vowel or Consonant

Write a program to input an alphabet and check whether it is a **vowel or consonant**.

Consider:

```text
a, e, i, o, u
A, E, I, O, U
```

---

# Part C – `switch` Statement

### 14. Alphabet, Digit or Special Character

Write a program to input any character and check whether it is:

```text
Alphabet
Digit
Special Character
```

**Requirement:** Use `switch-case`.

---

### 15. Uppercase or Lowercase

Write a program to input a character and check whether it is:

```text
Uppercase Alphabet
Lowercase Alphabet
```

**Requirement:** Use `switch-case`.

---

### 16. Week Number to Weekday

Write a program to input a week number and print the corresponding weekday.

```text
1 → Monday
2 → Tuesday
3 → Wednesday
4 → Thursday
5 → Friday
6 → Saturday
7 → Sunday
```

**Requirement:** Use `switch-case`.

If the user enters a number outside `1–7`, print:

```text
Invalid Week Number
```

---

### 17. Month Number and Number of Days

Write a program to input a month number and print the number of days in that month.

```text
January   → 31
February  → 28
March     → 31
April     → 30
May       → 31
June      → 30
July      → 31
August    → 31
September → 30
October   → 31
November  → 30
December  → 31
```

**Requirement:** Use `switch-case`.

For invalid input, print:

```text
Invalid Month Number
```

---

# Part D – Practical Conditional Problems

### 18. Count Notes in a Given Amount

Write a program to calculate the total number of currency notes required for a given amount.

Use the following denominations:

```text
₹500
₹200
₹100
₹50
₹20
₹10
₹5
₹2
₹1
```

### Example

For:

```text
Amount = 3887
```

Expected output:

```text
500 notes are : 7
200 notes are : 1
100 notes are : 1
50 notes are : 1
20 notes are : 1
10 notes are : 1
5 notes are : 1
2 notes are : 1
1 notes are : 0
```

### Hint

Use:

```cpp
/
%
```

For example:

```cpp
int notes = amount / 500;
amount = amount % 500;
```

Then continue with the remaining amount.

---

# Part E – Triangle Problems

### 19. Valid Triangle Using Angles

Write a program to input the three angles of a triangle and check whether the triangle is **valid or invalid**.

### Condition

A triangle is valid if:

```text
Angle1 + Angle2 + Angle3 = 180
```

Also make sure that every angle is greater than `0`.

---

### 20. Valid Triangle Using Sides

Write a program to input the three sides of a triangle and check whether the triangle is **valid or invalid**.

### Condition

A triangle is valid if:

```text
a + b > c
b + c > a
a + c > b
```

---

### 21. Type of Triangle

Write a program to input three sides of a triangle and check whether it is:

```text
Equilateral
Isosceles
Scalene
```

### Conditions

**Equilateral:**

```text
a == b && b == c
```

**Isosceles:**

```text
a == b
OR
b == c
OR
a == c
```

**Scalene:**

```text
a != b && b != c && a != c
```

First check whether the triangle is valid.

---

# Part F – Profit and Loss

### 22. Calculate Profit or Loss

Write a program to input:

```text
Cost Price (CP)
Selling Price (SP)
```

and calculate whether there is:

```text
Profit
Loss
No Profit No Loss
```

### Conditions

```text
SP > CP  → Profit
SP < CP  → Loss
SP == CP → No Profit No Loss
```

### Formula

```text
Profit = SP - CP

Loss = CP - SP
```

---

# Part G – Marks and Grade

### 23. Calculate Percentage and Grade

Write a program to input marks of five subjects:

```text
Physics
Chemistry
Biology
Mathematics
Computer
```

Calculate:

1. Total marks
2. Percentage
3. Grade

Assume each subject is out of `100`.

### Grading Criteria

```text
Percentage >= 90 → Grade A
Percentage >= 80 → Grade B
Percentage >= 70 → Grade C
Percentage >= 60 → Grade D
Percentage >= 40 → Grade E
Percentage < 40  → Grade F
```

---

# Part H – Employee Salary

### 24. Calculate Gross Salary

Write a program to input the **basic salary** of an employee and calculate the gross salary according to the following conditions.

### Salary Structure

#### Basic Salary ≤ ₹10,000

```text
HRA = 20%
DA  = 80%
```

#### Basic Salary ≤ ₹20,000

```text
HRA = 25%
DA  = 90%
```

#### Basic Salary > ₹20,000

```text
HRA = 30%
DA  = 95%
```

### Formula

```text
HRA Amount = Basic Salary × HRA / 100

DA Amount = Basic Salary × DA / 100

Gross Salary = Basic Salary + HRA Amount + DA Amount
```

> Use `float` or `double` for salary calculations because percentages can produce decimal values.

---

# Part I – Electricity Bill

### 25. Calculate Electricity Bill

Write a program to input electricity units and calculate the total electricity bill according to the following conditions.

### Electricity Charges

```text
First 50 units       → ₹0.50/unit
Next 100 units       → ₹0.75/unit
Next 100 units       → ₹1.20/unit
Above 250 units      → ₹1.50/unit
```

An additional **20% surcharge** is added to the bill.

---

## Slab Calculation

### If units ≤ 50

```text
Bill = units × 0.50
```

### If units are between 51 and 150

```text
First 50 units → 50 × 0.50
Remaining units → (units - 50) × 0.75
```

### If units are between 151 and 250

```text
First 50 units  → 50 × 0.50
Next 100 units  → 100 × 0.75
Remaining units → (units - 150) × 1.20
```

### If units are above 250

```text
First 50 units   → 50 × 0.50
Next 100 units   → 100 × 0.75
Next 100 units   → 100 × 1.20
Remaining units  → (units - 250) × 1.50
```

### Surcharge

After calculating the bill:

```text
Surcharge = Bill × 20 / 100

Final Bill = Bill + Surcharge
```

---

# 📌 Homework Rules

For every program:

### 1. Take Input

Do not hard-code the values.

❌ Avoid:

```cpp
int number = 25;
```

Prefer:

```cpp
int number;

cout << "Enter a number: ";
cin >> number;
```

### 2. Display Meaningful Output

❌ Avoid:

```text
25
```

Prefer:

```text
25 is divisible by 5
```

### 3. Use Proper Variable Names

Prefer:

```cpp
int number;
int marks;
int salary;
int month;
```

Avoid unnecessary names such as:

```cpp
int x;
int a;
int z;
```

### 4. Follow Proper Formatting

Example:

```cpp
#include <iostream>
using namespace std;

int main(){

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if(number % 2 == 0){
        cout << "Number is even";
    }
    else{
        cout << "Number is odd";
    }

    return 0;
}
```

---

# 📌 Concepts Covered

Through this homework, you will practice:

```text
if
if-else
else-if
nested if
logical operators
relational operators
arithmetic operators
modulus operator
character handling
ASCII values
switch-case
break
default
multiple cases
range checking
percentage calculation
profit/loss
triangle validation
salary calculation
electricity bill calculation
```

---

# 📌 Important Operators

| Operator | Meaning | Example |
|---|---|---|
| `==` | Equal to | `a == b` |
| `!=` | Not equal | `a != b` |
| `>` | Greater than | `a > b` |
| `<` | Less than | `a < b` |
| `>=` | Greater than or equal | `a >= b` |
| `<=` | Less than or equal | `a <= b` |
| `&&` | AND | `a > 0 && a < 10` |
| `||` | OR | `a == 1 || a == 2` |
| `%` | Remainder | `number % 5` |
| `+` | Addition | `a + b` |
| `-` | Subtraction | `a - b` |
| `*` | Multiplication | `a * b` |
| `/` | Division | `a / b` |

---

# 📌 Submission Checklist

Before submitting your homework, make sure:

- [ ] All 25 programs are completed.
- [ ] Every program takes input from the user.
- [ ] Proper variable names are used.
- [ ] Output is clearly displayed.
- [ ] `switch` is used where mentioned.
- [ ] `break` is used properly.
- [ ] `default` is handled in switch programs.
- [ ] Code is properly indented.
- [ ] Programs compile without errors.
- [ ] Programs are tested with multiple inputs.
- [ ] Edge cases are tested.

---

# 🎯 Challenge

After completing all programs, try solving them **without looking at your class notes**.

The main goal is not just to complete the programs, but to understand:

```text
Problem
   ↓
Condition
   ↓
Operator
   ↓
if / else-if / else / switch
   ↓
Output
```

> **Focus on understanding the condition before writing the code.**
