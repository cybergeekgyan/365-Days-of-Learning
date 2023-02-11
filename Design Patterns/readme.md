# SOLID design principles

The SOLID design principles are a set of guidelines that can help developers create more maintainable and scalable software systems. These principles were first introduced by Robert C. Martin, also known as "Uncle Bob," in his 2000 paper "Design Principles and Design Patterns."

## The SOLID principles are:

### Single Responsibility Principle

This principle states that a class should have only one reason to change. In other words, a class should have a single, well-defined responsibility, and all of its methods and data should be related to that responsibility.

The Single Responsibility Principle (SRP) is a software design principle that states that a class or module should have only one reason to change. In other words, a class or module should have a single, well-defined responsibility or purpose, and it should not be responsible for more than that.

The idea behind the Single Responsibility Principle is that by limiting the number of things a class or module is responsible for, you can make your code more maintainable and easier to understand. This is because if a class or module has multiple responsibilities, it may be difficult to understand how it fits into the overall architecture of the system and how it should be used. Additionally, if a class or module has multiple responsibilities, it is more likely that changes to one part of the class or module will have unintended consequences on other parts of the class or module, which can lead to bugs and other issues.

Here is an example of how the Single Responsibility Principle might be applied in the context of a simple program that displays a list of contacts:

```Python
class Contact:
    def __init__(self, name, phone_number):
        self.name = name
        self.phone_number = phone_number

class ContactList:
    def __init__(self):
        self.contacts = []

    def add_contact(self, contact):
        self.contacts.append(contact)

    def remove_contact(self, contact):
        self.contacts.remove(contact)

class ContactPrinter:
    def print_contacts(self, contact_list):
        for contact in contact_list.contacts:
            print(f"{contact.name}: {contact.phone_number}")
```

In this example, the Contact class has a single responsibility: representing a single contact. The `ContactList` class has a single responsibility: managing a list of contacts. And the `ContactPrinter` class has a single responsibility: printing a list of contacts.

By following the Single Responsibility Principle, each of these classes is easier to understand and maintain because it has a clear and well-defined purpose. For example, if you need to change the way that contacts are printed, you can make those changes in the ContactPrinter class without worrying about how those changes might affect the other classes in the program. Similarly, if you need to add a new method for searching the list of contacts, you can add that method to the ContactList class without worrying about how it might affect the other classes in the program.

**Open-Closed Principle (OCP)**: This principle states that a class should be open for extension but closed for modification. In other words, a class should be designed in such a way that it can be easily extended to add new functionality, without requiring any changes to the existing code.

### Liskov Substitution Principle

The Liskov Substitution Principle (LSP) is a principle in object-oriented programming that states that objects of a superclass should be able to be replaced with objects of a subclass without affecting the correctness of the program. This means that if a program is written to use an object of a superclass, it should be able to use an object of a subclass in its place without the program behaving differently.

Here is an example to illustrate the Liskov Substitution Principle:

Imagine we have a class called `Shape` that represents a shape, and two subclasses called `Rectangle` and `Square`. The Shape class has a method called `area()` that calculates the area of the shape, and the `Rectangle` and `Square` classes have their own implementations of this method.

According to the Liskov Substitution Principle, we should be able to use a Rectangle object in any situation where a Shape object is expected, and the program should behave correctly. This means that if we have a function that takes a Shape object as an argument and calculates the area of the shape, we should be able to pass a Rectangle object to this function and get the correct result.

The same is true for the Square class. We should be able to use a Square object in any situation where a Shape object is expected, and the program should behave correctly.

Here is some example code to illustrate this:
```Python
class Shape:
    def area(self):
        pass

class Rectangle(Shape):
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

class Square(Shape):
    def __init__(self, side_length):
        self.side_length = side_length

    def area(self):
        return self.side_length ** 2

def calculate_total_area(shapes):
    total_area = 0
    for shape in shapes:
        total_area += shape.area()
    return total_area

rectangle = Rectangle(10, 5)
square = Square(10)

# We should be able to use a Rectangle object in any situation where a Shape object is expected
assert isinstance(rectangle, Shape)

# We should be able to use a Square object in any situation where a Shape object is expected
assert isinstance(square, Shape)

# We should be able to pass a list of Rectangle objects to the calculate_total_area function and get the correct result
shapes = [rectangle, rectangle, rectangle]
assert calculate_total_area(shapes) == 150

# We should be able to pass a list of Square objects to the calculate_total_area function and get the correct result
shapes = [square, square, square]
assert calculate_total_area(shapes) == 300
```

In this example, the Rectangle and Square classes are substitutable for the Shape class because they both have a correct implementation of the area() method. This means that we can use a Rectangle or Square object in any situation where a Shape object is expected, and the program will behave correctly.

### Interface Segregation Principle

The Interface Segregation Principle (ISP) is a principle in object-oriented programming that states that clients should not be forced to depend on interfaces they do not use. This means that an interface should not contain methods that a client does not need, as this can lead to unnecessary complexity and can make it more difficult to understand and use the interface.

Here is an example to illustrate the Interface Segregation Principle:

Imagine we have an interface called Animal that represents an animal, and two classes called Dog and Fish that implement this interface. The Animal interface has the following methods:

```Python
class Animal:
    def eat(self):
        pass

    def sleep(self):
        pass

    def swim(self):
        pass
```

The Dog class needs to implement the eat() and sleep() methods, but it does not need to implement the swim() method because dogs cannot swim. Similarly, the Fish class needs to implement the eat() and swim() methods, but it does not need to implement the sleep() method because fish do not sleep.

According to the Interface Segregation Principle, we should not force the Dog class to implement the swim() method because it does not need it, and we should not force the Fish class to implement the sleep() method because it does not need it. Instead, we should create separate interfaces for different types of animals and have the Dog and Fish classes implement only the interfaces that they need.

Here is some example code to illustrate this:

```Python
class Animal:
    def eat(self):
        pass

class LandAnimal(Animal):
    def sleep(self):
        pass

class WaterAnimal(Animal):
    def swim(self):
        pass

class Dog(LandAnimal):
    def bark(self):
        pass

class Fish(WaterAnimal):
    def swim(self):
        pass
```

In this example, the LandAnimal and WaterAnimal interfaces are more specific versions of the Animal interface, and they contain only the methods that are relevant to their respective types of animals. This means that the Dog class only needs to implement the eat() and sleep() methods, and the Fish class only needs to implement the eat() and swim() methods. This makes it easier to understand and use the interfaces, and it reduces the unnecessary complexity that would result from forcing the Dog and Fish classes to implement methods that they do not need.

### Dependency Inversion Principle

The Dependency Inversion Principle (DIP) is a principle in object-oriented programming that states that high-level modules should not depend on low-level modules. Instead, both should depend on abstractions. This means that a program should be structured in such a way that high-level modules (such as business logic) are not directly dependent on low-level modules (such as database access), but rather depend on abstractions (such as interfaces) that define the expected behavior of the low-level modules.

This helps to decouple the high-level and low-level modules, making it easier to change or swap out low-level modules without affecting the high-level modules. It also helps to make the program more flexible and easier to maintain, as it allows the high-level modules to be independent of the specific implementation details of the low-level modules.

Here is an example to illustrate the Dependency Inversion Principle:

Imagine we have a class called OrderProcessor that handles the processing of orders. The OrderProcessor class needs to access a database to retrieve information about the orders, so it has a dependency on a class called DatabaseAccessor that provides this functionality.

According to the Dependency Inversion Principle, the OrderProcessor class should not depend directly on the DatabaseAccessor class, but rather on an abstraction that defines the expected behavior of the database accessor. This means that we should create an interface called DatabaseAccessorInterface that defines the methods that the DatabaseAccessor class should implement, and the OrderProcessor class should depend on this interface rather than the DatabaseAccessor class itself.

Here is some example code to illustrate this:

```Python
class OrderProcessor:
    def __init__(self, database_accessor: DatabaseAccessorInterface):
        self.database_accessor = database_accessor

    def process_order(self, order_id):
        # Retrieve the order from the database using the database accessor
        order = self.database_accessor.get_order(order_id)
        # Perform some processing on the order
        ...

class DatabaseAccessorInterface:
    def get_order(self, order_id):
        pass

class DatabaseAccessor(DatabaseAccessorInterface):
    def get_order(self, order_id):
        # Retrieve the order from the database
        ...
```
In this example, the OrderProcessor class depends on the DatabaseAccessorInterface rather than the DatabaseAccessor class itself. This means that the OrderProcessor class is not directly dependent on the specific implementation details of the DatabaseAccessor class, and it is more flexible and easier to maintain as a result. If we need to change the way that the DatabaseAccessor class retrieves orders from the database, we can do so without affecting the OrderProcessor class, as long as the DatabaseAccessor class continues to implement the DatabaseAccessorInterface.



# Design Patterns 

- Design Patterns are reusable solutions to commonly occuring problems(in the context of software design). Design patterns were started as best practices that were applied again and again to similar problems encountered in different contexts. They become popular after they were collected, in a formalized form, in the Gang Of Four book in 1994. Originally published with c++ and smaltalk code samples, design patterns are very popular in Java and C# can be applied in all object oriented languanges. 

## Creational Patterns

- [Singleton]() : Ensure that only one instance of a class is created and Provide a global access point to the object.
- [Factory]() : Creates objects without exposing the instantiation logic to the client and Refers to the newly created object through a common interface.
- [Factory Method]() : Defines an interface for creating objects, but let subclasses to decide which class to instantiate and Refers to the newly created object through a common interface.
- [Abstract Factory]() : Offers the interface for creating a family of related objects, without explicitly specifying their classes.
- [Builder]() : Defines an instance for creating an object but letting subclasses decide which class to instantiate and Allows a finer control over the construction process.
- [Prototype]() : Specify the kinds of objects to create using a prototypical instance, and create new objects by copying this prototype.
- [Object Pool]() : reuses and shares objects that are expensive to create..

## Behavioral Patterns

- [Chain of Responsibility]() : It avoids attaching the sender of a request to its receiver, giving this way other objects the possibility of handling the request too. The objects become parts of a chain and the request is sent from one object to another across the chain until one of the objects will handle it.
- [Command]() : Encapsulate a request in an object, Allows the parameterization of clients with different requests and Allows saving the requests in a queue.
- [Interpreter]() : Given a language, define a representation for its grammar along with an interpreter that uses the representation to interpret sentences in the language / Map a domain to a language, the language to a grammar, and the grammar to a hierarchical object-oriented design

- [Iterator]() : Provide a way to access the elements of an aggregate object sequentially without exposing its underlying representation.
- [Mediator]() : Define an object that encapsulates how a set of objects interact. Mediator promotes loose coupling by keeping objects from referring to each other explicitly, and it lets you vary their interaction independently.
- [Memento]() : Define a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.
- [Observer]() : Define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy lets the algorithm vary independently from clients that use it.
- [Strategy]() : Define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy lets the algorithm vary independently from clients that use it.
- [Template Method]() : Define the skeleton of an algorithm in an operation, deferring some steps to subclasses / Template Method lets subclasses redefine certain steps of an algorithm without letting them to change the algorithm's structure.
- [Visitor]() : Represents an operation to be performed on the elements of an object structure / Visitor lets you define a new operation without changing the classes of the elements on which it operates.
- [Null Object]() : Provide an object as a surrogate for the lack of an object of a given type. / The Null Object Pattern provides intelligent do nothing behavior, hiding the details from its collaborators.

## Structural Patterns

- [Adapter]() : Convert the interface of a class into another interface clients expect. / Adapter lets classes work together, that could not otherwise because of incompatible interfaces.

- [Bridge]() : Compose objects into tree structures to represent part-whole hierarchies. / Composite lets clients treat individual objects and compositions of objects uniformly.
- [Composite]() : Compose objects into tree structures to represent part-whole hierarchies. / Composite lets clients treat individual objects and compositions of objects uniformly.
- [Decorator]() : add additional responsibilities dynamically to an object.
- [Flyweight]() : use sharing to support a large number of objects that have part of their internal state in common where the other part of state can vary.
- [Momento]() : capture the internal state of an object without violating encapsulation and thus providing a mean for restoring the object into initial state when needed.
- [Proxy]() : provide a “Placeholder” for an object to control references to it.
