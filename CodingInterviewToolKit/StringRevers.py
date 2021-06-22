# write a program to reverse a string

def reverseString(str):
    """Reverse string function"""
    rstr=""
    i=len(str)-1
    while(i>=0):
        rstr=rstr+str[i]
        i-=1
    return rstr    

# accept string from user
str=input("Enter string :")
result=reverseString(str)
print("Reverse string is: ",result)