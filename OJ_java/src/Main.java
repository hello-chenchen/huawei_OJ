import java.util.Scanner;

public class Main {

	public static String MarkNum(String strInPut)
	{
		boolean flag = true;
		boolean resume = true;
		char[] chInPut = strInPut.toCharArray();
		
		String strRet = "";
		for(int i = 0; i < chInPut.length; i++)
		{
			if(((chInPut[i] >= 48) && (chInPut[i] <= 57)) && (flag))
			{
				strRet += "*" + chInPut[i];
				flag = !flag;
				if(i == (chInPut.length - 1))
				{
					strRet += "*";
				}
			}
			else if(((chInPut[i] <= 48) || (chInPut[i] >= 57)) && (!flag))
			{
				strRet +="*" + chInPut[i];
				flag = !flag;
					
			}
			else
			{
				strRet += chInPut[i];
			}
		}
		
		return strRet;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String strInPut = sc.nextLine();
		strInPut = MarkNum(strInPut);
		System.out.println(strInPut);
	}
}
