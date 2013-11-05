package marshal.helloubuntuapp;

public class NativeUtils {
	public native void sayHello(); 
	
	static{
		System.loadLibrary("NativeUtils");
	}
}
