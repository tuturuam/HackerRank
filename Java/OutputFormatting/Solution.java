import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
		
		String lefty = String.format("%-15s", s1);
		System.out.print(lefty);
		if(x>=100) {
			System.out.print(x);
		} else if (x<100&&x>=10) {
			System.out.print("0"+x);
		} else if (x<10&&x>1) {
			System.out.print("00"+x);
		} else if (x==0) {
			System.out.print("000");
		}
		System.out.println();
            }
            System.out.println("================================");

    }
}
