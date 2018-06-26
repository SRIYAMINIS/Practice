import java.util.*;
import java.lang.*;
import java.io.*;
class employee
{
	int roll_no;
	String name;
	String dep;
	int age;
	float salary;
	String address;
public void get_data()
	{
		Scanner s=new Scanner(System.in);
		System.out.println("enter the rollno");
		int roll_no=Integer.parseInt(s.nextLine());
		System.out.println("enter the name");
		String name=s.nextLine();
		System.out.println("enter the dep");
		String dep=s.nextLine();
		System.out.println("enter the age");
		int age=Integer.parseInt(s.nextLine());
		System.out.println("enter the salary");
		float salary=Integer.parseInt(s.nextLine());
		System.out.println("enter the address");
		String address=s.nextLine();
	}
	public void put_data()
	{
		System.out.println("rollno:"+roll_no);
		System.out.println("name:"+name);
		System.out.println("name:"+dep);
		System.out.println("age:"+age);
		System.out.println("rollno:"+salary);
		System.out.println("name:"+address);
	}
}
	public class display
	{
		public static void main(String args[])
		{
		employee[] e=new employee[2];
		for(int i=0;i<e.length;i++)
		{
			e[i]=new employee();
			e[i].get_data();
		}
		int n;
		Scanner a=new Scanner(System.in);
		System.out.println("roll_no");
		n=Integer.parseInt(a.nextLine());
		for(int j=0;j<e.length;j++)
		{
			if(e[j].roll_no==n)
                        e[j].put_data();
		}
	}
	}
