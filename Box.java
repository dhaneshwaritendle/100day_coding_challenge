public class Box {
    double width;///instance1
    double height;//instance 2
    double depth;//instance3
    //CONSTRUCTING A BOX
    Box (double w, double h, double d){//parameterized constructop
        System.out.println("constructing box");
        width=w;
        height=h;
        depth=d;
    }
    //method to calculate volume
    double volume(){

        return width * height * depth;
    }

     //method that sets dimensions of box
    void setdim(double w, double h, double d){
    width=w;
    height=h;
    depth=d;
    }
}
class Box5{
    public static void main(String[]args){
        Box b5=new Box(10,20,30);
        System.out.println("volume of b5="+b5.volume());
    }
}
/*
class Box4{

    public static void main(String[]args){
        Box b1=new Box();

        System.out.println("volume of b1="+b1.volume());
    }
}
    class Box1{
    public static void main(String[] args){
      Box b1=new Box();
        Box b2=b1;// creates box object called mybox
        double vol;
      //assign values to mybox instance variables
        b1.width=1;
        b1.depth=1;
        b1.height=1;
        b1=null;
        //compute area of box
        vol=b2.depth* b2.height* b2.width;
        //System.out.println("volume =" +vol);
        System.out.println("vol="+vol);
        }
    }
    class Box2{
       public static void main(String[] args) {
            Box b1 = new Box();
            Box b2 = new Box();
          b1.depth=2;
          b1.height=3;
          b1.width=1;

           b2.depth=22;
           b2.height=33;
           b2.width=11;

           //DISPLAY VOLUME OF B1AND B2
           System.out.println("volume="+b1.volume());
           System.out.println("volume="+b2.volume());
        }
    }

class Box3{
    public static void main(String[]args){
        Box b1=new Box();
        Box b2=new Box();

        b1.setdim(1,2,3);
        b2.setdim(12,23,34);

        System.out.println("volume="+b1.volume());
        System.out.println("volume="+b2.volume());


    }
}
*/


