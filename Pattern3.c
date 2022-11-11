/*
Accept number of rows and number of columns from user and display below pattern.
Input :  iRow=3 ,iCol=4

Output: *  #  *  #
        *  #  *  #
        *  #  *  #
*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
   int i,j=0;

   for(i=1;i<=iRow;i++)
   {
     for(j=1;j<=iCol/2;j++)
      {
          printf("*\t#\t");
      }
      printf("\n");
   }    
}

/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and Columns");
    scanf("%d",&iValue1);

    printf("Enter number of rows and Columns");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}