public class duplicate {
    int nums[];
    int len=nums.length();
        for(int i=0; i<len; i++)
        {for(int j=i+1;i<len;j++)
            if(num[i]==num[j])
            {
                return true;
            }
            else
                return false;
            }
        }
}
class Main{
    public static void main(String[]args){
        duplicate d1=new duplicate();
        d1.nums[]={1,2,3,4,4};
        System.out.println("print:"+d1.duplicate());
    }s
}

