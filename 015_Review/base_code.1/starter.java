import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	
		String name = "thing2";
        String title = "thing";
        String trait = " ";
        int power;
        int userPoints = 25;
        Scanner input = new Scanner(System.in);
        System.out.println("What trait do you desire?");
        System.out.println();
        System.out.println("Strength, Dexterity, Intelligence, Constitution, Charisma");
        while(userPoints >= 0){
            trait = input.nextLine();
            if(trait.equals("strength") || trait.equals("Strength") || trait.equals("dexterity") || trait.equals("Dexterity") || trait.equals("intelligence") || trait.equals("Intelligence") || trait.equals("constitution") || trait.equals("Constitution") || trait.equals("charisma") ||trait.equals("Charisma")){
            System.out.println("You have " + userPoints  + " Points. How many points would you like to allocate?");
            power = input.nextInt();
            userPoints -= power;
            if(power > 10){
                System.out.println("The maximum amount of points you can allocate into one trait is 10.");
                System.out.println("What trait do you desire?");
                System.out.println();
                System.out.println("Strength, Dexterity, Intelligence, Constitution, Charisma");
            }
            else{
                System.out.println("You allocated " + power + " points into " + trait + ". You have " + userPoints + " left."); 
                System.out.println("What trait do you desire?");
                System.out.println();
                System.out.println("Strength, Dexterity, Intelligence, Constitution, Charisma");
            }
            
            if(userPoints <= 0){
                System.out.println("You have no more points to allocate.");
                System.out.println();
                System.out.println("Your name is: " + name + ". Your title is: " + title + ". Your stats are: " + trait + " " + trait + " Power level: " + power);
            }
            }

        }
		
	}
}
