class MyThread extends Thread {
    int start, end;

    MyThread(int start, int end) {
        this.start = start;
        this.end = end;
    }

    public void run() {
        for (int i = start; i <= end; i++) {
            System.out.println(i);
        }
    }
}

public class Main {
    public static void main(String[] args) {
        MyThread t1 = new MyThread(1, 10);
        MyThread t2 = new MyThread(11, 20);

        t1.start();
        t2.start();
    }
}