
# C++ Constructors

A constructor is a special type of member function of a class which initializes objects of a class.

In C++, constructor is automatically called when object(instance of a class) is created.

It is a special member function of the class because it does not have any return type.

## How constructors are different from normal member functions/Characteristics of constructors?
- Constructors has the same name as the class itself.
- Constructor don't have any return type.
- A constructor is automatically called when an object is created.
- It must be placed in public section of the class.
- If we do not specify a constructor, C++ compiler generates a default constructor for objects(i.e. expects no parameters and has an empty body).

## Types of Constructors in C++
- **Default constructor**
- **Parameterized constructor**
- **Copy constructor**

### a. Default Constructor
Default Constructor is a constructor which doesn't take any arguments means it has no parameters.

#### Syntax
```
class_name()
```

### b. Parameterized Constructor
It is possible to pass arguments to constructors. These arguments help initialize an object when it is created.

#### Syntax
```
class_name(parameters)
```
When an object is declared in a parameterized constructor, the initial values have to be passed as arguments to the constructor function.

The constructor can be called **explicitly** or **implicitly**.

```
Complex b = Complex(5, 8); // Explicit Call

Complex b(4, 6); // Implicit Call
```

#### Uses of Parameterized Constructor
- It is used to initialize the various data elements of different objects with different values when they are created.
- It is used to overload constructor.

### c. Copy Constructor
A copy constructor is a member function that initializes an object using another object of the same class.

#### Syntax
```
class_name(const class_name &old_obj);
```
#### When is copy constructor called?
In C++, a copy constructor may be called in following cases:-
- When an object of the class is returned by value.
- When an object of the class is passed(to a function) by value as an argument.
- When an object is constructed based on another object of the same class.
- When the compiler generates a temporary object.

#### When is a user-defined copy constructor needed?
If we don't define our own copy constructor, the C++ compiler creates a default copy constructor for each class which does a member-wise copy between objects.

The compiler created copy constructor works fine in general.

We need to define our own copy constructor only if an object has pointers or any runtime allocation of the resource like filehandle, a network communication, etc.

The default constructor does only shallow copy. Deep copy is possible only with user defined copy constructor.

In user defined copy constructor, we make sure that pointers(or reference) of copied object point to new memory location.

#### Copy Constructor vs Assignment Operator
- Copy Constructor is invoked when a new object is created from an existing object, as a copy of existing object.
- Assignment Operator is called when an already initialized object is assigned a new value from another existing object. 
```
myClass t1, t2;
myClass t3 = t1; // eq-1
t2 = t1; // eq-2
```
Here, eq-1 calls copy constructor and eq-2 calls assignment operator.

#### Can we make copy constructor private?
Yes, a copy constructor can be made private. When we make a copy constructor private in a class, objects of that class become non-copyable.

This is particularly useful when our class has pointers or dynamically allocated resources.

In such situations, we can either write our own copy constructor or can make a private copy constructor so that users get compiler errors rather than surprises.

#### Why argument to a copy constructor must be passed as a reference?
A copy constructor is called when an object is passed by value. Copy constructor itself is a function. 
So, if we pass an argument by value in a copy constructor, a call to copy constructor would be made to 
call copy constructor which becomes a non-terminating chain of cells. Therefore, compiler doesn't allow 
parameters to be passed by value.

## Constructor Overloading
In C++, we can have more than one constructor in a class with same name, as long as each has a different list of arguments. This concept is called as **"Constructor Overloading"**.

Overloaded Constructor essentially have the same name (exact name of the class) and differ by number and type of arguments.

A constructor is invoked depending upon the number and type of arguments passed.

While creating the object, arguments must be passed to let compiler know, which constructor needs to be invoked.