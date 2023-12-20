import java.util.Scanner;
public class ExceptionHandling {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 try {
 System.out.print("Enter a number: ");
 int number = scanner.nextInt();
 int result = 10 / number;
 System.out.println("Result: " + result);
 } catch (ArithmeticException e) {
 System.out.println("Error: Division by zero is not allowed.");
 } catch (Exception e) {
 System.out.println("An unexpected error occurred.");
 } finally {
 scanner.close();
 }
 }
}
