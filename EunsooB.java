import java.util.Scanner;

public class EunsooB {
    public static void main(String[] args) {
        int a;
        Scanner sc = new Scanner(System.in);
        int jinwisung = 0;
        int row = 0;

        a = sc.nextInt();
        for (int i = 0; i < a; i++) {
            String jinjalu = sc.next();
            if (jinjalu.equalsIgnoreCase("jinjaru")) {
                if (row > 0 && row % 2 == 0) {
                    jinwisung++;
                } else if (row % 2 == 1) {
                    jinwisung--;
                }
                jinwisung++;
                row = 0;
            } else {
                row++;
            }
        }

        if (row > 0) {
            if (row % 2 == 0) {
                jinwisung++;
            } else {
                jinwisung--;
            }
        }

        System.out.println(jinwisung);
    }
}
