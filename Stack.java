class Stack {//NAME OF THE CLASS STACK
    int st[]=new int[10];
    int top;
//initialise top ofstack
    Stack(){
        top=-1;
    }
    //push an item onto stack
    void push (int i){
        if(top==9)
            System.out.println("Stack is full:");
        else
            st[++top]=i;
    }
    //pop an item from the stack
    int pop(){
        if(top<0) {
            System.out.println("stack underflow");
            return 0;}
        else return st[top--];
    }
}
class Teststack{
    public static void main (String[] args){
        Stack st1=new Stack();
Stack st2=new Stack();
    //PUSH NUMBERS INTO THE STACK
        for (int i=0; i<10;i++)
            st1.push(i);
        //POP NUMBER OFF THE STACK
        for (int i=0;i<10;i++)
            System.out.println(st1.pop());

        for (int i=0; i<10;i++)
            st2.push(i);
        //POP NUMBER OFF THE STACK
        for (int i=0;i<10;i++)
            System.out.println(st2.pop());
    }
}
