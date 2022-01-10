import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.println("Choose a Wizard, Warrior, or Rogue");
		String in = sc.nextLine();
		if(in.equals("wizard") || in.equals("Wizard")){
			System.out.println("You have chosen to be a wizard.");
		}
		else if(in.equals("warrior") || in.equals("Warrior")){
			System.out.println("You have chosen to be a warrior.");
		}
		else if(in.equals("rogue") || in.equals("Rogue")){
			System.out.println("You have chosen to be a rogue.");
		}
		else{
			System.out.println("you have chosen an invalid character");
		}
		
		
		
		
		
		
		
	}
}
