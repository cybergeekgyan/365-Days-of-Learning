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
