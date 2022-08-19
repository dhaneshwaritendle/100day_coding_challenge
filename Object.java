public class Object {int a,b;
Object(int i, int j){a=i;b=j;}

    //return true if
    boolean equal(Object o) {
if (o.a==a && o.b==b) return true;
else return false;
    }
}s
class Pass{
    public static void main(String[]args){
        Object o1=new Object(100,200);
        Object o2=new Object(200,200);
        System.out.println("o1==02"+o1.equal(o1));
        System.out.println("o1==02"+o2.equal(o2));
    }
}
