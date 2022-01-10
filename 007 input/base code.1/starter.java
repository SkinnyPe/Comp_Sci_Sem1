import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		 
		Scanner sc = new Scanner(System.in);
		String p;
		System.out.println("Type your first name");
		p = sc.nextLine();
		System.out.println("Your first name is " + p);
		String o;
		System.out.println("Type your age");
		o = sc.nextLine();
		System.out.println("Your age is " + o);
		String i;
		System.out.println("What is the month of your Birthday");
		i = sc.nextLine();
		System.out.println("The month of my birthday is " + i);
		int u;
		System.out.println("What is the Day of your birthday");
		u = sc.nextInt();
		System.out.println("The Day of my birthday " + u);
		int y;
		System.out.println("What is the Year of your birthday?");
		y = sc.nextInt();
		System.out.println("The year of my birthday is " + y);
		Double t;
		System.out.println("How much is a buck fifty");
		t = sc.nextDouble();
		System.out.println("A buck fifty is " + t);
		
	}
}
