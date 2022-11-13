#Given a List of n numbers. We have to find the first occuring Pythogorean Triplet
my_list = []
num = int(input("How many numbers you want to input: "))
for i in range(num):
    ele = int(input("Enter the element: "))
    my_list.append(ele)

#Conditions to check
length = len(my_list)
my_list.sort()
print(my_list)

flag = 0
for a in range(0,length):
    for b in range(a+1,length):
        for c in range(b+1,length):
            expression = (pow(my_list[a],2) + pow(my_list[b],2))
            if(expression == pow(my_list[c],2)):
                print(f"{Pythagorean Triplet are: my_list[a]},{my_list[b]} and {my_list[c]}.")
                flag = 1
                break

if(flag == 0):
    print("No Pythagorean Triplet in the given List.")


"""
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

"""
