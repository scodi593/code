import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;
   public class Solution {
    private static final Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        int N = scanner.nextInt();
            if (N%2 != 0 )
            System.out.println("Weird");
             if (N%2 == 0 )
                 if(N>=2 && N<=5 || N>20)
                    System.out.println("Not Weird");
                else if(N>=6 && N<=20)
                    System.out.println("Weird");
    }
}
