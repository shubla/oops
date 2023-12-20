class Shape {
 void draw() {
 System.out.println("Drawing a shape");
 }
}
class Circle extends Shape {
 void draw() {
 System.out.println("Drawing a circle");
 }
}
class Rectangle extends Shape {
 void draw() {
 System.out.println("Drawing a rectangle");
 }
}
public class polymorphism {
 public static void main(String[] args) {
 Shape myShape = new Circle();
 myShape.draw(); // Calls the draw method of Circle
 myShape = new Rectangle();
 myShape.draw(); // Calls the draw method of Rectangle
 }
}
