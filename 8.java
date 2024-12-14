class Outer {
    void display() {
        System.out.println("Outer class display()");
    }

    class Inner {
        void display() {
            System.out.println("Inner class display()");
        }
    }
}

public class OuterInnerDemo {
    public static void main(String[] args) {
        Outer outerObj = new Outer();
        Outer.Inner innerObj = outerObj.new Inner();

        // Calling display() of Outer class
        outerObj.display();

        // Calling display() of Inner class
        innerObj.display();
    }
}
