class MyRunnable implements Runnable {
    private String threadName;

    public MyRunnable(String threadName) {
        this.threadName = threadName;
    }

    public void run() {
        try {
            System.out.println("Thread " + threadName + " is starting...");
            Thread.sleep(500); // Suspend the thread for 500 milliseconds
            System.out.println("Thread " + threadName + " is running...");
        } catch (InterruptedException e) {
            System.out.println("Thread " + threadName + " interrupted.");
        }
        System.out.println("Thread " + threadName + " is exiting.");
    }
}

public class RunnableThreadExample {
    public static void main(String[] args) {
        System.out.println("Main thread is starting...");

        // Create multiple threads using the Runnable interface
        Thread thread1 = new Thread(new MyRunnable("Thread 1"));
        Thread thread2 = new Thread(new MyRunnable("Thread 2"));
        Thread thread3 = new Thread(new MyRunnable("Thread 3"));

        // Start each of the newly created threads
        thread1.start();
        thread2.start();
        thread3.start();

        System.out.println("Main thread is exiting...");
    }
}
