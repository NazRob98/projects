/**
 * Write a description of class rand4 here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
import java.util.*;
public class rand4
{
    public static void main(String[] args)
    {
        double q = 0;
        double v = 0;
        double z = 0;
        int i=1;
        int j=1;
        int [][] a = {{1,1,1,1,1,1,1},
                      {1,0,0,0,0,0,1},
                      {1,0,0,0,0,0,1},
                      {1,0,0,0,0,0,1},
                      {1,0,0,0,0,0,1},
                      {1,0,0,0,0,0,1},
                      {1,1,1,1,1,1,1}
        };
        int [][] a2=new int[7][7];
        a2[0][0]=1;
        a2[0][1]=1;
        a2[0][2]=1;
        a2[0][3]=1;
        a2[0][4]=1;
        a2[0][5]=1;
        a2[0][6]=1;
        a2[1][0]=1;
        a2[2][0]=1;
        a2[3][0]=1;
        a2[4][0]=1;
        a2[5][0]=1;
        a2[6][0]=1;
        a2[6][1]=1;
        a2[6][2]=1;
        a2[6][3]=1;
        a2[6][4]=1;
        a2[6][5]=1;
        a2[6][6]=1;
        a2[1][6]=1;
        a2[2][6]=1;
        a2[3][6]=1;
        a2[4][6]=1;
        a2[5][6]=1;
        System.out.println("Case one:");
        if(i<=5 && j<=5)
        {
            a2[i][j]=0;
        }
        for(i=0; i<7;i++)
        {
            for(j=0; j<7;j++)
            {
                if((j>=1 && i>=1) && (i<6 && j<6)){
                 q=(.25)*(a2[i-1][j]+a2[i+1][j]+a2[i][j-1]+a2[i][j+1]+1);
                 v=(.25)*(a2[i-1][j]+a2[i+1][j]+a2[i][j-1]+a2[i][j+1]);
                 
                 System.out.println(",%,At position:"+"["+i+"]"+"["+j+"]"+"="+q);
                 System.out.println("|");
                 System.out.println("|");
                 System.out.println("|");
                 System.out.println("|");
                 System.out.println(",%,At position:"+"["+i+"]"+"["+j+"]"+"="+v);
                 System.out.println("-----------------------------------------");
                }
               
            }
           
        }
       
       
    }
}
