class A {
 void methodA() {
 System.out.println("Method from class A");
 }
}
class B {
 void methodB() {
 System.out.println("Method from class B");
 }
}
interface C {
 void methodC();
}
class D extends A implements C {
 public void methodC() {
 System.out.println("Method from interface C");
 }
 void methodD() {
 System.out.println("Method from class D");
 }
}
public class Q10 {
 public static void main(String[] args) {
 D myObject = new D();
 myObject.methodA();
 myObject.methodC();
 myObject.methodD();
 }
}
