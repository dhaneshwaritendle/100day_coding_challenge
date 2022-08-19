public class Method {
    //method called as test
    void test(){System.out.println("no parameters");}
    void test(int a){System.out.println("a:"+a);}
    void test(int a,int b){System.out.println("a and b:"+a+" "+b);}
    double test(double a){
        System.out.println("double a:" +a);
        return a*a;}
}

//calling method in the main function
class Overload{
    public static void main(String[] arg) {
        Method o=new Method();
        double result;
        //call all versions of tests()
        o.test();
        o.test(34);
        o.test(3, 6);
        o.test(66.4);
    }

}
