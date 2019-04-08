/* Date: 2019.04.04
   Writer: 이창윤

    This code is for assignment 2-1
    it includes method generateArrays which makes array in a snail shape.
    The object of this code is to generate array which is in snail shape
    by using following method.
*/


import java.util.Arrays;
import java.util.Scanner;

public class Main_2 {
    // Optional ) Make a method that takes size of the array and
    //            generate above-like array.
    private static int[][] generateArray(int x, int y) {

        // Setting size of the array.
        int[][] arr = new int[x][y];

        // Variable delta is used to change the direction of the numbering.
        int delta = 1;

        int num = 0;
        int i = -1, j = 0;
        int p;

        // Filling rows.
        while (true) {
            for (p = 0; p < x; p++) {
                i += delta;
                arr[i][j] = num;
                num++;
            }

            // Handling the size of numbers to put in the array.
            x--; y--;

            // Setting the breaking point of the while loop.
            if (x < 0 || y < 0) break;

            // Filling columns.
            for (p = 0; p < y; p++) {
                j += delta;
                arr[i][j] = num;
                num++;
            }

            // Changing the direction.
            delta = -delta;
        }
        return arr;
    }


    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Setting size of the array.
        System.out.print("Input array size that you want to generate: ");
        int x = input.nextInt();
        int y = input.nextInt();

        // Use generateArray method.
        int[][] arr = generateArray(x, y);

        // Printing the array generated.
        for (int i = 0; i < x; i++)
            System.out.println(Arrays.toString(arr[i]));
    }
}
