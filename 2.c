public class Stack
{
    int top=-1;
    private int MAX_SIZE=100;
    int a[]=new int[MAX_SIZE];

    void push(int X)
    {
        if(top==MAX_SIZE-1)
        {
            System.out.println("STACK OVERFLOW");
            System.exit(1);
        }
        System.out.println("inserted element:"+X);
        a[++top]=X;
    }
    int pop()
    {
        if(top==-1)
        {
            System.out.println("STACK EMPTY");
            System.exit(1);
        }
        return a[top--];
    }
    public static void main(String args[])
    {
        Stack s =new Stack();
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);   
        s.push(50);
        s.push(60);
        s.push(70);
        
        System.out.println("the element removed is:"+s.pop());
        System.out.println("the element removed is:"+s.pop());
        System.out.println("the element removed is:"+s.pop());

        System.out.println("the element removed is:"+s.pop());

        System.out.println("the element removed is:"+s.pop());

        System.out.println("the element removed is:"+s.pop());

        System.out.println("the element removed is:"+s.pop());

        System.out.println("the element removed is:"+s.pop());


        System.out.println("the stack elements after removal are:");
        for(int i=0;i<=s.top;i++)
        {
            System.out.println(s.a[i]);
        }
    }
}
