#Given a list of n numbers. We have to find the equilibrium point
my_list = []
num = int(input("How many numbers you want to input: "))
for i in range(num):
    ele = int(input("Enter the element: "))
    my_list.append(ele)


length = len(my_list)
pointer = length - 2
print(my_list)


while(pointer >= 0):
    flag = 0
    left_sum = 0
    right_sum = 0

    #for right side
    for i in range(pointer,length):
        right_sum += my_list[i]

    #for left side
    for j in range(0,pointer):
        left_sum += my_list[j]

    if(left_sum == right_sum):
        print("Eqi point element, is included in Right side Sum")
        print("And, It is excluded in Left side Sum")
        print(f"Hence, the equi point element is {my_list[pointer]}")
        flag = 1
        break

    
    pointer -= 1

if(flag==0):
    print("No eqi point in the List.")


"""
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

"""


