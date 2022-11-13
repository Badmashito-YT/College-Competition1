#include<stdio.h>

void print_array(int n, int x[]);

int main()
{
    int arr[50],num;

    printf("How many numbers you want to input: ");
    scanf("%d",&num);

    //Storing the values in "arr"
    for(int a=0; a<num;a++)
    {
        printf("\nEnter the element: ");
        scanf("%d",&arr[a]);
    }

    //Calling the function to print the array
    print_array(num,arr);

    //Variables
    int pointer, flag, i, j, left_sum, right_sum;
    pointer = num - 2;

    //Main Logic
    while(pointer >= 0)
    {
        flag = 0;
        left_sum = 0;
        right_sum = 0;

        //For Right side
        for(i=pointer;i<num;i++)
        {
            right_sum += arr[i];
        }

        //For Left side
        for(j=0;j<pointer;j++)
        {
            left_sum += arr[j];
        }

        //Condition
        if(left_sum == right_sum)
        {
            printf("\nEqi point element, is included in Right side Sum");
            printf("\nAnd, It is excluded in Left side Sum");
            printf("\nHence, the equi point element is %d .",arr[pointer]);
            flag = 1;
            break;
        }


        pointer --;
    }
    if(flag==0)
    {
        printf("\nNo eqi point in the List.");
    }

    return 0;
}

void print_array(int n,int x[]){
    printf("\n");
    for(int a=0;a<n;a++){
        printf("%d ",x[a]);
    }
}

/*
Try this testcases

(1)testcase1:
num=5
10,5,3,9,9
ans=9

(2)testcase2:
num=6
6,9,5,4,2,4
ans=5

(3)testcase3:
num=6
5,4,4,2,9,6
ams=9

*/
