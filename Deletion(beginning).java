import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter " + n + " elements of the array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        if (n == 0) {
            System.out.println("Array is empty, nothing to delete.");
            return;
        }
        for (int i = 1; i < n; i++) {
            arr[i - 1] = arr[i];
        }
        System.out.println("Array after deletion at the beginning: ");
        for (int i = 0; i < n - 1; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
