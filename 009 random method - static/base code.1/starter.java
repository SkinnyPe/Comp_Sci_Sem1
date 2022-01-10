import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	Random rand = new Random();
	int x;
	x = rand.nextInt(8);
	System.out.println(x);
	int y;
	y = rand.nextInt(100) + 1;
	System.out.println(y);
	double z;
	z = rand.nextDouble() + 2.5;
	System.out.println(z);
	double r;
	r = rand.nextDouble()*575 + 14;
	System.out.println(r);
	}
}
