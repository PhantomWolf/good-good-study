import java.net.*;

public class EvilEmpire {

	public static void main(String[] args) throws Exception {
		try {
			Socket s = new Socket("192.168.0.32", 22);
			System.out.println("Connected!");
		} catch(SecurityException e) {
			System.out.println("SecurityException: could not connect");
		}
	}

}

