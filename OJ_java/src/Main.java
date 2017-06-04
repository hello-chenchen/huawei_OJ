import java.util.Scanner;

public class Main {

    public static String RemoveInvildCharacter(String inPut)
    {
        String strRet = "";
        char[] chArray = inPut.toCharArray();
        int inPutLen = inPut.length();
        for(int i = 0; i < inPutLen; i++)
        {
            if(chArray[i] >= chArray[i++])
            {
                strRet = inPut.substring(0, i) + inPut.substring(i+1, inPut.length());
                break;
            }
        }

        return strRet;
    }

    public static int IsCorrectChar(String strValue) {

        char[] chArray = strValue.toCharArray();
        int inPutLen = strValue.length();
        for(int i = 0; i < inPutLen; i++)
        {
            if(chArray[i] >= chArray[i++])
            {
                return 0;
            }
        }
        return 1;
    }

    public static int who(String in)
    {
        String strRemoveChar = "";

        for(int i = 0; i < in.length(); i++)
        {
//            in = in.substring(0, i) + in.substring(i+1, in.length());
            strRemoveChar = RemoveInvildCharacter(in);
            if(1 == IsCorrectChar(strRemoveChar))
            {
                if(0 == (strRemoveChar.length() % 2))
                    return 1;
                else
                    return 0;
            }
        }

        if(in.length() > 1)
            who(in);

        return 0;
    }

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String strInPut = sc.nextLine();
		int ret = who(strInPut);
		System.out.println(ret);
	}
}
