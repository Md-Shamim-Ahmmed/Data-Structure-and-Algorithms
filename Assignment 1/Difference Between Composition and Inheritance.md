## Difference Between Composition and Inheritance<br><br>


In **OOP**, ```inheritance``` is the methodology by which an object acquires the characteristics of one or more other objects.<br>
It is one of the most powerful tools in implementing code reusability in **OOP**.<br> When using ```inheritance```, 
a new class can be created by establishing parent-child relationships with existing classes.<br>
Object ```composition``` is an alternative to class ```inheritance```.<br>
Using an object within another object is known as ```composition```.<br>
On many occasions you’d want to use an object as a field within another class because 
it’s easy to create complex classes using previously written, well-designed classes as components. <br>
This is called ```composition```.<br>
Well, both ```inheritance``` and ```composition``` provide equivalent functionality in many cases, <br>
object ```composition``` is a better reuse model than class ```inheritance```.<br>

##### This article compares the two approaches, <br>
<p align = "center">
<img src = "https://github.com/Md-Shamim-Ahmmed/Data-Structure-and-Algorithms/blob/master/images/Difference-Between-Composition-vs-Inheritance.png" width = "749" height = "600"/>
</p>

## What is Inheritance?<br>

Inheritance is one of the most powerful tools in implementing code reusability in object-oriented programming.<br>
It refers to the functionality by which one object acquires the characteristics of one or more other objects.<br> 
Inheritance in C++ means you can create classes that derive their attributes from existing classes.<br> 
This means you specialize a class to create an is-a relationship between the classes which results in a strong <br>
coupling between the base and derived classes. Implementing inheritance promotes code reusability because new classes <br>
are created from existing classes. Class inheritance also makes it easier to modify the implementationbeing reused. <br>
But class inheritance has some downsides to it too. First, because inheritance is defined at compile-time, <br>
you cannot change the implementations inherited from parent classes at run-time.<br>
<p align = "center">
<img src = "https://github.com/Md-Shamim-Ahmmed/Data-Structure-and-Algorithms/blob/master/images/Difference-Between-Composition-and-Inheritance.png" width = "500" height = "179"/>
</p><br>

## What is Composition?<br>
OOP provides yet another relationship between classes called composition, which is also known as a has-a relationship.<br>
If the features of one object need to be a part of another object, the relationship calls for composition.<br>
To compose a class from existing classes, an object of each class should be declared as the member of the new class.<br>
In simple words, using an object within another object is known as composition.<br>
Many a times, you might want to use an object as a field within another class.<br>
You use an object inside a class in composition. Unlike class inheritance, object composition is defined <br>
dynamically at run-time through objects acquiring references to other objects.<br>
Additionally, composition provides a better way to use an object without compromising the internal details<br>
of the object, that is where composition is useful.<br><br>

## Difference between Composition and Inheritance<br>
#### Approach<br>
While both inheritance and composition promote code reusability in object oriented system by establishing <br>
relationships between classes and they provide equivalent functionality in many ways, they use different <br>
approaches.<br>
With inheritance, you can create classes that derive their attributes from existing classes so while using<br>
inheritance to create a class, you can expand on an existing class.<br>
On the contrary, using an object within another object is known as composition.<br>
Object composition is an alternative to class inheritance.<br>
If the features of one object need to be a part of another object, the relationship calls for composition.<br><br>
#### Relationship<br>
In inheritance, you specialize a class to create an “is-a” relationship between the classes which results in<br>
a strong coupling between the base and derived classes.<br>
It enables a hierarchy of classes to be designed and the hierarchy begins with the most general class and<br>
moves to more specific classes.<br>
By implementing inheritance, member functions from one class become properties of another class without <br>
coding them explicitly within the class.<br>
In composition, you use an object inside a class and any requests to the object are forwarded to the object.<br>
The internal details are not exposed to each other in composition, so it is a “has-a” relationship.<br><br>
#### Implementation<br>
Class inheritance is defined at compile-time, so you cannot change the implementations inherited from parent<br>
classes at run-time. <br>
Because inheritance exposes a subclass to details of its parent’s implementation, it often breaks encapsulation.<br>
Any changes in the parent class will reflect in the subclass which can create problems when you try to reuse a subclass.<br>
Object composition, on the contrary, is defined dynamically at run-time through objects acquiring references to<br>
other objects. <br>
And because objects are accessed solely through their interfaces, it won’t break encapsulation.<br>
Any object can be replaced at run-time by another object as long as it has the same type.<br><br>
<p align = "center">
<img src = "https://github.com/Md-Shamim-Ahmmed/Data-Structure-and-Algorithms/blob/master/images/Difference-Between-Composition-and-Inheritance-.png" width = "700" height = "637"/>
</p><br>

## Summary of Composition vs. Inheritance<br>
On many occasions, you’d want to use an object as a field within another class because complex classes are<br>
easier to create using previously written, well-designed classes. This is where you use composition. <br>
Inheritance provides a way to reuse code by extending a class with minimal effort, this is why inheritance<br>
is a valuable tool in establishing relationships between classes. <br>
In general, it is preferable to use composition as it provides a way to use an object without compromising<br>
the internal details of the object that is where composition is useful. <br>
Inheritance is not without problems, but like inheritance, object composition raises similar performance <br>
concerns with regard to object creation and destruction.<br>
<br>
