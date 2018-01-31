public class HelloHaskell {
	static {
		System.loadLibrary("fibonacci");
	}
	private native static int fibonacci(int n);
	
	public static void main(String[] args) {
		System.out.println(fibonacci(42));
	}
}