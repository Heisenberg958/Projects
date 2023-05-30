import sys
import Operator as op
import Customer as cp

c=sys.stdout.shell

def main():
    try:
        c.write("="*80+"\n","COMMENT")
        c.write("Welcome to Our Store".center(80),"KEYWORD")
        c.write("="*80+"\n","COMMENT")
        c.write("Which Type Of Users Do You Have? \n 0.Operator\n 1.Customer","STRING")
        user=int(input())
        if user==0:op.menu
        elif user==1:cp.menu
        
    except Exception as ex:
        print([ex])
    
    
main()
print("Thank You For Visiting,Have A Great Day")

    
        



             
    
