import java.io.*;

class PalindromNumber
{
   public static void main(String args[])
   {
       BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
       int num=Integer.parseInt(args[0]);
       int x=num;
       int rnum=0;
       int flag=1,lastdigit;
        
        while(num>0)
        {
           lastdigit=num%10;
           rnum=(rnum*10)+lastdigit;
           num/=10;
        }//end while

       if (rnum==x)
        {
            System.out.println("Same number");

        }  
        else
            System.out.print("NOt same");
       
   }//end main()
}//end class