import sys
import Operator as op
import Customer as cp

c=sys.stdout.shell

def main():
    try:
        c.write("="*80+"\n","COMMENT")
        c.write("Welcome in Food Order System".center(80)+"\n","KEYWORD")
        c.write("="*80+"\n","COMMENT")
        c.write("Which Type Of User You Have?\n 0.Operator\n 2.Customer\n","STRING")
        user=int(input())
        if user==0:op.login()
        elif user==1:cp.menu()
        
        
    except Exception as ex:
        print([ex])

main()
print("Thanks For Visiting")
