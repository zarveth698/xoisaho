using System;
public class HeyMan {
    public static void Main(string[] args) {
        Console.Write("Enter the First Number. ");
        int a = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter the Second Number. ");
        int b = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter the Operations: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n");
        int op = Convert.ToInt32(Console.ReadLine());

        switch(op)
        {
            case 1:
                Console.WriteLine("Addition of the Numbers is: " + (a+b));
                break;
            case 2:
                Console.WriteLine("Subtraction of the Numbers is: " + (a-b));
                break;
           case 3:
                Console.WriteLine("Multiplication of the Numbers is: " + (a*b));
                break;
           case 4:
                if(b == 0)
                {
                   Console.Write("Division can't be possible cuz denominator is Zero");
                }
                else
                {
                   Console.WriteLine("Division of the Numbers is: " + (a/b));
                }
                break;             
            default:
                 Console.Write("Invalid Operations");
                break;
  
        }
    }
}