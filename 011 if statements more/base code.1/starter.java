import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		int u;
		System.out.println("Please input an integer");
		u = sc.nextInt();
		int x;
		System.out.println("Please input another integer");
		x = sc.nextInt();
		if (u == x){
			System.out.print("They are equal!");
		}
		if (u != x){
			System.out.print("They are different!");
		}
	
	}
}
