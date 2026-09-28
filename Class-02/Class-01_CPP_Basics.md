# 📘 Class 01 – C++ Basics

Welcome to the first class of **DSA with C++**.

In this class, we will build the foundation required to start programming in C++ and gradually move towards Data Structures and Algorithms.

---

## 🎯 Learning Objectives

By the end of this class, students will be able to:

- Understand the basic structure of a C++ program
- Print output using `cout`
- Use `endl`
- Write a basic addition program
- Write a Simple Interest program
- Understand type casting
- Understand implicit and explicit type casting
- Use C-style casting and `static_cast`
- Understand ASCII values
- Convert characters to ASCII values
- Convert ASCII values back to characters
- Perform basic character arithmetic

---

# 1. Structure of a C++ Program

A basic C++ program follows this structure:

```cpp
#include <iostream>

using namespace std;

int main() {

    // Program statements

    return 0;
}
```

## Explanation

### `#include <iostream>`

```cpp
#include <iostream>
```

`iostream` stands for **Input/Output Stream**.

It provides input and output functionality such as:

- `cout` → used for output
- `cin` → used for input

`#include` is a **preprocessor directive** that makes the required header available to the program.

---

### `using namespace std;`

```cpp
using namespace std;
```

`cout` and `cin` are part of the `std` namespace.

Without `using namespace std;`, we write:

```cpp
std::cout << "Hello World!";
```

With:

```cpp
using namespace std;
```

we can write:

```cpp
cout << "Hello World!";
```

> For beginner programs, `using namespace std;` makes the syntax easier to understand. In larger projects, explicitly using `std::` can help avoid naming conflicts.

---

### `int main()`

```cpp
int main() {

}
```

`main()` is the **starting point of a C++ program**.

When the program runs, execution begins from the `main()` function.

The keyword `int` means that the function returns an integer value.

---

### `return 0;`

```cpp
return 0;
```

It indicates that the program has completed successfully.

---

## Basic Program Flow

```text
        C++ Program
             ↓
       #include
             ↓
   using namespace std
             ↓
         main()
             ↓
     Program Statements
             ↓
        return 0
```

---

# 2. Printing Output

In C++, we use `cout` to print output on the screen.

## Basic Example

```cpp
#include <iostream>
using namespace std;

int main() {

    cout << "Hello World!";

    return 0;
}
```

### Output

```text
Hello World!
```

---

## Printing Multiple Statements

```cpp
#include <iostream>
using namespace std;

int main() {

    cout << "Hello World!";
    cout << "Welcome to C++";

    return 0;
}
```

### Output

```text
Hello World!Welcome to C++
```

Both statements are printed on the same line because no newline was added.

---

# 3. `endl`

`endl` is used to move the cursor to the next line.

Example:

```cpp
#include <iostream>
using namespace std;

int main() {

    cout << "Hello World!" << endl;
    cout << "Welcome to C++";

    return 0;
}
```

### Output

```text
Hello World!
Welcome to C++
```

Another example:

```cpp
cout << "Line 1" << endl;
cout << "Line 2" << endl;
cout << "Line 3" << endl;
```

Output:

```text
Line 1
Line 2
Line 3
```

---

# 4. Printing Variables

We can also print the value stored inside a variable.

```cpp
#include <iostream>
using namespace std;

int main() {

    int age = 20;

    cout << age;

    return 0;
}
```

Output:

```text
20
```

We can combine text and variables:

```cpp
cout << "Age = " << age;
```

Output:

```text
Age = 20
```

---

# 5. Addition Program

Let's write our first mathematical program.

We will add two numbers.

```cpp
#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 20;

    int sum = a + b;

    cout << "Sum = " << sum;

    return 0;
}
```

### Output

```text
Sum = 30
```

---

## Understanding the Program

```cpp
int a = 10;
int b = 20;
```

We have two variables:

```text
a = 10
b = 20
```

Then:

```cpp
int sum = a + b;
```

The calculation becomes:

```text
sum = 10 + 20
sum = 30
```

Therefore:

```cpp
cout << sum;
```

prints:

```text
30
```

---

## Dry Run

| Variable | Value |
|----------|------:|
| `a` | 10 |
| `b` | 20 |
| `sum` | 30 |

---

# 6. Simple Interest Program

Simple Interest is calculated using the formula:

```text
SI = (P × R × T) / 100
```

Where:

| Symbol | Meaning |
|--------|---------|
| `P` | Principal Amount |
| `R` | Rate of Interest |
| `T` | Time in Years |
| `SI` | Simple Interest |

---

## Example

Suppose:

```text
P = 5000
R = 8
T = 2
```

Then:

```text
SI = (5000 × 8 × 2) / 100
SI = 800
```

---

## C++ Program

```cpp
#include <iostream>
using namespace std;

int main() {

    float principal = 5000;
    float rate = 8;
    float time = 2;

    float SI = (principal * rate * time) / 100;

    cout << "Simple Interest = " << SI;

    return 0;
}
```

### Output

```text
Simple Interest = 800
```

---

# 7. Type Casting

## What is Type Casting?

**Type casting** means converting a value from one data type to another data type.

For example:

```cpp
int a = 10;

float b = (float)a;
```

Here:

```text
int → float
```

The integer value is converted into a floating-point value.

---

# 8. Why Do We Need Type Casting?

Consider this program:

```cpp
#include <iostream>
using namespace std;

int main() {

    int a = 5;
    int b = 2;

    cout << a / b;

    return 0;
}
```

### Output

```text
2
```

Why did we get `2` instead of `2.5`?

Because both `a` and `b` are integers:

```text
5 / 2 = 2
```

Integer division removes the fractional part.

---

## Using Type Casting

```cpp
#include <iostream>
using namespace std;

int main() {

    int a = 5;
    int b = 2;

    float result = (float)a / b;

    cout << result;

    return 0;
}
```

### Output

```text
2.5
```

Here:

```cpp
(float)a
```

converts `a` from `int` to `float`.

So the calculation becomes:

```text
5.0 / 2
= 2.5
```

---

# 9. Types of Type Casting

At a basic level, type conversion can be understood as:

```text
              Type Casting
                   │
          ┌────────┴────────┐
          ↓                 ↓
      Implicit           Explicit
      Casting             Casting
```

---

# 10. Implicit Type Casting

**Implicit type casting** happens automatically.

The programmer does not explicitly write the conversion.

## Example

```cpp
#include <iostream>
using namespace std;

int main() {

    int a = 10;
    float b = a;

    cout << b;

    return 0;
}
```

### Output

```text
10
```

The conversion happens automatically:

```text
int
 ↓
float
```

The compiler performs the conversion.

---

## Another Example

```cpp
int a = 10;

double b = a;

cout << b;
```

Here:

```text
int → double
```

happens automatically.

---

# 11. Explicit Type Casting

**Explicit type casting** happens when the programmer manually tells the compiler to convert a value.

Example:

```cpp
int a = 5;
int b = 2;

float result = (float)a / b;
```

Here:

```cpp
(float)a
```

is an explicit conversion.

---

## C-style Cast

One common syntax is:

```cpp
(float)a
```

Example:

```cpp
int a = 5;
int b = 2;

float result = (float)a / b;

cout << result;
```

Output:

```text
2.5
```

---

# 12. `static_cast`

C++ also provides a dedicated casting operator called `static_cast`.

Example:

```cpp
int a = 5;
int b = 2;

float result = static_cast<float>(a) / b;

cout << result;
```

Output:

```text
2.5
```

### Syntax

```cpp
static_cast<new_data_type>(value)
```

Example:

```cpp
static_cast<float>(a)
```

This means:

```text
Convert a into float
```

> `static_cast` is generally preferred in modern C++ because the intended conversion is clearer than a C-style cast.

---

# 13. Difference Between Implicit and Explicit Casting

| Implicit Casting | Explicit Casting |
|------------------|------------------|
| Happens automatically | Done manually |
| Programmer does not specify the conversion | Programmer specifies the conversion |
| Example: `float b = a;` | Example: `(float)a` |
| Compiler performs the conversion | Programmer requests the conversion |

---

# 14. Common Examples

```cpp
int a = 10;

float b = a;                    // Implicit
float c = (float)a;              // Explicit
float d = static_cast<float>(a); // Explicit
```

---

# 15. ASCII Values

## What is ASCII?

ASCII stands for:

**American Standard Code for Information Interchange**

Computers represent characters using numeric codes.

For example:

```text
A → 65
B → 66
C → 67
```

Therefore, the character `'A'` has the ASCII value `65`.

---

# 16. Important ASCII Values

## Uppercase Letters

```text
A → Z
65 → 90
```

| Character | ASCII |
|-----------|------:|
| `A` | 65 |
| `B` | 66 |
| `C` | 67 |
| `D` | 68 |
| `E` | 69 |
| `Z` | 90 |

---

## Lowercase Letters

```text
a → z
97 → 122
```

| Character | ASCII |
|-----------|------:|
| `a` | 97 |
| `b` | 98 |
| `c` | 99 |
| `d` | 100 |
| `e` | 101 |
| `z` | 122 |

---

## Digits

```text
0 → 9
48 → 57
```

| Character | ASCII |
|-----------|------:|
| `0` | 48 |
| `1` | 49 |
| `2` | 50 |
| `3` | 51 |
| `9` | 57 |

---

# 17. Character to ASCII

A `char` can be converted to an integer to obtain its character code.

Example:

```cpp
#include <iostream>
using namespace std;

int main() {

    char ch = 'A';

    cout << static_cast<int>(ch);

    return 0;
}
```

### Output

```text
65
```

Therefore:

```text
'A' → 65
```

---

## Using C-style Casting

We can also write:

```cpp
char ch = 'A';

cout << (int)ch;
```

Output:

```text
65
```

---

# 18. ASCII to Character

We can also convert an ASCII value into a character.

Example:

```cpp
#include <iostream>
using namespace std;

int main() {

    int value = 65;

    cout << static_cast<char>(value);

    return 0;
}
```

### Output

```text
A
```

Therefore:

```text
65 → 'A'
```

---

# 19. Character Arithmetic

ASCII values make character arithmetic possible.

Consider:

```cpp
char ch = 'A';

cout << ch + 1;
```

Output:

```text
66
```

Why?

```text
'A' = 65

65 + 1 = 66
```

---

## Getting the Next Character

If we want the character instead of the ASCII number:

```cpp
#include <iostream>
using namespace std;

int main() {

    char ch = 'A';

    cout << static_cast<char>(ch + 1);

    return 0;
}
```

### Output

```text
B
```

Because:

```text
'A' = 65
65 + 1 = 66
66 = 'B'
```

---

# 20. Complete ASCII Example

```cpp
#include <iostream>
using namespace std;

int main() {

    char ch = 'C';

    cout << "Character = " << ch << endl;
    cout << "ASCII = " << static_cast<int>(ch) << endl;

    return 0;
}
```

### Output

```text
Character = C
ASCII = 67
```

---

# 21. ASCII Ranges to Remember

For programming and DSA, remember these three important ranges:

```text
Uppercase:
'A' → 'Z'
65  → 90
```

```text
Lowercase:
'a' → 'z'
97  → 122
```

```text
Digits:
'0' → '9'
48  → 57
```

### Important Observation

```text
'A' + 32 = 'a'
```

because:

```text
A = 65
a = 97

97 - 65 = 32
```

Similarly:

```text
'a' - 32 = 'A'
```

This concept will become useful later when working with **strings and character-based DSA problems**.

---

# 22. Quick Revision

## C++ Program Structure

```cpp
#include <iostream>
using namespace std;

int main() {

    // statements

    return 0;
}
```

## Printing

```cpp
cout << "Hello";
```

## New Line

```cpp
cout << "Hello" << endl;
```

## Addition

```cpp
int sum = a + b;
```

## Simple Interest

```text
SI = (P × R × T) / 100
```

## Implicit Casting

```cpp
float b = a;
```

## Explicit C-style Casting

```cpp
float b = (float)a;
```

## Explicit `static_cast`

```cpp
float b = static_cast<float>(a);
```

## Character to ASCII

```cpp
static_cast<int>(ch)
```

## ASCII to Character

```cpp
static_cast<char>(value)
```

---

# 23. Practice Questions

## Basic Output

### Q1. Print the following:

```text
Welcome to C++
Learning DSA
Let's Start Coding
```

### Q2. Print your:

- Name
- Age
- Branch

---

## Addition

### Q3. Write a program to add:

```text
25 + 45
```

### Q4. Write a program to calculate the sum of three numbers.

---

## Simple Interest

### Q5. Calculate Simple Interest for:

```text
Principal = 8000
Rate = 6
Time = 3
```

### Q6. Write a program that stores Principal, Rate, and Time in variables and calculates Simple Interest.

---

## Type Casting

### Q7. Predict the output:

```cpp
int a = 9;
int b = 2;

cout << a / b;
```

### Q8. Modify the above program to get:

```text
4.5
```

### Q9. Identify whether the following conversion is implicit or explicit:

```cpp
int a = 10;
float b = a;
```

### Q10. Identify whether the following conversion is implicit or explicit:

```cpp
int a = 10;
float b = (float)a;
```

---

## ASCII

### Q11. Find the ASCII value of:

```text
A
B
Z
a
z
0
9
```

### Q12. Write a program to print the ASCII value of a character.

### Q13. Write a program to convert:

```text
65 → A
```

### Q14. Write a program to convert:

```text
97 → a
```

### Q15. What is the output?

```cpp
char ch = 'A';

cout << static_cast<int>(ch);
```

### Q16. What is the output?

```cpp
char ch = 'A';

cout << static_cast<char>(ch + 1);
```

### Q17. Print the ASCII values of all uppercase alphabets.

### Q18. Print the ASCII values of all lowercase alphabets.

---

# 24. Interview / Viva Questions

1. What is C++?
2. What is the purpose of `#include <iostream>`?
3. What is the use of `using namespace std;`?
4. Where does execution of a C++ program begin?
5. What is the purpose of `return 0`?
6. What is the use of `cout`?
7. What is the use of `endl`?
8. What is a variable?
9. What is type casting?
10. What is implicit type casting?
11. What is explicit type casting?
12. What is the difference between `(float)a` and `static_cast<float>(a)`?
13. What is ASCII?
14. What is the ASCII value of `A`?
15. What is the ASCII value of `a`?
16. What is the ASCII value range of uppercase letters?
17. What is the ASCII value range of lowercase letters?
18. How can you convert a character into its ASCII value?
19. How can you convert an ASCII value into a character?
20. What happens when you perform `5 / 2` using integer variables?

---

# 25. Key Takeaways

After completing this class, you should understand:

```text
C++ Program Structure
        ↓
      cout
        ↓
   Basic Programs
        ↓
   Type Casting
        ↓
Implicit / Explicit
        ↓
      ASCII
        ↓
Character Manipulation
```

The most important concepts from this class are:

- `main()` is the starting point of a C++ program.
- `cout` is used to print output.
- `endl` moves output to the next line.
- Variables store values.
- Arithmetic operators can be used to perform calculations.
- Type casting converts one data type into another.
- Implicit casting is performed automatically.
- Explicit casting is requested by the programmer.
- `static_cast` is a C++-style explicit cast.
- ASCII assigns numeric codes to characters.
- `A` to `Z` → `65` to `90`
- `a` to `z` → `97` to `122`
- `0` to `9` → `48` to `57`

---

## 🚀 Next Topic

**C++ Variables, Data Types & Operators**
