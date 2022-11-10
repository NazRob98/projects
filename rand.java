
import java.util.*;
public class rand
{
    public static void main(String[] args)
    {
        Scanner num = new Scanner(System.in); //
        System.out.print("Please enter in number between 1-6:");
        int n=num.nextInt(); // starting postion of walk
        if(n<=0 || n>=6)
        {
            while(n>=6 || n<=0)
            {
                System.out.print("Please enter correct number:" );
                n=num.nextInt();
            }
        }
        int k=n;//here to reset n 
        System.out.print("how many time would you like to cycle?:");
        int j=num.nextInt();// num of cycles 
        if(j<=0)
        {
            while(j<=0)
            {
                System.out.print("Please enter in valid amount:");
                j=num.nextInt();
            }
        }
        int counter1=0;//reps 0 postion
        int counter2=0;//reps 6 postion
        for(int i=0;i<j;i++){
            n=k;//resets n for while loop
            while(n>0 && n<6){
                int rand=(int)(Math.random()*2);//run random num 
                if(rand==1)//repersents moving forward in position
                {
                    n=n+1;
                }
                if(rand==0)//repersents back forward in position
                {
                    n=n-1;
                }
                if(n==0)//how many time di reach position 0
                {
                    counter1=counter1+1;
                }
                if(n==6)//how many times it reached position 6
                {
                    counter2=counter2+1;
                }
                //System.out.println(n);
            }
            if(i==j-1)//once final cycle is reach show results
            {
                System.out.println("number of times it hit 0:" + counter1);
                System.out.println("number of times it hit 6:" + counter2);
            }
        }
    }
}