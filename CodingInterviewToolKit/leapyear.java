import java.io.*;
class leapyear
 {
    public static void main(String args[])
     {
        int year=Integer.parseInt(args[0]);
        
        if(year%4==0 && year%400==0 || year%100!=0)
          {
            System.out.println(year+" is leap year");
          }//end if
        else
            System.out.println(year+" is not leap year");    
     }//end main()
 }//end class

