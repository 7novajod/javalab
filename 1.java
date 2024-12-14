import java.util.Scanner;
public class AddMatrices
{
    public static void main(String[] args)
    {
        int n=Integer.parseInt(args[0]);
        int i,j;
        
        int mat1[][]= new int[n][n];
        int mat2[][]= new int[n][n];
        int res[][]= new int[n][n];

        Scanner in = new Scanner(System.in);

        System.out.println("enter the elements of matrix 1:");

        for(i=0;i<n;++i)
        {
            for(j=0;j<n;++j)
            {
                mat1[i][j]=in.nextInt();
            }
        }
        System.out.println("enter the elements of matrix 2:");

        for(i=0;i<n;++i)
        {
            for(j=0;j<n;++j)
            {
                mat2[i][j]=in.nextInt();
            }
        }
        for(i=0;i<n;++i)
        for(j=0;j<n;++j)
        res[i][j]=mat1[i][j]+mat2[i][j];

        System.out.println("the sum of two matrices--");
        for(i=0;i<n;++i)
        {
            for(j=0;j<n;++j)
            {
                System.out.println(res[i][j]+"\t");
            }
        }
        System.out.println();
    }
}
