using System;

class Program
{
    public static void Main(string[] args)
    {
        // boot stuff
        Console.WriteLine("----------------------------------------------------------------");
        Console.WriteLine("ZivTerm Rewritten In C# | Copyright 'zvqle' All Rights Reserved");
        Console.WriteLine("----------------------------------------------------------------");
        Console.WriteLine("");
        Console.WriteLine("Type 'help' for a list of commands");
        Console.WriteLine("Make Sure Commands are LowerCased");
        Console.WriteLine("");
        // the shell
        int loop = 0;
        while (loop < 5)
        {
            Console.Write(":- ");
            string shell = Console.ReadLine();
            // commands
            // main base commands in here, more powerful commands are coded in a diffrent function
            if (shell == "test")
            {
                Console.WriteLine("Sucsess!");
            }
            else if (shell == "help")
            {
                Console.WriteLine("The Commands Are: ");
                Console.WriteLine("calc - a mini calculator");
                Console.WriteLine("ver - Version Of ZivTerm");
                Console.WriteLine("credit - Makers Of ZivTerm");
                Console.WriteLine("mindgame - A Fun MindGame");
            }
            else if (shell == "calc")
            {
                calc();
            }
            else if (shell == "ver")
            {
                Console.WriteLine("ZivTerm Rewritten In C#, v0.1");
            }
            else if (shell == "credit")
            {
                Console.WriteLine("ZivTerm Rewritten In C#");
                Console.WriteLine("Creator: zvqle");
                Console.WriteLine("His Website, https://zvqle.vercel.app");
                Console.WriteLine("his youtube, https://youtube.com/zvqle");
                Console.WriteLine("his discord IGN, zvqle#6645");
                Console.WriteLine("Copyright 'zvqle', All Rights Reserved");
            }
            else if (shell == "mindgame")
            {
                mindGame();
            }
            else
            {
                Console.WriteLine("Wrong Input, Type 'help' for a list of commands");
            }
        }
    }

    // The Calculator
    static void calc()
    {
        Console.Write("Enter Num1: ");
        double num1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter Num2: ");
        double num2 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter Operator: ");
        string op = Console.ReadLine();
        if (op == "+")
        {
            Console.WriteLine(num1 + num2);
        }
        else if (op == "-")
        {
            Console.WriteLine(num1 - num2);
        }
        else if (op == "/")
        {
            Console.WriteLine(num1 / num2);
        }
        else if (op == "*")
        {
            Console.WriteLine(num1 * num2);
        }
    }
    // The MindGame
    static void mindGame()
    {
        Console.WriteLine("");
        Console.WriteLine("Theirs a man with a gun in front of you");
        Console.WriteLine("He Tells You To Give Him Your Wallet, Which Has A Bunch Of Money inside");
        Console.WriteLine("So What Do You Do?");
        Console.WriteLine("Choices:");
        Console.WriteLine("1 = Run Away");
        Console.WriteLine("2 = Attack Him And Takes His Gun");
        Console.WriteLine("3 = Give Him Your Money");
        Console.WriteLine("4 = Do The 'Baby Shark'");
        Console.WriteLine("Choose The Number, Choose Wisely");
        Console.Write("Number: ");
        string lost = " YOU LOST";
        string won = " YOU WON";
        string ansGame = Console.ReadLine();
        if (ansGame == "1")
        {
            Console.WriteLine("He Shot You While You were Running and you died!" + lost);
        }
        else if (ansGame == "2")
        {
            Console.WriteLine("He Shot You While You Were Attackiing" + lost);
        }
        else if (ansGame == "3")
        {
            Console.WriteLine("You Survived But You Now Are Broke" + lost);
        }
        else if (ansGame == "4")
        {
            Console.WriteLine("He got confused and left you" + won);
        }
        else
        {
            Console.WriteLine("Wrong Input");
        }

        Console.Write("");
    }
}