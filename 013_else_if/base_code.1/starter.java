import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		int secret;
		secret = 690;
		System.out.println("Please input and guess a number between 1-1000");
		int guess;
		guess = sc.nextInt();
		if ((guess == secret) && (guess > 0) && (1000 >= guess)){
			System.out.println("You got the right answer");
		}
		else if ((guess > secret) && (guess > 0) && (1000 >= guess)){
			System.out.println("Your number is too large");
		}
		else if ((guess < secret) && (guess > 0) && (1000 >= guess)){
			System.out.println("Your number is too small");
		}
		else{
			System.out.println("Your number does not fit the parameters");
		} 
	}
}
