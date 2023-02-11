# OOPS Concepts 

## Encapsulation

Encapsulation is a concept in object-oriented programming (OOP) that refers to the bundling of data and methods that operate on that data within a single unit, or object. It is a way of bundling data and methods that work on that data within one unit, or "capsule".

One way to think of encapsulation is as a protective wrapper that surrounds an object's data and methods, keeping the data safe from outside interference and misuse, and providing controlled access to the object's methods.

An example of encapsulation in action might be a simple Person class that has data attributes such as name and age, and methods such as set_name and set_age that allow a user to change the name and age of a Person object. These data attributes and methods could be bundled together within the Person class, and the class could provide a set of methods (such as get_name and get_age) that allow controlled access to the data.

Here is an example of a simple Person class in Python that demonstrates encapsulation:

```Python
class Person:
    def __init__(self, name, age):
        self.__name = name  # private attribute
        self.__age = age  # private attribute

    def set_name(self, name):
        self.__name = name

    def set_age(self, age):
        self.__age = age

    def get_name(self):
        return self.__name

    def get_age(self):
        return self.__age
```
In this example, the Person class has two private data attributes, __name and __age, which are only accessible through the class's public methods, set_name and set_age. This encapsulation of the data attributes within the Person class allows the class to control how its data is accessed and modified, and helps to prevent outside code from accidentally or maliciously modifying the data in ways that could lead to problems.


## Abstraction 

Abstraction is a concept in object-oriented programming (OOP) that refers to the idea of representing essential features without including the background details or explanations. It is a way of focusing on the essential characteristics of an object that are relevant to the current problem, while ignoring unnecessary details.

Abstraction can be thought of as a way of simplifying and modeling complex real-world concepts in a way that is easier to understand and work with. It allows developers to create a simplified model or representation of a complex system or concept, and to work with that model in their code rather than having to deal with the complexity of the full system.

An example of abstraction in action might be a Shape class that has a method called area that calculates the area of a shape. This Shape class could be used as a base class for more specific shapes such as Circle, Rectangle, and Triangle, each of which would have their own implementation of the area method. The Shape class would provide an abstract representation of a shape, with the specific details of how to calculate the area for each type of shape being handled by the subclasses.

Here is an example of a simple Shape class in Python that demonstrates abstraction:

```Python
from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * self.radius * self.radius

class Rectangle(Shape):
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width
```

In this example, the Shape class is an abstract base class that defines the area method as an abstract method, using the @abstractmethod decorator. This means that the area method must be implemented by any concrete subclasses of Shape, such as Circle and Rectangle. The Shape class provides a simplified and abstract representation of a shape, with the specific details of how to calculate the area for each type of shape being handled by the concrete subclasses.

## Inheritance

Inheritance is a concept in object-oriented programming (OOP) that refers to the ability of a class to inherit properties and methods from a parent class. It is a way of creating a new class that is a modified version of an existing class, without having to rewrite the code in the new class.

Inheritance allows developers to create a class that is a specialized version of an existing class, and to reuse the code and functionality of the existing class in the new class. The new class is called the subclass, and the existing class is the superclass. The subclass can add new properties and methods, or override existing ones, to create a customized version of the superclass.

An example of inheritance in action might be a Shape class that has a method called area that calculates the area of a shape. This Shape class could be used as a base class for more specific shapes such as Circle, Rectangle, and Triangle, each of which would inherit the area method from the Shape class and possibly override it with a more specific implementation.

Here is an example of a simple Shape class in Python that demonstrates inheritance:
```Python
class Shape:
    def area(self):
        pass

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * self.radius * self.radius

class Rectangle(Shape):
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width
```

In this example, the Shape class is the superclass, and the Circle and Rectangle classes are subclasses that inherit the area method from the Shape class. The subclasses can override the area method with their own implementation if necessary, but they can also use the version from the superclass if it is sufficient. This allows the subclasses to reuse the code and functionality of the Shape class, while still being able to customize their behavior as needed.

Inheritance in the context of MVC (Model-View-Controller) architecture refers to the way in which a subclass can inherit properties and behaviors from a superclass. This can be useful in MVC architecture because it allows you to create a base class with shared functionality that can be inherited by multiple subclasses.

For example, consider a simple MVC application for managing a list of contacts. You might create a base class called Controller that contains common functionality for all controllers in the application, such as methods for rendering views and handling user input. You could then create a subclass called ContactController that inherits from the Controller class and includes specific functionality for managing contacts, such as methods for creating, updating, and deleting contacts.

Here is some sample code that demonstrates this concept in Python:
```Python
class Controller:
    def render_view(self, view_name, data=None):
        # code for rendering a view goes here
        pass

    def handle_input(self, input_data):
        # code for handling user input goes here
        pass

class ContactController(Controller):
    def create_contact(self, contact_data):
        # code for creating a new contact goes here
        pass

    def update_contact(self, contact_id, contact_data):
        # code for updating an existing contact goes here
        pass

    def delete_contact(self, contact_id):
        # code for deleting a contact goes here
        pass
```

In this example, the ContactController subclass inherits the render_view and handle_input methods from the Controller superclass, and it also includes additional methods for creating, updating, and deleting contacts. This allows you to reuse common functionality across multiple controllers in the application, while still allowing each controller to have its own specific functionality.

## Polymorphism

Polymorphism is a concept in object-oriented programming (OOP) that refers to the ability of a class or object to take on multiple forms. It is a way of allowing multiple classes or objects to be used interchangeably, even if they have different implementations.

Polymorphism allows developers to create code that is more flexible and adaptable, because it can work with multiple different types of objects in a consistent way. It can be achieved in a number of ways, including inheritance, interface implementation, and operator overloading.

An example of polymorphism in action might be a Shape class that has a method called area that calculates the area of a shape. This Shape class could be used as a base class for more specific shapes such as Circle, Rectangle, and Triangle, each of which would have their own implementation of the area method.

Here is an example of a simple Shape class in Python that demonstrates polymorphism:

```Python
class Shape:
    def area(self):
        pass

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * self.radius * self.radius

class Rectangle(Shape):
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width
```

In this example, the Shape class is an abstract base class that defines the area method as an abstract method. The Circle and Rectangle classes are concrete subclasses that override the area method with their own implementation.

To use polymorphism in this example, we could create a list of Shape objects that includes both Circle and Rectangle objects, and then call the area method on each object in the list. Because the area method has been overridden in the Circle and Rectangle classes, the correct implementation of the method will be called for each object, depending on its type.

Here is an example of how to use polymorphism with the Shape class:

```Python
shapes = [Circle(5), Rectangle(10, 5)]

for shape in shapes:
    print(shape.area())
```

In this example, the area method will be called on each object in the shapes list, and the correct implementation of the method will be called for each object, depending on its type. The output of this code would be:

```Python
78.5
50
```

This demonstrates how polymorphism allows the area method to be used with multiple different types of objects, even though they have different implementations of the method.
