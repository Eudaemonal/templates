import java.util.*;
import java.io.*;

public class Test01{

    static int f(int[] arr){
        System.out.printf("%s\n", Arrays.toString(arr));

        return 0;
    }

    public static void main(String[] args) throws IOException{
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        int[] arr = new int[n];

        for(int i = 0; i < n; i++){
            arr[i] = scan.nextInt();
        }
        
        System.out.printf("%d\n", f(arr));

        scan.close();
    }
}
