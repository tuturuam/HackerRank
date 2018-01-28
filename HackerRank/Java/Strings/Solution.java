import java.util.*;

public class Solution {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String A = sc.next();
		String B = sc.next();

		int a = A.length() + B.length();
		String afir = A.substring(0, 1);
		String bfir = B.substring(0, 1);
		String acap = afir.toUpperCase()+A.substring(1,A.length());
		String bcap = bfir.toUpperCase()+B.substring(1,B.length());
		int ai = A.hashCode();
		int bi = B.hashCode();

		System.out.println(a);
		if(A.compareTo(B)>0) {						//using compareTo, we can find out if either A or B is later alphabetically
			System.out.println("Yes");
		}else System.out.println("No");
		System.out.println(acap+" "+bcap);
	}
}
