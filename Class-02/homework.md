# C++ Basic Programming Homework

## A. Input, Output & Strings

1. **Take the user's first name and last name and print the full name.**

2. **Take a name from the user and print a greeting message using that name.**

3. **Take a word from the user and print its length.**

4. **Take a character from the user and print its ASCII value.**

5. **Take an ASCII value from the user and print the corresponding character.**

---

## B. Numbers & Arithmetic Operations

6. **Take two numbers from the user and print their sum, difference, product, quotient, and remainder.**

7. **Take two numbers from the user and swap their values using a third variable.**

8. **Take two numbers from the user and swap their values without using a third variable.**

9. **Take a number from the user and print its square, cube, and square root.**

10. **Take two numbers `x` and `y` from the user and calculate `x^y`.**

---

## C. Mathematical Formula-Based Programs

### 11. Simple Interest

**Take Principal, Rate, and Time from the user and calculate Simple Interest and Total Amount.**

**Formula:**

- SI = `(P × R × T) / 100`
- Amount = `P + SI`

---

### 12. Compound Interest

**Take Principal, Rate, and Time from the user and calculate Compound Interest and Total Amount.**

**Formula:**

- Amount = `P × (1 + R/100)^T`
- CI = `Amount - P`

---

### 13. Rectangle

**Take the length and breadth of a rectangle and calculate its area and perimeter.**

**Formula:**

- Area = `Length × Breadth`
- Perimeter = `2 × (Length + Breadth)`

---

### 14. Circle

**Take the radius of a circle and calculate its diameter, circumference, and area.**

**Formula:**

- Diameter = `2 × r`
- Circumference = `2 × π × r`
- Area = `π × r²`

---

### 15. Triangle

**Take the base and height of a triangle and calculate its area.**

**Formula:**

`Area = (Base × Height) / 2`

---

### 16. Equilateral Triangle

**Take the side of an equilateral triangle and calculate its area.**

**Formula:**

`Area = (√3 / 4) × Side²`

---

## D. Unit & Temperature Conversion

### 17. Celsius to Fahrenheit

**Take a temperature in Celsius from the user and convert it into Fahrenheit.**

**Formula:**

`Fahrenheit = (Celsius × 9/5) + 32`

---

### 18. Fahrenheit to Celsius

**Take a temperature in Fahrenheit from the user and convert it into Celsius.**

**Formula:**

`Celsius = (Fahrenheit - 32) × 5/9`

---

### 19. Centimeter Conversion

**Take a distance in centimeters and convert it into meters and kilometers.**

**Formula:**

- Meter = `Centimeter / 100`
- Kilometer = `Centimeter / 100000`

---

### 20. Days Conversion

**Take the total number of days from the user and convert them into years, weeks, and remaining days.**

Assume:

- 1 Year = 365 Days
- 1 Week = 7 Days

**Formula:**

- Years = `Total Days / 365`
- Remaining Days = `Total Days % 365`
- Weeks = `Remaining Days / 7`
- Days = `Remaining Days % 7`

---

## ⭐ Additional Practice: Marks Calculation

### 21. Student Marks

**Take marks of five subjects from the user and calculate the total marks, average marks, and percentage.**

Assume each subject is out of **100 marks**.

**Formula:**

```text
Total = S1 + S2 + S3 + S4 + S5
Average = Total / 5
Percentage = (Total / 500) × 100
```

---

## C++ Concepts to Practice

While solving these programs, students should practice:

- `#include <iostream>`
- `#include <cmath>`
- `using namespace std;`
- `int`, `float`, `double`, `char`, and `string`
- `cin`
- `cout`
- Arithmetic operators: `+`, `-`, `*`, `/`, `%`
- Assignment operator: `=`
- Variables
- Type conversion
- `sqrt()`
- `pow()`
- `M_PI` or `acos(-1)` for π
- Integer division
- Modulus operator `%`

## Instructions

1. Write each program in a separate `.cpp` file.
2. Use meaningful variable names.
3. Take all required values from the user unless the question specifically provides a value.
4. Display clear prompts before taking input.
5. Display the result with a meaningful message.
6. Do not use functions, loops, arrays, or conditional statements unless instructed.
7. Try to solve each problem independently before checking any reference solution.

### Suggested File Names

```text
01_full_name.cpp
02_greeting.cpp
03_word_length.cpp
04_character_ascii.cpp
05_ascii_character.cpp
06_arithmetic_operations.cpp
07_swap_with_third_variable.cpp
08_swap_without_third_variable.cpp
09_square_cube_sqrt.cpp
10_power.cpp
11_simple_interest.cpp
12_compound_interest.cpp
13_rectangle.cpp
14_circle.cpp
15_triangle_area.cpp
16_equilateral_triangle.cpp
17_celsius_to_fahrenheit.cpp
18_fahrenheit_to_celsius.cpp
19_centimeter_conversion.cpp
20_days_conversion.cpp
21_marks_calculation.cpp
```
