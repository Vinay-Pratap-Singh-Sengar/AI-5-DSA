# Variables, Keywords, Identifiers, Literals & Data Types

## 1. Introduction

Before writing programs, we need to understand some basic building blocks of a programming language.

In this class, we will learn:

1. Variables
2. Rules for declaring variables
3. Keywords
4. Identifiers
5. Literals
6. Data Types
7. Common mistakes
8. Basic examples

---

# 2. Variables

A **variable** is a named memory location used to store data.

The value stored inside a variable can change during program execution.

### Example

```cpp
int age = 20;
```

Here:

* `int` → Data Type
* `age` → Variable Name
* `20` → Value
* `=` → Assignment Operator

We can change the value:

```cpp
int age = 20;

age = 21;
```

Now the value of `age` is `21`.

---

# 3. Why Do We Need Variables?

Variables help us store and use data in a program.

### Without variables

```cpp
cout << 20;
cout << 20 + 10;
```

### With variables

```cpp
int age = 20;

cout << age;
cout << age + 10;
```

Variables make programs:

* Easier to understand
* Easier to modify
* Easier to reuse
* More organized

---

# 4. Declaration of a Variable

Declaration means telling the compiler:

> "I want to create a variable of this data type."

### Syntax

```cpp
dataType variableName;
```

### Example

```cpp
int age;
float price;
char grade;
```

At this point, the variables are declared but no value has been assigned.

---

# 5. Initialization

Initialization means giving a variable its first value.

```cpp
int age = 20;
```

Here:

* `int` → Data Type
* `age` → Variable
* `20` → Initial Value

### Declaration + Initialization

```cpp
int age = 20;
```

### Separate Declaration and Assignment

```cpp
int age;
age = 20;
```

Both are valid.

---

# 6. Rules for Declaring Variables

Variable names must follow certain rules.

## Rule 1: Variable name can contain letters

```cpp
int age;
int student;
int marks;
```

---

## Rule 2: Variable name can contain digits

Digits can be used, but **not at the beginning**.

Valid:

```cpp
int age1;
int marks10;
int student2026;
```

Invalid:

```cpp
int 1age;
int 10marks;
```

---

## Rule 3: Variable name cannot start with a digit

❌ Invalid:

```cpp
int 123number;
```

✅ Valid:

```cpp
int number123;
```

---

## Rule 4: Underscore `_` is allowed

```cpp
int student_name;
int total_marks;
int _value;
```

---

## Rule 5: Spaces are not allowed

❌ Invalid:

```cpp
int student name;
```

✅ Valid:

```cpp
int studentName;
int student_name;
```

---

## Rule 6: Special characters are not allowed

Characters such as:

```text
@ # $ % & *
```

cannot normally be used in variable names.

❌ Invalid:

```cpp
int student@name;
int total#marks;
```

---

## Rule 7: Keywords cannot be used as variable names

❌ Invalid:

```cpp
int int;
int return;
int if;
```

These words already have a special meaning in C++.

---

## Rule 8: Variable names are case-sensitive

C++ considers uppercase and lowercase letters different.

```cpp
int age;
int Age;
int AGE;
```

These are three different variable names.

For example:

```cpp
int age = 20;
int Age = 30;

cout << age;
cout << Age;
```

Output:

```text
20
30
```

---

# 7. Good Naming Practices

Although many names are technically valid, we should use meaningful names.

### Poor naming

```cpp
int x;
int a;
int p;
```

### Better naming

```cpp
int studentAge;
int totalMarks;
int productPrice;
```

A good variable name should describe the data it stores.

---

# 8. Naming Styles

### Camel Case

```cpp
int studentName;
int totalMarks;
int accountBalance;
```

### Snake Case

```cpp
int student_name;
int total_marks;
int account_balance;
```

Both styles are commonly used.

The important thing is to maintain consistency.

---

# 9. Keywords

A **keyword** is a reserved word that has a predefined meaning in C++.

Keywords cannot normally be used as variable names, function names, or other identifiers.

### Examples

```cpp
int
float
char
if
else
for
while
return
class
public
private
void
```

Example:

```cpp
int age = 20;
```

Here `int` is a keyword.

---

## Example of Invalid Use of Keyword

```cpp
int int = 10;
```

This is invalid because `int` is already a C++ keyword.

Another example:

```cpp
int return = 5;
```

This is also invalid.

---

# 10. Common C++ Keywords

Some commonly used C++ keywords are:

| Keyword    | Purpose                            |
| ---------- | ---------------------------------- |
| `int`      | Integer data type                  |
| `float`    | Decimal data type                  |
| `double`   | Double-precision decimal data type |
| `char`     | Character data type                |
| `bool`     | Boolean data type                  |
| `if`       | Conditional statement              |
| `else`     | Alternative condition              |
| `for`      | Loop                               |
| `while`    | Loop                               |
| `do`       | Loop                               |
| `switch`   | Multiple-choice selection          |
| `case`     | Switch case                        |
| `break`    | Exit loop/switch                   |
| `continue` | Skip current iteration             |
| `return`   | Return from a function             |
| `class`    | Define a class                     |
| `public`   | Public access                      |
| `private`  | Private access                     |
| `void`     | No return value                    |
| `const`    | Constant value                     |

> **Note:** C++ has many reserved keywords. Students do not need to memorize all of them at once. They can learn them as they are used.

---

# 11. Identifier

An **identifier** is a name given by the programmer to program elements.

Examples include:

* Variable names
* Function names
* Class names
* Object names
* Array names

Example:

```cpp
int age = 20;
```

Here:

```text
age → Identifier
```

---

## Variable vs Identifier

These terms are related but not exactly the same.

```cpp
int age = 20;
```

* `age` → Identifier
* `age` → Variable name
* `20` → Literal
* `int` → Keyword/Data type

A variable is a program element that stores data, while an identifier is the name used to identify that element.

---

# 12. Rules of Identifiers

The same basic naming rules apply to identifiers.

### Valid identifiers

```cpp
age
studentName
total_marks
marks1
_value
```

### Invalid identifiers

```cpp
1student
student-name
student name
int
total@marks
```

---

# 13. Literals

A **literal** is a fixed value written directly in the program.

Example:

```cpp
int age = 20;
```

Here:

```text
20 → Literal
```

The value `20` is directly written in the program.

---

# 14. Types of Literals

Common types of literals include:

1. Integer literals
2. Floating-point literals
3. Character literals
4. String literals
5. Boolean literals

---

## 14.1 Integer Literal

An integer literal is a whole-number value.

Examples:

```cpp
10
25
100
-50
0
```

Example:

```cpp
int age = 20;
```

Here `20` is an integer literal.

---

## 14.2 Floating-Point Literal

A floating-point literal represents a decimal value.

Examples:

```cpp
10.5
25.75
3.14
-5.5
```

Example:

```cpp
float price = 99.50;
```

Here `99.50` is a floating-point literal.

---

## 14.3 Character Literal

A character literal represents a single character.

It is written inside **single quotes**.

Examples:

```cpp
'A'
'b'
'5'
'#'
```

Example:

```cpp
char grade = 'A';
```

Important:

```cpp
'A'   // Character
```

is different from:

```cpp
"A"   // String
```

---

## 14.4 String Literal

A string literal is a sequence of characters written inside **double quotes**.

Examples:

```cpp
"Hello"
"Vinay"
"Hello World"
"C++ Programming"
```

Example:

```cpp
cout << "Hello World";
```

---

## 14.5 Boolean Literal

Boolean values have only two possible values:

```cpp
true
false
```

Example:

```cpp
bool isPassed = true;
```

Here:

```text
true → Boolean literal
```

---

# 15. Data Types

A **data type** tells the compiler:

> What type of data a variable can store.

Example:

```cpp
int age = 20;
```

Here `int` tells the compiler that `age` stores an integer value.

---

# 16. Main Categories of Data Types

C++ data types can broadly be divided into:

### 1. Fundamental Data Types

Examples:

```text
int
float
double
char
bool
void
```

### 2. Derived Data Types

Examples:

```text
array
pointer
function
```

### 3. User-Defined Data Types

Examples:

```text
class
struct
union
enum
```

For beginners, we will first focus on fundamental data types.

---

# 17. Integer Data Type — `int`

The `int` data type is used to store whole numbers.

Examples:

```cpp
int age = 20;
int marks = 95;
int temperature = -5;
```

It can store positive numbers, negative numbers, and zero.

---

# 18. Floating Data Type — `float`

`float` is used to store decimal numbers.

Example:

```cpp
float price = 99.50;
float percentage = 85.5;
```

---

# 19. Double Data Type — `double`

`double` is also used to store decimal values.

It generally provides more precision than `float`.

Example:

```cpp
double pi = 3.14159265359;
double salary = 45000.75;
```

---

# 20. Character Data Type — `char`

`char` stores a single character.

Example:

```cpp
char grade = 'A';
char gender = 'M';
```

Remember:

```cpp
char grade = 'A';
```

Use **single quotes** for a character.

---

# 21. Boolean Data Type — `bool`

`bool` stores one of two values:

```cpp
true
false
```

Example:

```cpp
bool isLoggedIn = true;
bool isPassed = false;
```

---

# 22. Void Data Type — `void`

`void` represents the absence of a value.

It is commonly used with functions that do not return a value.

Example:

```cpp
void display() {
    cout << "Hello";
}
```

The function does not return a value, so its return type is `void`.

---

# 23. Basic Data Type Summary

| Data Type | Used For                     | Example                |
| --------- | ---------------------------- | ---------------------- |
| `int`     | Whole numbers                | `int age = 20;`        |
| `float`   | Decimal numbers              | `float price = 10.5;`  |
| `double`  | More precise decimal numbers | `double pi = 3.14159;` |
| `char`    | Single character             | `char grade = 'A';`    |
| `bool`    | True/False                   | `bool passed = true;`  |
| `void`    | No value                     | `void display()`       |

---

# 24. Putting Everything Together

Consider this program:

```cpp
#include <iostream>
using namespace std;

int main() {

    int age = 20;
    float percentage = 85.5;
    char grade = 'A';
    bool isPassed = true;

    cout << age << endl;
    cout << percentage << endl;
    cout << grade << endl;
    cout << isPassed << endl;

    return 0;
}
```

Let's identify the different parts:

| Code         | Meaning                    |
| ------------ | -------------------------- |
| `int`        | Keyword / Data Type        |
| `age`        | Identifier / Variable Name |
| `20`         | Integer Literal            |
| `float`      | Keyword / Data Type        |
| `percentage` | Identifier / Variable Name |
| `85.5`       | Floating-Point Literal     |
| `char`       | Keyword / Data Type        |
| `grade`      | Identifier / Variable Name |
| `'A'`        | Character Literal          |
| `bool`       | Keyword / Data Type        |
| `isPassed`   | Identifier / Variable Name |
| `true`       | Boolean Literal            |

---

# 25. Important Difference

Students commonly confuse these terms.

Consider:

```cpp
int marks = 90;
```

### `int`

Data Type / Keyword

### `marks`

Identifier / Variable Name

### `90`

Integer Literal

### `marks = 90`

Assignment of a value to the variable.

---

# 26. Common Mistakes

### Mistake 1: Starting with a digit

```cpp
int 1marks = 90;
```

❌ Invalid

Correct:

```cpp
int marks1 = 90;
```

---

### Mistake 2: Using spaces

```cpp
int student marks = 90;
```

❌ Invalid

Correct:

```cpp
int studentMarks = 90;
```

---

### Mistake 3: Using a keyword

```cpp
int int = 10;
```

❌ Invalid

---

### Mistake 4: Using double quotes for a character

```cpp
char grade = "A";
```

❌ Incorrect

Correct:

```cpp
char grade = 'A';
```

---

### Mistake 5: Using single quotes for a string

```cpp
string name = 'Vinay';
```

❌ Incorrect

Correct:

```cpp
string name = "Vinay";
```

---

# 27. Quick Revision

### Variable

A named memory location used to store data.

```cpp
int age = 20;
```

### Keyword

A reserved word with a predefined meaning.

```cpp
int
if
else
return
```

### Identifier

A name used to identify program elements.

```cpp
age
studentName
totalMarks
```

### Literal

A fixed value directly written in the program.

```cpp
20
10.5
'A'
"Hello"
true
```

### Data Type

Specifies what type of data a variable can store.

```cpp
int
float
double
char
bool
```

---

# 28. Practice Questions

## A. Identify the Components

For each statement, identify the **data type, identifier, and literal**.

### Question 1

```cpp
int age = 25;
```

### Question 2

```cpp
float price = 99.50;
```

### Question 3

```cpp
char grade = 'A';
```

### Question 4

```cpp
bool isPassed = true;
```

---

## B. Find the Invalid Variable Names

Identify which names are invalid:

```text
studentName
1student
total_marks
student marks
marks1
int
student@name
_age
```

---

## C. Write Variable Declarations

Create variables for:

1. Your age
2. Your percentage
3. Your grade
4. Whether you passed the exam
5. Your roll number

Example:

```cpp
int age = 20;
```

---

# 29. Key Points to Remember

* A variable stores data.
* Every variable should have a data type.
* Variable names cannot start with a digit.
* Spaces are not allowed in identifiers.
* Keywords cannot be used as variable names.
* C++ is case-sensitive.
* Literals are fixed values written directly in the program.
* `char` uses single quotes.
* Strings use double quotes.
* `bool` stores `true` or `false`.
* `int` is used for whole numbers.
* `float` and `double` are used for decimal values.
* `void` represents no value.

---

## Class Summary

```text
                 C++ BASIC BUILDING BLOCKS
                           |
        -----------------------------------------
        |          |          |          |       |
     Variable   Keyword   Identifier   Literal  Data Type
        |          |          |          |       |
     Stores     Reserved    Name       Fixed    Type of
      Data       Word                  Value      Data
```

### Example

```cpp
int age = 20;
```

```text
int  → Data Type / Keyword
age  → Identifier / Variable Name
20   → Literal
```
