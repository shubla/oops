class A {
 void methodA() {
 System.out.println("Method from class A");
 }
}
class B extends A {
 void methodB() {
 System.out.println("Method from class B");
 }
}
interface C {
 void methodC();
}
class D extends B implements C {
 public void methodC() {
 System.out.println("Method from interface C");
 }
 void methodD() {
 System.out.println("Method from class D");
 }
}
public class HybridInheritance {
 public static void main(String[] args) {
 D myObject = new D();
 myObject.methodA();
 myObject.methodB();
 myObject.methodC();
 myObject.methodD();
 }
}
