import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		int a;
		System.out.println("Please input an intenger");
		a = sc.nextInt();
		int b;
			System.out.println("Please input another intenger");
		b = sc.nextInt();
		int c;
			System.out.println("Please input another intenger");
		c = sc.nextInt();
		if ((a > b) && (a > c)){
			System.out.println(a +  " is the largest integer");
		}
		if ((b > a) && (b > c)){
			System.out.println(b + " is the largest integer");
		}
		if ((c > a) && (c > b)){
			System.out.println(c +  " is the largest integer");
		}
		if ((a < b) && (a<c)){
			System.out.println(a + " is the smallest integer");
		}
		if ((b < a) && (b < c)){
			System.out.println(b + " is the smallest integer");
		}
		if ((c < a) && (c < b)){
			System.out.println(c + "is the smallest integer");
		}
	}
}
