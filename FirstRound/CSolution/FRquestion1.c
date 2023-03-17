#include<stdio.h>

int main()
{
    int arr[50],num,i,j,temp;
    printf("How many numbers you want to input: ");
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
        printf("\nEnter the element: ");
        scanf("%d",&arr[i]);
    }
    //Now we will sort the elements in Aescending order
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
   int a,b,c,flag=0;
   double expression;

   for(a=0;a<num;a++)
   {
    for(b=a+1;b<num;b++)
    {
        for(c=b+1;c<num;c++)
        {
            expression = ((arr[a]*arr[a]) + (arr[b]*arr[b]));
            if(expression == arr[c]*arr[c])
            {
                printf("Pythogorean Triplet are: %d, %d and %d",arr[a],arr[b],arr[c]);
                flag = 1;
                break;
            }
        }
    }
   }
   if(flag == 0)
   {
    printf("No Pythagorean Triplet in the given List.");
   }


    return 0;
}

/*
Try this testcases
(1)testcase1:
num=5
10,5,3,9,4
ans=3,4,5

(2)testcase2:
num=6
99,13,5,4,2,12
ans=5,12,13

(3)testcase3:
num=6
5,4,13,2,12,6
ams=5,12,13

*/
